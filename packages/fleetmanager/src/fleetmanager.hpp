#pragma once

#include <rclcpp/rclcpp.hpp>
#include "fleetmanager_interfaces/msg/error.hpp"

namespace fleetmanager {

	enum class error_severity {
		none = 0,
		info, warning, error, fatal
	};

	class fleetmanager : rclcpp::Node {
	public:
		fleetmanager();
		~fleetmanager();

		void start();
		void update();
		void stop();
		bool should_exit() const;

	private:
		rclcpp::Publisher<fleetmanager_interfaces::msg::Error>::SharedPtr m_publisher;
	};
	
}
