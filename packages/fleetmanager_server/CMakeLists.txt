cmake_minimum_required(VERSION 3.8)
project(fleetmanager_server)

add_compile_options(-Wall -Wextra -Wpedantic)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(fleetmanager_interfaces REQUIRED)

file(GLOB SOURCES "src/*.cpp")

set(PROJECT_EXEC_NAME ${PROJECT_NAME}_exec)

add_executable(${PROJECT_EXEC_NAME} ${SOURCES})
ament_target_dependencies(${PROJECT_EXEC_NAME} rclcpp fleetmanager_interfaces) 

install(TARGETS
	${PROJECT_EXEC_NAME} 	
  DESTINATION lib/${PROJECT_NAME})

ament_package()
