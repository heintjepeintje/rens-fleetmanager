// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/Location.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__Location__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xac, 0xd2, 0x9f, 0x2c, 0x50, 0xb6, 0xa8, 0x01,
      0x66, 0x23, 0xff, 0x83, 0xa0, 0xf8, 0xd0, 0x0b,
      0x17, 0xb5, 0x28, 0x4c, 0x6f, 0x96, 0x65, 0x37,
      0xdf, 0x36, 0x01, 0x48, 0x63, 0x2f, 0xf3, 0xad,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fleetmanager_interfaces__msg__Location__TYPE_NAME[] = "fleetmanager_interfaces/msg/Location";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__Location__FIELD_NAME__x[] = "x";
static char fleetmanager_interfaces__msg__Location__FIELD_NAME__y[] = "y";
static char fleetmanager_interfaces__msg__Location__FIELD_NAME__level[] = "level";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__Location__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__Location__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__Location__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__Location__FIELD_NAME__level, 5, 5},
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
fleetmanager_interfaces__msg__Location__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__Location__TYPE_NAME, 36, 36},
      {fleetmanager_interfaces__msg__Location__FIELDS, 3, 3},
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
  "uint32 y\n"
  "uint32 level";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__Location__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__Location__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 31, 31},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__Location__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__Location__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
