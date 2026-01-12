// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fleetmanager_interfaces:msg/TaskMoveTo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fleetmanager_interfaces/msg/detail/task_move_to__functions.h"
#include "fleetmanager_interfaces/msg/detail/task_move_to__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace fleetmanager_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void TaskMoveTo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fleetmanager_interfaces::msg::TaskMoveTo(_init);
}

void TaskMoveTo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fleetmanager_interfaces::msg::TaskMoveTo *>(message_memory);
  typed_message->~TaskMoveTo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember TaskMoveTo_message_member_array[2] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces::msg::TaskMoveTo, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces::msg::TaskMoveTo, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers TaskMoveTo_message_members = {
  "fleetmanager_interfaces::msg",  // message namespace
  "TaskMoveTo",  // message name
  2,  // number of fields
  sizeof(fleetmanager_interfaces::msg::TaskMoveTo),
  false,  // has_any_key_member_
  TaskMoveTo_message_member_array,  // message members
  TaskMoveTo_init_function,  // function to initialize message memory (memory has to be allocated)
  TaskMoveTo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t TaskMoveTo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &TaskMoveTo_message_members,
  get_message_typesupport_handle_function,
  &fleetmanager_interfaces__msg__TaskMoveTo__get_type_hash,
  &fleetmanager_interfaces__msg__TaskMoveTo__get_type_description,
  &fleetmanager_interfaces__msg__TaskMoveTo__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fleetmanager_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fleetmanager_interfaces::msg::TaskMoveTo>()
{
  return &::fleetmanager_interfaces::msg::rosidl_typesupport_introspection_cpp::TaskMoveTo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fleetmanager_interfaces, msg, TaskMoveTo)() {
  return &::fleetmanager_interfaces::msg::rosidl_typesupport_introspection_cpp::TaskMoveTo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
