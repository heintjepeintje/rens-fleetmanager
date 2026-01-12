// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleetmanager_interfaces:msg/Route.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/route.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__STRUCT_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'location'
#include "fleetmanager_interfaces/msg/detail/location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__fleetmanager_interfaces__msg__Route __attribute__((deprecated))
#else
# define DEPRECATED__fleetmanager_interfaces__msg__Route __declspec(deprecated)
#endif

namespace fleetmanager_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Route_
{
  using Type = Route_<ContainerAllocator>;

  explicit Route_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_init)
  {
    (void)_init;
  }

  explicit Route_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : location(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _location_type =
    fleetmanager_interfaces::msg::Location_<ContainerAllocator>;
  _location_type location;

  // setters for named parameter idiom
  Type & set__location(
    const fleetmanager_interfaces::msg::Location_<ContainerAllocator> & _arg)
  {
    this->location = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleetmanager_interfaces::msg::Route_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleetmanager_interfaces::msg::Route_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleetmanager_interfaces::msg::Route_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleetmanager_interfaces::msg::Route_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleetmanager_interfaces__msg__Route
    std::shared_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleetmanager_interfaces__msg__Route
    std::shared_ptr<fleetmanager_interfaces::msg::Route_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Route_ & other) const
  {
    if (this->location != other.location) {
      return false;
    }
    return true;
  }
  bool operator!=(const Route_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Route_

// alias to use template instance with default allocator
using Route =
  fleetmanager_interfaces::msg::Route_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__STRUCT_HPP_
