// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/MapRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/map_request.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/map_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_MapRequest_radius
{
public:
  explicit Init_MapRequest_radius(::fleetmanager_interfaces::msg::MapRequest & msg)
  : msg_(msg)
  {}
  ::fleetmanager_interfaces::msg::MapRequest radius(::fleetmanager_interfaces::msg::MapRequest::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::MapRequest msg_;
};

class Init_MapRequest_level
{
public:
  explicit Init_MapRequest_level(::fleetmanager_interfaces::msg::MapRequest & msg)
  : msg_(msg)
  {}
  Init_MapRequest_radius level(::fleetmanager_interfaces::msg::MapRequest::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_MapRequest_radius(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::MapRequest msg_;
};

class Init_MapRequest_loc_y
{
public:
  explicit Init_MapRequest_loc_y(::fleetmanager_interfaces::msg::MapRequest & msg)
  : msg_(msg)
  {}
  Init_MapRequest_level loc_y(::fleetmanager_interfaces::msg::MapRequest::_loc_y_type arg)
  {
    msg_.loc_y = std::move(arg);
    return Init_MapRequest_level(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::MapRequest msg_;
};

class Init_MapRequest_loc_x
{
public:
  Init_MapRequest_loc_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MapRequest_loc_y loc_x(::fleetmanager_interfaces::msg::MapRequest::_loc_x_type arg)
  {
    msg_.loc_x = std::move(arg);
    return Init_MapRequest_loc_y(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::MapRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::MapRequest>()
{
  return fleetmanager_interfaces::msg::builder::Init_MapRequest_loc_x();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__BUILDER_HPP_
