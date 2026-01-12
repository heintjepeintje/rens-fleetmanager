// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/TaskMoveTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/task_move_to.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/task_move_to__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_TaskMoveTo_y
{
public:
  explicit Init_TaskMoveTo_y(::fleetmanager_interfaces::msg::TaskMoveTo & msg)
  : msg_(msg)
  {}
  ::fleetmanager_interfaces::msg::TaskMoveTo y(::fleetmanager_interfaces::msg::TaskMoveTo::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::TaskMoveTo msg_;
};

class Init_TaskMoveTo_x
{
public:
  Init_TaskMoveTo_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskMoveTo_y x(::fleetmanager_interfaces::msg::TaskMoveTo::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TaskMoveTo_y(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::TaskMoveTo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::TaskMoveTo>()
{
  return fleetmanager_interfaces::msg::builder::Init_TaskMoveTo_x();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__BUILDER_HPP_
