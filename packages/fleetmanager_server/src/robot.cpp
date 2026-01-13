#include "./robot.hpp"

namespace fleetmanager {

	robot::robot(const std::string &name) : Node("fleetmanager_" + name), m_name(name) {
		m_location_sub = create_subscription<fltmsg::Location>(get_topic_name(name, "location"), 10, [this](fltmsg::Location::SharedPtr message) {
			this->m_location.x = message->x;
			this->m_location.y = message->y;
			this->m_location.level = message->level;
		});

		m_error_sub = create_subscription<fltmsg::Error>(get_topic_name(name, "error"), 100, [this](fltmsg::Error::SharedPtr message) {
			this->m_error.severity = static_cast<error_severity>(message->severity);
			this->m_error.timepoint = message->timepoint;
			this->m_error.description = message->description;
		});

		m_status_sub = create_subscription<fltmsg::Status>(get_topic_name(name, "status"), 10, [this](fltmsg::Status::SharedPtr message) {
			this->m_status = static_cast<status>(message->status);
		});

		m_route_pub = create_publisher<fltmsg::Route>(get_topic_name(name, "route"), 10);
		m_task_pub = create_publisher<fltmsg::Task>(get_topic_name(name, "task"), 10);

		m_status = status::idle;
		m_error = {};
		m_location = { };
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
		fltmsg::Task message;
		message.description = description;

		m_task_pub->publish(message);
	}

}
