#pragma once

#include <rclcpp/rclcpp.hpp>

namespace fleetmanager {

	class fleetmanager {
	public:
		fleetmanager();
		~fleetmanager();

		void start();
		void update();

	private:
		rclcpp::Publisher<std_msgs::msg::ByteMutliArray>::SharedPtr m_publisher;
		rclcpp::Subscriber<std_msgs::msg::ByteMutliArray>::SharedPtr m_subscriber;
	};
	
}
