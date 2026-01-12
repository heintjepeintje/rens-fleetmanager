// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/MapRequest.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/map_request__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__MapRequest__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc2, 0xce, 0xbb, 0xab, 0xc0, 0xd2, 0x94, 0x74,
      0x8d, 0xf8, 0x01, 0x27, 0x64, 0x82, 0xb2, 0xaa,
      0x3c, 0x6b, 0xf9, 0x3b, 0xd0, 0xe1, 0xdd, 0x00,
      0xd0, 0xcb, 0xf4, 0xa2, 0x02, 0x66, 0x2c, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char fleetmanager_interfaces__msg__MapRequest__TYPE_NAME[] = "fleetmanager_interfaces/msg/MapRequest";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__loc_x[] = "loc_x";
static char fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__loc_y[] = "loc_y";
static char fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__level[] = "level";
static char fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__radius[] = "radius";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__MapRequest__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__loc_x, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__loc_y, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__level, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {fleetmanager_interfaces__msg__MapRequest__FIELD_NAME__radius, 6, 6},
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
fleetmanager_interfaces__msg__MapRequest__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__MapRequest__TYPE_NAME, 38, 38},
      {fleetmanager_interfaces__msg__MapRequest__FIELDS, 4, 4},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint32 loc_x\n"
  "uint32 loc_y\n"
  "uint32 level\n"
  "uint32 radius";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__MapRequest__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__MapRequest__TYPE_NAME, 38, 38},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__MapRequest__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__MapRequest__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
