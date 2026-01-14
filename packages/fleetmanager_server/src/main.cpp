#include <rclcpp/rclcpp.hpp>
#include "./robot.hpp"
#include <unistd.h>

#include <cstdlib>
#include <ctime>
#include <format>

uint32_t random_u32(uint32_t min, uint32_t max) {
	return static_cast<uint32_t>(min + (rand() % (max - min + 1)));
}

int main(int argc, char **argv) {
	std::srand(std::time(0));

	rclcpp::init(argc, argv);

	std::shared_ptr<fleetmanager::robot> robot1 = std::make_shared<fleetmanager::robot>("robot28");

	while (rclcpp::ok()) {
		rclcpp::spin_some(std::dynamic_pointer_cast<rclcpp::Node>(robot1));
		if (robot1->is_available()) {
			fleetmanager::location loc = { random_u32(0, 100), random_u32(0, 100), random_u32(0, 100) };

			robot1->set_task("Move");
			robot1->set_destination(loc);
		} else if (robot1->get_status() == fleetmanager::status::busy) {
			sleep(random_u32(2, 7));
		}
	}
	

	rclcpp::shutdown();
	return 0;
}
