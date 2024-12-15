// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

#include "battery_state/msg/detail/battery_msg__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__msg__BatteryMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0xfa, 0x7f, 0x68, 0xab, 0x5e, 0x33, 0x59,
      0x84, 0xc8, 0x17, 0x57, 0x8a, 0xd4, 0xa5, 0x6f,
      0xf3, 0x28, 0xb6, 0xd2, 0xf0, 0xda, 0x7f, 0xce,
      0x58, 0x48, 0xbe, 0x2a, 0xdf, 0xe5, 0x37, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char battery_state__msg__BatteryMsg__TYPE_NAME[] = "battery_state/msg/BatteryMsg";

// Define type names, field names, and default values
static char battery_state__msg__BatteryMsg__FIELD_NAME__leds_on[] = "leds_on";

static rosidl_runtime_c__type_description__Field battery_state__msg__BatteryMsg__FIELDS[] = {
  {
    {battery_state__msg__BatteryMsg__FIELD_NAME__leds_on, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
battery_state__msg__BatteryMsg__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {battery_state__msg__BatteryMsg__TYPE_NAME, 28, 28},
      {battery_state__msg__BatteryMsg__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 leds_on";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
battery_state__msg__BatteryMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {battery_state__msg__BatteryMsg__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 13, 13},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__msg__BatteryMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *battery_state__msg__BatteryMsg__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
