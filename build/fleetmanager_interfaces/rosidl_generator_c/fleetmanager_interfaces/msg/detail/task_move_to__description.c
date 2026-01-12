// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/TaskMoveTo.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/task_move_to__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__TaskMoveTo__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x3b, 0xb1, 0x45, 0x36, 0x1e, 0xbb, 0xd2, 0x7e,
      0x32, 0xb1, 0xb1, 0x20, 0x03, 0x2f, 0x5b, 0xc7,
      0xb7, 0xe9, 0x86, 0x50, 0x57, 0xb6, 0x7f, 0xb9,
      0x90, 0x5a, 0xf2, 0xb6, 0x78, 0x8a, 0x8c, 0x80,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fleetmanager_interfaces__msg__TaskMoveTo__TYPE_NAME[] = "fleetmanager_interfaces/msg/TaskMoveTo";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__TaskMoveTo__FIELD_NAME__x[] = "x";
static char fleetmanager_interfaces__msg__TaskMoveTo__FIELD_NAME__y[] = "y";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__TaskMoveTo__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__TaskMoveTo__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__TaskMoveTo__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fleetmanager_interfaces__msg__TaskMoveTo__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__TaskMoveTo__TYPE_NAME, 38, 38},
      {fleetmanager_interfaces__msg__TaskMoveTo__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 x\n"
  "uint32 y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__TaskMoveTo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__TaskMoveTo__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 18, 18},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__TaskMoveTo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__TaskMoveTo__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
