// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from fleetmanager_interfaces:msg/TaskMoveTo.idl
// generated code does not contain a copyright notice
#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "fleetmanager_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fleetmanager_interfaces/msg/detail/task_move_to__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
bool cdr_serialize_fleetmanager_interfaces__msg__TaskMoveTo(
  const fleetmanager_interfaces__msg__TaskMoveTo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
bool cdr_deserialize_fleetmanager_interfaces__msg__TaskMoveTo(
  eprosima::fastcdr::Cdr &,
  fleetmanager_interfaces__msg__TaskMoveTo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t get_serialized_size_fleetmanager_interfaces__msg__TaskMoveTo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t max_serialized_size_fleetmanager_interfaces__msg__TaskMoveTo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
bool cdr_serialize_key_fleetmanager_interfaces__msg__TaskMoveTo(
  const fleetmanager_interfaces__msg__TaskMoveTo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t get_serialized_size_key_fleetmanager_interfaces__msg__TaskMoveTo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t max_serialized_size_key_fleetmanager_interfaces__msg__TaskMoveTo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleetmanager_interfaces, msg, TaskMoveTo)();

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
