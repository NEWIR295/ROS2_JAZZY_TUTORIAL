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
      0x09, 0xd2, 0x25, 0xe0, 0x93, 0x61, 0x8b, 0x49,
      0x3a, 0xc7, 0xf6, 0xcf, 0xe2, 0xac, 0x0d, 0xdd,
      0x01, 0xd3, 0x36, 0xb1, 0x69, 0xe7, 0xed, 0x3b,
      0xff, 0xce, 0xfc, 0x4b, 0x2e, 0x9f, 0xbf, 0xca,
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
static char battery_state__msg__BatteryMsg__FIELD_NAME__led_states[] = "led_states";

static rosidl_runtime_c__type_description__Field battery_state__msg__BatteryMsg__FIELDS[] = {
  {
    {battery_state__msg__BatteryMsg__FIELD_NAME__led_states, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32_UNBOUNDED_SEQUENCE,
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
  "int32[] led_states";

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
    {toplevel_type_raw_source, 18, 18},
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
