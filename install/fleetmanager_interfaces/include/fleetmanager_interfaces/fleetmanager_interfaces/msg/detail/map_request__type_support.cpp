// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from fleetmanager_interfaces:msg/MapRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "fleetmanager_interfaces/msg/detail/map_request__functions.h"
#include "fleetmanager_interfaces/msg/detail/map_request__struct.hpp"
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

void MapRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) fleetmanager_interfaces::msg::MapRequest(_init);
}

void MapRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<fleetmanager_interfaces::msg::MapRequest *>(message_memory);
  typed_message->~MapRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MapRequest_message_member_array[4] = {
  {
    "loc_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces::msg::MapRequest, loc_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "loc_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces::msg::MapRequest, loc_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "level",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces::msg::MapRequest, level),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "radius",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(fleetmanager_interfaces::msg::MapRequest, radius),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MapRequest_message_members = {
  "fleetmanager_interfaces::msg",  // message namespace
  "MapRequest",  // message name
  4,  // number of fields
  sizeof(fleetmanager_interfaces::msg::MapRequest),
  false,  // has_any_key_member_
  MapRequest_message_member_array,  // message members
  MapRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  MapRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MapRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MapRequest_message_members,
  get_message_typesupport_handle_function,
  &fleetmanager_interfaces__msg__MapRequest__get_type_hash,
  &fleetmanager_interfaces__msg__MapRequest__get_type_description,
  &fleetmanager_interfaces__msg__MapRequest__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace fleetmanager_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<fleetmanager_interfaces::msg::MapRequest>()
{
  return &::fleetmanager_interfaces::msg::rosidl_typesupport_introspection_cpp::MapRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, fleetmanager_interfaces, msg, MapRequest)() {
  return &::fleetmanager_interfaces::msg::rosidl_typesupport_introspection_cpp::MapRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
