// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/location.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_Location_level
{
public:
  explicit Init_Location_level(::fleetmanager_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  ::fleetmanager_interfaces::msg::Location level(::fleetmanager_interfaces::msg::Location::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Location msg_;
};

class Init_Location_y
{
public:
  explicit Init_Location_y(::fleetmanager_interfaces::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_level y(::fleetmanager_interfaces::msg::Location::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Location_level(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Location msg_;
};

class Init_Location_x
{
public:
  Init_Location_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_y x(::fleetmanager_interfaces::msg::Location::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Location_y(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::Location>()
{
  return fleetmanager_interfaces::msg::builder::Init_Location_x();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__BUILDER_HPP_
