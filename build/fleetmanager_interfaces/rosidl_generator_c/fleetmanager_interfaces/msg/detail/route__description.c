// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from fleetmanager_interfaces:msg/Route.idl
// generated code does not contain a copyright notice

#include "fleetmanager_interfaces/msg/detail/route__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__Route__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa0, 0x1d, 0xe6, 0xc2, 0x86, 0x3f, 0x52, 0xfa,
      0x2d, 0xa8, 0x71, 0x48, 0x6c, 0x44, 0xb5, 0x19,
      0xdf, 0x36, 0x75, 0xb2, 0x93, 0x9d, 0x7c, 0x71,
      0x73, 0xf9, 0x87, 0xaa, 0xef, 0xe9, 0x45, 0xc7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "fleetmanager_interfaces/msg/detail/location__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t fleetmanager_interfaces__msg__Location__EXPECTED_HASH = {1, {
    0xac, 0xd2, 0x9f, 0x2c, 0x50, 0xb6, 0xa8, 0x01,
    0x66, 0x23, 0xff, 0x83, 0xa0, 0xf8, 0xd0, 0x0b,
    0x17, 0xb5, 0x28, 0x4c, 0x6f, 0x96, 0x65, 0x37,
    0xdf, 0x36, 0x01, 0x48, 0x63, 0x2f, 0xf3, 0xad,
  }};
#endif

static char fleetmanager_interfaces__msg__Route__TYPE_NAME[] = "fleetmanager_interfaces/msg/Route";
static char fleetmanager_interfaces__msg__Location__TYPE_NAME[] = "fleetmanager_interfaces/msg/Location";

// Define type names, field names, and default values
static char fleetmanager_interfaces__msg__Route__FIELD_NAME__location[] = "location";

static rosidl_runtime_c__type_description__Field fleetmanager_interfaces__msg__Route__FIELDS[] = {
  {
    {fleetmanager_interfaces__msg__Route__FIELD_NAME__location, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {fleetmanager_interfaces__msg__Location__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription fleetmanager_interfaces__msg__Route__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {fleetmanager_interfaces__msg__Location__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
fleetmanager_interfaces__msg__Route__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {fleetmanager_interfaces__msg__Route__TYPE_NAME, 33, 33},
      {fleetmanager_interfaces__msg__Route__FIELDS, 1, 1},
    },
    {fleetmanager_interfaces__msg__Route__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&fleetmanager_interfaces__msg__Location__EXPECTED_HASH, fleetmanager_interfaces__msg__Location__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = fleetmanager_interfaces__msg__Location__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "fleetmanager_interfaces/Location location";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__Route__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {fleetmanager_interfaces__msg__Route__TYPE_NAME, 33, 33},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__Route__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *fleetmanager_interfaces__msg__Route__get_individual_type_description_source(NULL),
    sources[1] = *fleetmanager_interfaces__msg__Location__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
