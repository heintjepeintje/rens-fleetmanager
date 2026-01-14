#include "./fleetmanager_client.hpp"

#include <unistd.h>

std::shared_ptr<fleetmanager::fleetmanager_client> g_client;

uint32_t random_u32(uint32_t min, uint32_t max) {
	return static_cast<uint32_t>(min + (rand() % (max - min + 1)));
}

int32_t handle_task(fleetmanager::fleetmanager_client &client, const std::string &task) {
	client.set_location(client.get_destination());
	RCLCPP_INFO(
	return 1;
}

int main(int argc, char **argv) {
	rclcpp::init(argc, argv);

	g_client = std::make_shared<fleetmanager::fleetmanager_client>("test");

	client->on_task(handle_task);
	std::string current_task;

	rclcpp::spin(std::dynamic_pointer_cast<rclcpp::Node>(client));

	rclcpp::shutdown();
}
