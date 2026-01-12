// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleetmanager_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/status.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STATUS_ERROR'.
enum
{
  fleetmanager_interfaces__msg__Status__STATUS_ERROR = 1ul
};

/// Constant 'STATUS_IDLE'.
enum
{
  fleetmanager_interfaces__msg__Status__STATUS_IDLE = 2ul
};

/// Constant 'STATUS_BUSY'.
enum
{
  fleetmanager_interfaces__msg__Status__STATUS_BUSY = 3ul
};

/// Struct defined in msg/Status in the package fleetmanager_interfaces.
typedef struct fleetmanager_interfaces__msg__Status
{
  uint32_t status;
} fleetmanager_interfaces__msg__Status;

// Struct for a sequence of fleetmanager_interfaces__msg__Status.
typedef struct fleetmanager_interfaces__msg__Status__Sequence
{
  fleetmanager_interfaces__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleetmanager_interfaces__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__STATUS__STRUCT_H_
