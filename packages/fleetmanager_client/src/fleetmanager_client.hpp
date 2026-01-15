#pragma once

#include <rclcpp/rclcpp.hpp>
#include <fleetmanager_interfaces/common.hpp>
#include <future>
#include <mutex>
#include <functional>

namespace fleetmanager {

	class fleetmanager_client : public rclcpp::Node {
	public:
		using task_callback = std::function<int32_t(fleetmanager_client &client, const std::string &task)>;

	public:
		fleetmanager_client(const std::string &name);
		~fleetmanager_client();
 
		void set_status(const status &status);
		void set_error(const error_severity &severity, const std::string &description);
		void set_error(const error &error);
		inline void set_location(const location &location) { m_location = location; }
		void on_task(const task_callback &callback);

		inline std::string get_name() const { return m_name; }
		inline location get_destination() const { return m_destination; } 
		inline status get_status() const;

	private:
		std::string m_name;

		mutable std::mutex m_data_mutex;
		location m_destination;
		location m_location;

		mutable std::mutex m_status_mutex;
		status m_status;

		std::mutex m_callback_mutex;
		task_callback m_task_callback;
		std::future<int32_t> m_task;
		
		rclcpp::TimerBase::SharedPtr m_update_timer;

		rclcpp::Publisher<fltmsg::Location>::SharedPtr m_location_pub;
		rclcpp::Publisher<fltmsg::Error>::SharedPtr m_error_pub;
		rclcpp::Subscription<fltmsg::Route>::SharedPtr m_route_sub;
		rclcpp::Subscription<fltmsg::Task>::SharedPtr m_task_sub;
		rclcpp::Publisher<fltmsg::Status>::SharedPtr m_status_pub;
	};

}
