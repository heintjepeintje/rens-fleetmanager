#include "./robot.hpp"

namespace fleetmanager {

	robot::robot(const std::string &name) : Node("fleetmanager_" + name), m_name(name) {
		m_location_sub = create_subscription<fltmsg::Location>(get_server_topic_name(name, "location"), 10, [this](fltmsg::Location::SharedPtr message) {
			this->m_location.x = message->x;
			this->m_location.y = message->y;
			this->m_location.level = message->level;

			RCLCPP_INFO(this->get_logger(), "%s: received new destination: %u, %u, %u", this->m_name.c_str(), message->x, message->y, message->level);
		});

		m_error_sub = create_subscription<fltmsg::Error>(get_server_topic_name(name, "error"), 100, [this](fltmsg::Error::SharedPtr message) {
			this->m_error.severity = static_cast<error_severity>(message->severity);
			this->m_error.timepoint = message->timepoint;
			this->m_error.description = message->description;

			RCLCPP_INFO(this->get_logger(), "%s: received an error: %s", this->m_name.c_str(), message->description.c_str());
		});

		m_status_sub = create_subscription<fltmsg::Status>(get_server_topic_name(name, "status"), 10, [this](fltmsg::Status::SharedPtr message) {
			status new_status = static_cast<status>(message->status);
			if (new_status == status::error && this->m_status != status::error) {
				RCLCPP_INFO(this->get_logger(), "%s: new status: \"STATUS_ERROR\"", this->m_name.c_str());
			} else if (new_status == status::idle && this->m_status != status::idle) {
				RCLCPP_INFO(this->get_logger(), "%s: new status: \"STATUS_IDLE\"", this->m_name.c_str());
			} else if (new_status == status::busy && this->m_status != status::busy) {
				RCLCPP_INFO(this->get_logger(), "%s: new status: \"STATUS_BUSY\"", this->m_name.c_str());
			}
			this->m_status = static_cast<status>(message->status);

			if (this->m_state == state::awaiting_confirmation && m_status == status::busy) {
				this->m_state = state::busy;
			} else if (this->m_state == state::busy && m_status == status::idle) {
				this->m_state = state::idle;
			} 
		});

		m_route_pub = create_publisher<fltmsg::Route>(get_server_topic_name(name, "route"), 10);
		m_task_pub = create_publisher<fltmsg::Task>(get_server_topic_name(name, "task"), 10);

		m_status = status::idle;
		m_error = {};
		m_location = { };

		m_state = state::idle;
	}

	robot::~robot() { }

	void robot::set_destination(const location &location) {
		fltmsg::Route message;
		message.location.x = location.x;
		message.location.y = location.y;
		message.location.level = location.level;

		m_route_pub->publish(message);
	}

	void robot::set_task(const std::string &description) {
		if (m_state != state::idle) return;

		fltmsg::Task message;
		message.description = description;

		m_task_pub->publish(message);

		m_state = state::awaiting_confirmation;
	}

}
