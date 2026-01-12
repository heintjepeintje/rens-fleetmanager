// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/error.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__STRUCT_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SEVERITY_INFO'.
enum
{
  fleetmanager_interfaces__msg__Error__SEVERITY_INFO = 1ul
};

/// Constant 'SEVERITY_WARNING'.
enum
{
  fleetmanager_interfaces__msg__Error__SEVERITY_WARNING = 2ul
};

/// Constant 'SEVERITY_ERROR'.
enum
{
  fleetmanager_interfaces__msg__Error__SEVERITY_ERROR = 3ul
};

/// Constant 'SEVERITY_FATAL'.
enum
{
  fleetmanager_interfaces__msg__Error__SEVERITY_FATAL = 4ul
};

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Error in the package fleetmanager_interfaces.
typedef struct fleetmanager_interfaces__msg__Error
{
  uint32_t severity;
  uint64_t timepoint;
  rosidl_runtime_c__String description;
} fleetmanager_interfaces__msg__Error;

// Struct for a sequence of fleetmanager_interfaces__msg__Error.
typedef struct fleetmanager_interfaces__msg__Error__Sequence
{
  fleetmanager_interfaces__msg__Error * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleetmanager_interfaces__msg__Error__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__ERROR__STRUCT_H_
