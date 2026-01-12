// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice
#include "fleetmanager_interfaces/msg/detail/error__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "fleetmanager_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "fleetmanager_interfaces/msg/detail/error__struct.h"
#include "fleetmanager_interfaces/msg/detail/error__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // description
#include "rosidl_runtime_c/string_functions.h"  // description

// forward declare type support functions


using _Error__ros_msg_type = fleetmanager_interfaces__msg__Error;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
bool cdr_serialize_fleetmanager_interfaces__msg__Error(
  const fleetmanager_interfaces__msg__Error * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: severity
  {
    cdr << ros_message->severity;
  }

  // Field name: timepoint
  {
    cdr << ros_message->timepoint;
  }

  // Field name: description
  {
    const rosidl_runtime_c__String * str = &ros_message->description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
bool cdr_deserialize_fleetmanager_interfaces__msg__Error(
  eprosima::fastcdr::Cdr & cdr,
  fleetmanager_interfaces__msg__Error * ros_message)
{
  // Field name: severity
  {
    cdr >> ros_message->severity;
  }

  // Field name: timepoint
  {
    cdr >> ros_message->timepoint;
  }

  // Field name: description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->description.data) {
      rosidl_runtime_c__String__init(&ros_message->description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'description'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t get_serialized_size_fleetmanager_interfaces__msg__Error(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Error__ros_msg_type * ros_message = static_cast<const _Error__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: severity
  {
    size_t item_size = sizeof(ros_message->severity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timepoint
  {
    size_t item_size = sizeof(ros_message->timepoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->description.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t max_serialized_size_fleetmanager_interfaces__msg__Error(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: severity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: timepoint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: description
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fleetmanager_interfaces__msg__Error;
    is_plain =
      (
      offsetof(DataType, description) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
bool cdr_serialize_key_fleetmanager_interfaces__msg__Error(
  const fleetmanager_interfaces__msg__Error * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: severity
  {
    cdr << ros_message->severity;
  }

  // Field name: timepoint
  {
    cdr << ros_message->timepoint;
  }

  // Field name: description
  {
    const rosidl_runtime_c__String * str = &ros_message->description;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t get_serialized_size_key_fleetmanager_interfaces__msg__Error(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Error__ros_msg_type * ros_message = static_cast<const _Error__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: severity
  {
    size_t item_size = sizeof(ros_message->severity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: timepoint
  {
    size_t item_size = sizeof(ros_message->timepoint);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->description.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_fleetmanager_interfaces
size_t max_serialized_size_key_fleetmanager_interfaces__msg__Error(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: severity
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: timepoint
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: description
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = fleetmanager_interfaces__msg__Error;
    is_plain =
      (
      offsetof(DataType, description) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Error__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const fleetmanager_interfaces__msg__Error * ros_message = static_cast<const fleetmanager_interfaces__msg__Error *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_fleetmanager_interfaces__msg__Error(ros_message, cdr);
}

static bool _Error__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  fleetmanager_interfaces__msg__Error * ros_message = static_cast<fleetmanager_interfaces__msg__Error *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_fleetmanager_interfaces__msg__Error(cdr, ros_message);
}

static uint32_t _Error__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_fleetmanager_interfaces__msg__Error(
      untyped_ros_message, 0));
}

static size_t _Error__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_fleetmanager_interfaces__msg__Error(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Error = {
  "fleetmanager_interfaces::msg",
  "Error",
  _Error__cdr_serialize,
  _Error__cdr_deserialize,
  _Error__get_serialized_size,
  _Error__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Error__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Error,
  get_message_typesupport_handle_function,
  &fleetmanager_interfaces__msg__Error__get_type_hash,
  &fleetmanager_interfaces__msg__Error__get_type_description,
  &fleetmanager_interfaces__msg__Error__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, fleetmanager_interfaces, msg, Error)() {
  return &_Error__type_support;
}

#if defined(__cplusplus)
}
#endif
