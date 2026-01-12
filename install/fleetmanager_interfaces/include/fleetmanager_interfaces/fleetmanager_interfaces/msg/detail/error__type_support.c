// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "fleetmanager_interfaces/msg/detail/error__rosidl_typesupport_introspection_c.h"
#include "fleetmanager_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "fleetmanager_interfaces/msg/detail/error__functions.h"
#include "fleetmanager_interfaces/msg/detail/error__struct.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  fleetmanager_interfaces__msg__Error__init(message_memory);
}

void fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_fini_function(void * message_memory)
{
  fleetmanager_interfaces__msg__Error__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_member_array[3] = {
  {
    "severity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces__msg__Error, severity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timepoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces__msg__Error, timepoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces__msg__Error, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_members = {
  "fleetmanager_interfaces__msg",  // message namespace
  "Error",  // message name
  3,  // number of fields
  sizeof(fleetmanager_interfaces__msg__Error),
  false,  // has_any_key_member_
  fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_member_array,  // message members
  fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_init_function,  // function to initialize message memory (memory has to be allocated)
  fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle = {
  0,
  &fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_members,
  get_message_typesupport_handle_function,
  &fleetmanager_interfaces__msg__Error__get_type_hash,
  &fleetmanager_interfaces__msg__Error__get_type_description,
  &fleetmanager_interfaces__msg__Error__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_fleetmanager_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, fleetmanager_interfaces, msg, Error)() {
  if (!fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle.typesupport_identifier) {
    fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &fleetmanager_interfaces__msg__Error__rosidl_typesupport_introspection_c__Error_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
