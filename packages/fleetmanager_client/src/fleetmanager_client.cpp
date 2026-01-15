#include "./fleetmanager_client.hpp"

namespace fleetmanager {

	fleetmanager_client::fleetmanager_client(const std::string &name) : Node(name), m_name(name) {
		m_location_pub = create_publisher<fltmsg::Location>(get_client_topic_name(name, "location"), MESSAGE_QUEUE_LENGTH);	
		m_error_pub = create_publisher<fltmsg::Error>(get_client_topic_name(name, "error"), MESSAGE_QUEUE_LENGTH);
		m_status_pub = create_publisher<fltmsg::Status>(get_client_topic_name(name, "status"), MESSAGE_QUEUE_LENGTH);

		m_route_sub = create_subscription<fltmsg::Route>(get_client_topic_name(name, "route"), MESSAGE_QUEUE_LENGTH, [this](fltmsg::Route::SharedPtr message) {
			this->m_destination.x = message->location.x;
			this->m_destination.y = message->location.y;
			this->m_destination.level = message->location.level;
			RCLCPP_INFO(this->get_logger(), "Received new destination: %u, %u, %u", message->location.x, message->location.y, message->location.level);
		});

		m_task_sub = create_subscription<fltmsg::Task>(get_client_topic_name(name, "task"), MESSAGE_QUEUE_LENGTH, [this](fltmsg::Task::SharedPtr message) {
			RCLCPP_INFO(this->get_logger(), "Received new task: %s", message->description.c_str());
			m_task = std::async(std::launch::async, [this](const std::string &task) {
				std::lock_guard<std::mutex> lock(this->m_data_mutex);

				this->set_status(status::busy);

				int32_t result = this->m_task_callback(*this, task);

				this->set_status(status::idle);

				return result;
			}, message->description);
		});

		m_update_timer = create_wall_timer(1000ms, [this]() {
			status robot_status = this->get_status();

			fltmsg::Status status_message;
			status_message.status = static_cast<uint32_t>(robot_status);

			m_status_pub->publish(status_message);

			fltmsg::Location location_message;
			location_message.x = m_location.x;
			location_message.y = m_location.y;
			location_message.level = m_location.level;

			m_location_pub->publish(location_message);
		});

		m_status = status::idle;
	}

	fleetmanager_client::~fleetmanager_client() { }

	void fleetmanager_client::set_status(const status &status) {
		std::lock_guard<std::mutex> lock(m_status_mutex);
		if (m_status == status) return;

		if (status == status::error) {
			RCLCPP_INFO(this->get_logger(), "New status: \"STATUS_ERROR\"");
		} else if (status == status::idle) {
			RCLCPP_INFO(this->get_logger(), "New status: \"STATUS_IDLE\"");
		} else if (status == status::busy) {
			RCLCPP_INFO(this->get_logger(), "New status: \"STATUS_BUSY\"");	
		}
		m_status = status;

		fltmsg::Status status_message;
		status_message.status = static_cast<uint32_t>(status);

		m_status_pub->publish(status_message);
	}

	void fleetmanager_client::set_error(const error &error) {
		fltmsg::Error message;
		message.severity = static_cast<uint32_t>(error.severity);
		message.timepoint = error.timepoint;
		message.description = error.description;

		m_error_pub->publish(message);
	}

	void fleetmanager_client::set_error(const error_severity &severity, const std::string &description) {
		error error{};
		error.severity = severity;
		error.timepoint = get_current_timepoint();
		error.description = description;

		set_error(error);
	}

	void fleetmanager_client::on_task(const task_callback &callback) {
		std::lock_guard<std::mutex> lock(m_callback_mutex);
		m_task_callback = callback;
	}

	status fleetmanager_client::get_status() const {
		std::lock_guard<std::mutex> lock(m_status_mutex);
		return m_status;
	}

}
