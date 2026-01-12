// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/task.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_Task_description
{
public:
  Init_Task_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleetmanager_interfaces::msg::Task description(::fleetmanager_interfaces::msg::Task::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Task msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::Task>()
{
  return fleetmanager_interfaces::msg::builder::Init_Task_description();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK__BUILDER_HPP_
