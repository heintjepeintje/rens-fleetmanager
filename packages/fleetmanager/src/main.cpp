#include "./fleetmanager.hpp"

#include <rclcpp/rclcpp.hpp>
#include "./robot.hpp"
#include <unistd.h>

#include <cstdlib>
#include <ctime>

int main(int argc, char **argv) {
	rclcpp::init(argc, argv);

	robot robot1 = robot("robot1");
	while (!robot1) {
		std::srand(std::time(0));

		robot1.send_task("Hello from: " + robot1.name());
		robot1.route_to({ rand() % 100, rand() % 100, rand() % 100 });

		sleep(1);
	}
	

	rclcpp::shutdown();
	return 0;
}
