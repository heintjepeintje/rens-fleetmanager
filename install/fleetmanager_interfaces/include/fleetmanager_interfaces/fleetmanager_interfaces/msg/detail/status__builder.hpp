// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/status.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_Status_status
{
public:
  Init_Status_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleetmanager_interfaces::msg::Status status(::fleetmanager_interfaces::msg::Status::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::Status>()
{
  return fleetmanager_interfaces::msg::builder::Init_Status_status();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__STATUS__BUILDER_HPP_
