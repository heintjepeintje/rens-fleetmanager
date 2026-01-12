// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/error__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__Error__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x20, 0xf5, 0x5e, 0xbe, 0xd6, 0x90, 0xb4, 0x76,
      0xa9, 0x41, 0x8e, 0x98, 0x94, 0x30, 0x6d, 0xa3,
      0xcf, 0x21, 0x4b, 0x2f, 0x62, 0x4b, 0xbb, 0xd4,
      0xde, 0x8c, 0x4e, 0x9f, 0xa4, 0x25, 0xdb, 0x1b,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fleetmanager_interfaces__msg__Error__TYPE_NAME[] = "fleetmanager_interfaces/msg/Error";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__Error__FIELD_NAME__severity[] = "severity";
static char fleetmanager_interfaces__msg__Error__FIELD_NAME__timepoint[] = "timepoint";
static char fleetmanager_interfaces__msg__Error__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__Error__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__Error__FIELD_NAME__severity, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__Error__FIELD_NAME__timepoint, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__Error__FIELD_NAME__description, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fleetmanager_interfaces__msg__Error__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__Error__TYPE_NAME, 33, 33},
      {fleetmanager_interfaces__msg__Error__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 SEVERITY_INFO=1\n"
  "uint32 SEVERITY_WARNING=2\n"
  "uint32 SEVERITY_ERROR=3\n"
  "uint32 SEVERITY_FATAL=4\n"
  "\n"
  "uint32 severity\n"
  "uint64 timepoint\n"
  "string description";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__Error__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__Error__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 150, 150},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__Error__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__Error__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
