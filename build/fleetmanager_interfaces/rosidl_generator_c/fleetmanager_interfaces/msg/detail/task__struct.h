// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fleetmanager_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/task.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK__STRUCT_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Task in the package fleetmanager_interfaces.
typedef struct fleetmanager_interfaces__msg__Task
{
  rosidl_runtime_c__String description;
} fleetmanager_interfaces__msg__Task;

// Struct for a sequence of fleetmanager_interfaces__msg__Task.
typedef struct fleetmanager_interfaces__msg__Task__Sequence
{
  fleetmanager_interfaces__msg__Task * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fleetmanager_interfaces__msg__Task__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK__STRUCT_H_
