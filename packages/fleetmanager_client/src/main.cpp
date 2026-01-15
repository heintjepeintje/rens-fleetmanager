#include "./fleetmanager_client.hpp"

#include <unistd.h>

std::shared_ptr<fleetmanager::fleetmanager_client> g_client;

uint32_t random_u32(uint32_t min, uint32_t max) {
	return static_cast<uint32_t>(min + (rand() % (max - min + 1)));
}

int32_t handle_task(fleetmanager::fleetmanager_client &client, const std::string &task) {
	RCLCPP_INFO(g_client->get_logger(), "Handling task: %s", task.c_str());
	sleep(random_u32(2, 5));
	
	uint32_t random = random_u32(0, 10);
	if (random == 0) {
		client.set_error(fleetmanager::error_severity::error, "This is a random error.");
	} else {
		client.set_location(client.get_destination());
	}
	return 1;
}

int main(int argc, char **argv) {
	rclcpp::init(argc, argv);

	g_client = std::make_shared<fleetmanager::fleetmanager_client>("robot28");

	g_client->on_task(handle_task);

	rclcpp::spin(std::dynamic_pointer_cast<rclcpp::Node>(g_client));

	rclcpp::shutdown();
}
