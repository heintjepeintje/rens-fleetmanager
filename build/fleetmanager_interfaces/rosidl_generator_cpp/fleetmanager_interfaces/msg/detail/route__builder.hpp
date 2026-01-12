// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from fleetmanager_interfaces:msg/Route.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/route.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "fleetmanager_interfaces/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace fleetmanager_interfaces
{

namespace msg
{

namespace builder
{

class Init_Route_location
{
public:
  Init_Route_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::fleetmanager_interfaces::msg::Route location(::fleetmanager_interfaces::msg::Route::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::fleetmanager_interfaces::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::fleetmanager_interfaces::msg::Route>()
{
  return fleetmanager_interfaces::msg::builder::Init_Route_location();
}

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__BUILDER_HPP_
