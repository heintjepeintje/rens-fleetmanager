// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from fleetmanager_interfaces:msg/MapRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/map_request.hpp"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__STRUCT_HPP_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__fleetmanager_interfaces__msg__MapRequest __attribute__((deprecated))
#else
# define DEPRECATED__fleetmanager_interfaces__msg__MapRequest __declspec(deprecated)
#endif

namespace fleetmanager_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapRequest_
{
  using Type = MapRequest_<ContainerAllocator>;

  explicit MapRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loc_x = 0ul;
      this->loc_y = 0ul;
      this->level = 0ul;
      this->radius = 0ul;
    }
  }

  explicit MapRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->loc_x = 0ul;
      this->loc_y = 0ul;
      this->level = 0ul;
      this->radius = 0ul;
    }
  }

  // field types and members
  using _loc_x_type =
    uint32_t;
  _loc_x_type loc_x;
  using _loc_y_type =
    uint32_t;
  _loc_y_type loc_y;
  using _level_type =
    uint32_t;
  _level_type level;
  using _radius_type =
    uint32_t;
  _radius_type radius;

  // setters for named parameter idiom
  Type & set__loc_x(
    const uint32_t & _arg)
  {
    this->loc_x = _arg;
    return *this;
  }
  Type & set__loc_y(
    const uint32_t & _arg)
  {
    this->loc_y = _arg;
    return *this;
  }
  Type & set__level(
    const uint32_t & _arg)
  {
    this->level = _arg;
    return *this;
  }
  Type & set__radius(
    const uint32_t & _arg)
  {
    this->radius = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__fleetmanager_interfaces__msg__MapRequest
    std::shared_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__fleetmanager_interfaces__msg__MapRequest
    std::shared_ptr<fleetmanager_interfaces::msg::MapRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapRequest_ & other) const
  {
    if (this->loc_x != other.loc_x) {
      return false;
    }
    if (this->loc_y != other.loc_y) {
      return false;
    }
    if (this->level != other.level) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapRequest_

// alias to use template instance with default allocator
using MapRequest =
  fleetmanager_interfaces::msg::MapRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace fleetmanager_interfaces

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__STRUCT_HPP_
