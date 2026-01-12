#include "./fleetmanager.hpp"

#include <chrono>

namespace fleetmanager {

	uint64_t get_current_time() {
		return std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	}

	fleetmanager::fleetmanager() : Node("fleetmanager") { 
		m_publisher = this->create_publisher<fleetmanager_interfaces::msg::Error>("error", 10);
	}

	fleetmanager::~fleetmanager() { 
		
	}

	void fleetmanager::start() { 
		RCLCPP_INFO_STREAM(this->get_logger(), "Starting fleetmanager");
	}

	void fleetmanager::stop() { }

	void fleetmanager::update() { 
		fleetmanager_interfaces::msg::Error message;
		message.severity = ((uint32_t)error_severity::info);
		message.timepoint = get_current_time();
		message.description = "Custom Error Message";
		
		m_publisher->publish(message);
	}

	bool fleetmanager::should_exit() const {
		return false;
	}

}
