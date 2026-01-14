#pragma once

#include <string>
#include <chrono>
#include <fleetmanager_interfaces/msg/error.hpp>
#include <fleetmanager_interfaces/msg/location.hpp>
#include <fleetmanager_interfaces/msg/map_request.hpp>
#include <fleetmanager_interfaces/msg/route.hpp>
#include <fleetmanager_interfaces/msg/status.hpp>
#include <fleetmanager_interfaces/msg/task.hpp>

namespace fleetmanager {

	namespace fltmsg = fleetmanager_interfaces::msg;
	using namespace std::chrono_literals;
	
	constexpr uint32_t MESSAGE_QUEUE_LENGTH = 10;

	enum struct status {
		none = 0,
		error = 1,
		idle = 2,
		busy = 3
	};

	struct location {
		uint32_t x, y;
		uint32_t level;
	};

	enum struct error_severity {
		none = 0,
		info = 1,
		warning = 2,
		error = 3,
		fatal = 4
	};

	struct error {
		error_severity severity;
		uint64_t timepoint;
		std::string description;
	};

	inline std::string get_server_topic_name(const std::string &robot_name, const std::string &topic_name) {
		return robot_name + "/" + topic_name;
	}

	inline std::string get_client_topic_name(const std::string &topic_name) {
		return robot_name + "/" + topic_name;
	}

	inline uint64_t get_current_timepoint() {
		return std::chrono::duration_cast<std::chrono::milliseconds>(
			std::chrono::system_clock::now().time_since_epoch()
		).count();
	}

}
