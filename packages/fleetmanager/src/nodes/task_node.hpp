#pragma once

#include <cstdint>
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/byte_multi_array.hpp>

namespace fleetmanager {
	
	struct move_to_task {
		uint32_t x, y;
	};

	struct press_task {
		uint32_t seconds;
	};

	class task_node : rclcpp::Node {
	public:
		task_node();
		~task_node();

		void send_task(const move_to_task &task);

	private:
		rclcpp::Publisher<std_msgs::msg::ByteMultiArray>::SharedPtr m_publisher;
	};

}
