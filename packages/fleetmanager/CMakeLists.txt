cmake_minimum_required(VERSION 3.8)
project(fleetmanager)

add_compile_options(-Wall -Wextra -Wpedantic)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(fleetmanager_interfaces REQUIRED)

file(GLOB SOURCES "src/*.cpp")

add_executable(rens_fleetmanager ${SOURCES})
ament_target_dependencies(rens_fleetmanager rclcpp fleetmanager_interfaces) 

install(TARGETS
	rens_fleetmanager 
  DESTINATION lib/${PROJECT_NAME})

ament_package()
