// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleetmanager_interfaces:msg/MapRequest.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/map_request.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__STRUCT_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MapRequest in the package fleetmanager_interfaces.
typedef struct fleetmanager_interfaces__msg__MapRequest
{
  uint32_t loc_x;
  uint32_t loc_y;
  uint32_t level;
  uint32_t radius;
} fleetmanager_interfaces__msg__MapRequest;

// Struct for a sequence of fleetmanager_interfaces__msg__MapRequest.
typedef struct fleetmanager_interfaces__msg__MapRequest__Sequence
{
  fleetmanager_interfaces__msg__MapRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleetmanager_interfaces__msg__MapRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__MAP_REQUEST__STRUCT_H_
