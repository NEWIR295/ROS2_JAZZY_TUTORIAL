// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/msg/battery_msg.h"


#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__STRUCT_H_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'led_states'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/BatteryMsg in the package battery_state.
typedef struct battery_state__msg__BatteryMsg
{
  rosidl_runtime_c__int32__Sequence led_states;
} battery_state__msg__BatteryMsg;

// Struct for a sequence of battery_state__msg__BatteryMsg.
typedef struct battery_state__msg__BatteryMsg__Sequence
{
  battery_state__msg__BatteryMsg * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_state__msg__BatteryMsg__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__STRUCT_H_
