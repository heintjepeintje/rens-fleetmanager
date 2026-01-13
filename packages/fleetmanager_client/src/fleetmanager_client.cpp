#include "./fleetmanager_client.hpp"

namespace fleetmanager {

	fleetmanager_client::fleetmanager_client(const std::string &name) : Node(name), m_name(name) {
		m_location_pub = create_publisher<fltmsg::Location>(get_topic_name(name, "location"), MESSAGE_QUEUE_LENGTH);	
		m_error_pub = create_publisher<fltmsg::Error>(get_topic_name(name, "error"), MESSAGE_QUEUE_LENGTH);
		m_status_pub = create_publisher<fltmsg::Status>(get_topic_name(name, "status"), MESSAGE_QUEUE_LENGTH);

		m_route_sub = create_subscription<fltmsg::Route>(get_topic_name(name, "route"), MESSAGE_QUEUE_LENGTH, [this](fltmsg::Route::SharedPtr message) {
			this->m_destination.x = message->location.x;
			this->m_destination.y = message->location.y;
			this->m_destination.level = message->location.level;
		});

		m_task_sub = create_subscription<fltmsg::Task>(get_topic_name(name, "task"), MESSAGE_QUEUE_LENGTH, [this](fltmsg::Task::SharedPtr message) {
			RCLCPP_INFO(this->get_logger(), "Task: %s", message->description.c_str());
			m_task = std::async(std::launch::async, [this](const std::string &task) {
				std::lock_guard<std::mutex> lock(this->m_data_mutex);
				this->set_status(status::busy);
				int32_t result = this->m_task_callback(*this, task);
				this->set_status(status::idle);
				return result;
			}, message->description);
		});

		m_update_timer = create_wall_timer(1000ms, [this]() {
			fltmsg::Status status_message;
			status_message.status = static_cast<uint32_t>(m_status);
			RCLCPP_INFO(this->get_logger(), "Status: %u", static_cast<uint32_t>(m_status));

			m_status_pub->publish(status_message);

			fltmsg::Location location_message;
			location_message.x = m_location.x;
			location_message.y = m_location.y;
			location_message.level = m_location.level;
			RCLCPP_INFO(this->get_logger(), "Location: %u, %u", m_location.x, m_location.y);

			m_location_pub->publish(location_message);
		});

		m_status = status::idle;
	}

	fleetmanager_client::~fleetmanager_client() { }

	void fleetmanager_client::set_status(const status &status) {
		std::lock_guard<std::mutex> lock(m_status_mutex);
		m_status = status;
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
