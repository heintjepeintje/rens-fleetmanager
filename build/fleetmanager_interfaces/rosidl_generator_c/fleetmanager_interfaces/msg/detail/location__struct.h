// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleetmanager_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/location.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Location in the package fleetmanager_interfaces.
typedef struct fleetmanager_interfaces__msg__Location
{
  uint32_t x;
  uint32_t y;
  uint32_t level;
} fleetmanager_interfaces__msg__Location;

// Struct for a sequence of fleetmanager_interfaces__msg__Location.
typedef struct fleetmanager_interfaces__msg__Location__Sequence
{
  fleetmanager_interfaces__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleetmanager_interfaces__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__LOCATION__STRUCT_H_
