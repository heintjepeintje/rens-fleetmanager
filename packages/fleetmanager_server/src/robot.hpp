#pragma once

#include <string>
#include <rclcpp/rclcpp.hpp>
#include <fleetmanager_interfaces/common.hpp>

namespace fleetmanager {

	enum class state {
		none = 0,
		awaiting_confirmation,
		busy,
		idle
	};

	class robot : public rclcpp::Node {
	public:
		explicit robot(const std::string &name);
		~robot();

		void set_destination(const location &location);	
		void set_task(const std::string &description);

		inline std::string get_name() const { return m_name; }
		inline status get_status() const { return m_status; }
		inline location get_location() const { return m_location; }
		inline error get_error() const { return m_error; }

		inline bool is_available() const { return m_state == state::idle; }

	private:
		std::string m_name;

		status m_status;
		error m_error;
		location m_location;

		state m_state;

		rclcpp::Subscription<fltmsg::Location>::SharedPtr m_location_sub;
		rclcpp::Subscription<fltmsg::Error>::SharedPtr m_error_sub;
		rclcpp::Publisher<fltmsg::Route>::SharedPtr m_route_pub;
		rclcpp::Publisher<fltmsg::Task>::SharedPtr m_task_pub;
		rclcpp::Subscription<fltmsg::Status>::SharedPtr m_status_sub;
	};

}
