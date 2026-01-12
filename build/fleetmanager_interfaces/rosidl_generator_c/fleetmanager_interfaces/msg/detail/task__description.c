// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/Task.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/task__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__Task__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0xd4, 0xba, 0xb5, 0xf2, 0x6e, 0xc1, 0xeb,
      0x74, 0x23, 0x2e, 0x54, 0xfd, 0xfe, 0x89, 0x4b,
      0xe0, 0xe7, 0x3b, 0x04, 0xd3, 0xb6, 0x9b, 0xf2,
      0x83, 0xf7, 0xcc, 0xb8, 0xe8, 0x72, 0xfa, 0x57,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fleetmanager_interfaces__msg__Task__TYPE_NAME[] = "fleetmanager_interfaces/msg/Task";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__Task__FIELD_NAME__description[] = "description";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__Task__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__Task__FIELD_NAME__description, 11, 11},
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
fleetmanager_interfaces__msg__Task__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__Task__TYPE_NAME, 32, 32},
      {fleetmanager_interfaces__msg__Task__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string description";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__Task__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__Task__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 19, 19},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__Task__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__Task__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
