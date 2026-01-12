// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleetmanager_interfaces:msg/Route.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/route.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleetmanager_interfaces/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'location'
#include "fleetmanager_interfaces/msg/detail/location__traits.hpp"

namespace fleetmanager_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Route & msg,
  std::ostream & out)
{
  out << "{";
  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Route & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace fleetmanager_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use fleetmanager_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const fleetmanager_interfaces::msg::Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleetmanager_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleetmanager_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const fleetmanager_interfaces::msg::Route & msg)
{
  return fleetmanager_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fleetmanager_interfaces::msg::Route>()
{
  return "fleetmanager_interfaces::msg::Route";
}

template<>
inline const char * name<fleetmanager_interfaces::msg::Route>()
{
  return "fleetmanager_interfaces/msg/Route";
}

template<>
struct has_fixed_size<fleetmanager_interfaces::msg::Route>
  : std::integral_constant<bool, has_fixed_size<fleetmanager_interfaces::msg::Location>::value> {};

template<>
struct has_bounded_size<fleetmanager_interfaces::msg::Route>
  : std::integral_constant<bool, has_bounded_size<fleetmanager_interfaces::msg::Location>::value> {};

template<>
struct is_message<fleetmanager_interfaces::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__TRAITS_HPP_
