#pragma once

#include <string>
#include <rclcpp/rclcpp.hpp>
#include "fleetmanager_interfaces/msg/Error.hpp"

namespace fleetmanager {

	using fltmsg = fleetmanager_interfaces::msg;
	using status = uint32_t;

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

	struct error {
		uint32_t severity;
		uint64_t timepoint;
		std::string description;
	};

	class robot : rclcpp::Node {
	public:
		explicit robot(const std::string &name);
		~robot();

		void route_to(const location &location);	
		void set_task(const std::string &description);

		inline std::string name() const { return m_name; }
		inline status status() const { return m_status; }
		inline location location() const { return m_location; }
		inline error error() const { return m_error; }

	private:
		std::string m_name;

		status m_status;
		error m_error;
		location m_location;

		rclcpp::Subscription<fltmsg::Location>::SharedPtr m_location_sub;
		rclcpp::Subscription<fltmsg::Error>::SharedPtr m_error_sub;
		rclcpp::Publisher<fltmsg::Route>::SharedPtr m_route_pub;
		rclcpp::Publisher<fltmsg::Task>::SharedPtr m_task_pub;
		rclcpp::Subscription<fltmsg::Status>::SharedPtr m_status_sub;
	};

}
