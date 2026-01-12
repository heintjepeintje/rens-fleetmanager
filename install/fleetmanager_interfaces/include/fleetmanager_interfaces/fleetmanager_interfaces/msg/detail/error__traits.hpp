// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/error.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__TRAITS_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "fleetmanager_interfaces/msg/detail/error__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace fleetmanager_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Error & msg,
  std::ostream & out)
{
  out << "{";
  // member: severity
  {
    out << "severity: ";
    rosidl_generator_traits::value_to_yaml(msg.severity, out);
    out << ", ";
  }

  // member: timepoint
  {
    out << "timepoint: ";
    rosidl_generator_traits::value_to_yaml(msg.timepoint, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: severity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "severity: ";
    rosidl_generator_traits::value_to_yaml(msg.severity, out);
    out << "\n";
  }

  // member: timepoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timepoint: ";
    rosidl_generator_traits::value_to_yaml(msg.timepoint, out);
    out << "\n";
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Error & msg, bool use_flow_style = false)
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
  const fleetmanager_interfaces::msg::Error & msg,
  std::ostream & out, size_t indentation = 0)
{
  fleetmanager_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use fleetmanager_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const fleetmanager_interfaces::msg::Error & msg)
{
  return fleetmanager_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<fleetmanager_interfaces::msg::Error>()
{
  return "fleetmanager_interfaces::msg::Error";
}

template<>
inline const char * name<fleetmanager_interfaces::msg::Error>()
{
  return "fleetmanager_interfaces/msg/Error";
}

template<>
struct has_fixed_size<fleetmanager_interfaces::msg::Error>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<fleetmanager_interfaces::msg::Error>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<fleetmanager_interfaces::msg::Error>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__TRAITS_HPP_
