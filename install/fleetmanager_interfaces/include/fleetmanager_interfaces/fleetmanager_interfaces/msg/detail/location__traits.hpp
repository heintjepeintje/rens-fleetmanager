// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleetmanager_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/location.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleetmanager_interfaces/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fleetmanager_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Location & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Location & msg, bool use_flow_style = false)
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
  const fleetmanager_interfaces::msg::Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleetmanager_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleetmanager_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const fleetmanager_interfaces::msg::Location & msg)
{
  return fleetmanager_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fleetmanager_interfaces::msg::Location>()
{
  return "fleetmanager_interfaces::msg::Location";
}

template<>
inline const char * name<fleetmanager_interfaces::msg::Location>()
{
  return "fleetmanager_interfaces/msg/Location";
}

template<>
struct has_fixed_size<fleetmanager_interfaces::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<fleetmanager_interfaces::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<fleetmanager_interfaces::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__TRAITS_HPP_
