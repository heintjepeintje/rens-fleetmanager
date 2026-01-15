cmake_minimum_required(VERSION 3.8)
project(fleetmanager_interfaces)

find_package(rosidl_default_generators REQUIRED)
find_package(ament_cmake REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
	"msg/Error.msg"
	"msg/Location.msg"
	"msg/Route.msg"
	"msg/Status.msg"
	"msg/Task.msg"
)

add_library(${PROJECT_NAME}_lib INTERFACE)

target_include_directories(${PROJECT_NAME}_lib
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

ament_export_targets(${PROJECT_NAME}_lib HAS_LIBRARY_TARGET)
ament_export_dependencies(rosidl_default_runtime)

install(
	DIRECTORY include/
	DESTINATION include
)

install(
	TARGETS ${PROJECT_NAME}_lib
	EXPORT ${PROJECT_NAME}_lib
)

ament_package()
