cmake_minimum_required(VERSION 3.8)
project(fleetmanager_interfaces)



find_package(rosidl_default_generators REQUIRED)
find_package(ament_cmake REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
	"msg/Error.msg"
	"msg/Location.msg"
	"msg/MapRequest.msg"
	"msg/Route.msg"
	"msg/Status.msg"
	"msg/Task.msg")

ament_export_dependencies(rosidl_default_runtime)

ament_package()
