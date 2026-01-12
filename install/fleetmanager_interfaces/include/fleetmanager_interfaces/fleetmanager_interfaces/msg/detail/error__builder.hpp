// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/error.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_Error_description
{
public:
  explicit Init_Error_description(::fleetmanager_interfaces::msg::Error & msg)
  : msg_(msg)
  {}
  ::fleetmanager_interfaces::msg::Error description(::fleetmanager_interfaces::msg::Error::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Error msg_;
};

class Init_Error_timepoint
{
public:
  explicit Init_Error_timepoint(::fleetmanager_interfaces::msg::Error & msg)
  : msg_(msg)
  {}
  Init_Error_description timepoint(::fleetmanager_interfaces::msg::Error::_timepoint_type arg)
  {
    msg_.timepoint = std::move(arg);
    return Init_Error_description(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Error msg_;
};

class Init_Error_severity
{
public:
  Init_Error_severity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Error_timepoint severity(::fleetmanager_interfaces::msg::Error::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_Error_timepoint(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Error msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::Error>()
{
  return fleetmanager_interfaces::msg::builder::Init_Error_severity();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__BUILDER_HPP_
