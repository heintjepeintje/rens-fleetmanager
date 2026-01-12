// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/Status.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/status__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__Status__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x81, 0xa3, 0xbf, 0x0b, 0x99, 0x04, 0xb1, 0x20,
      0x50, 0xcf, 0x48, 0xe5, 0xa0, 0xab, 0x61, 0x62,
      0x94, 0x93, 0x16, 0x08, 0xdf, 0xed, 0x94, 0x76,
      0x92, 0x51, 0x1b, 0x48, 0x6d, 0x58, 0x29, 0x4c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fleetmanager_interfaces__msg__Status__TYPE_NAME[] = "fleetmanager_interfaces/msg/Status";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__Status__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__Status__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__Status__FIELD_NAME__status, 6, 6},
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
fleetmanager_interfaces__msg__Status__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__Status__TYPE_NAME, 34, 34},
      {fleetmanager_interfaces__msg__Status__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 STATUS_ERROR = 1\n"
  "uint32 STATUS_IDLE = 2\n"
  "uint32 STATUS_BUSY = 3\n"
  "\n"
  "uint32 status";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__Status__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__Status__TYPE_NAME, 34, 34},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 85, 85},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__Status__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__Status__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
