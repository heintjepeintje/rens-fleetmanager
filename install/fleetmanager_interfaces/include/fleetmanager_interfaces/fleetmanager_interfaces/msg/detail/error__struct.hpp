// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/error.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__STRUCT_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fleetmanager_interfaces__msg__Error __attribute__((deprecated))
#else
# define DEPRECATED__fleetmanager_interfaces__msg__Error __declspec(deprecated)
#endif

namespace fleetmanager_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Error_
{
  using Type = Error_<ContainerAllocator>;

  explicit Error_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->severity = 0ul;
      this->timepoint = 0ull;
      this->description = "";
    }
  }

  explicit Error_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->severity = 0ul;
      this->timepoint = 0ull;
      this->description = "";
    }
  }

  // field types and members
  using _severity_type =
    uint32_t;
  _severity_type severity;
  using _timepoint_type =
    uint64_t;
  _timepoint_type timepoint;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;

  // setters for named parameter idiom
  Type & set__severity(
    const uint32_t & _arg)
  {
    this->severity = _arg;
    return *this;
  }
  Type & set__timepoint(
    const uint64_t & _arg)
  {
    this->timepoint = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint32_t SEVERITY_INFO =
    1u;
  static constexpr uint32_t SEVERITY_WARNING =
    2u;
  static constexpr uint32_t SEVERITY_ERROR =
    3u;
  static constexpr uint32_t SEVERITY_FATAL =
    4u;

  // pointer types
  using RawPtr =
    fleetmanager_interfaces::msg::Error_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleetmanager_interfaces::msg::Error_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleetmanager_interfaces::msg::Error_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleetmanager_interfaces::msg::Error_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleetmanager_interfaces__msg__Error
    std::shared_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleetmanager_interfaces__msg__Error
    std::shared_ptr<fleetmanager_interfaces::msg::Error_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Error_ & other) const
  {
    if (this->severity != other.severity) {
      return false;
    }
    if (this->timepoint != other.timepoint) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    return true;
  }
  bool operator!=(const Error_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Error_

// alias to use template instance with default allocator
using Error =
  fleetmanager_interfaces::msg::Error_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Error_<ContainerAllocator>::SEVERITY_INFO;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Error_<ContainerAllocator>::SEVERITY_WARNING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Error_<ContainerAllocator>::SEVERITY_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint32_t Error_<ContainerAllocator>::SEVERITY_FATAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__STRUCT_HPP_
