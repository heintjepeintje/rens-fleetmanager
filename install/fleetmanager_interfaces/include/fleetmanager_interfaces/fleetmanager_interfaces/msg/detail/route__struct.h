// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleetmanager_interfaces:msg/Route.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/route.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__STRUCT_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'location'
#include "fleetmanager_interfaces/msg/detail/location__struct.h"

/// Struct defined in msg/Route in the package fleetmanager_interfaces.
typedef struct fleetmanager_interfaces__msg__Route
{
  fleetmanager_interfaces__msg__Location location;
} fleetmanager_interfaces__msg__Route;

// Struct for a sequence of fleetmanager_interfaces__msg__Route.
typedef struct fleetmanager_interfaces__msg__Route__Sequence
{
  fleetmanager_interfaces__msg__Route * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleetmanager_interfaces__msg__Route__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ROUTE__STRUCT_H_
