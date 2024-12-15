// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "battery_state/msg/detail/battery_msg__rosidl_typesupport_introspection_c.h"
#include "battery_state/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "battery_state/msg/detail/battery_msg__functions.h"
#include "battery_state/msg/detail/battery_msg__struct.h"


// Include directives for member types
// Member `led_states`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_state__msg__BatteryMsg__init(message_memory);
}

void battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_fini_function(void * message_memory)
{
  battery_state__msg__BatteryMsg__fini(message_memory);
}

size_t battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__size_function__BatteryMsg__led_states(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__get_const_function__BatteryMsg__led_states(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__get_function__BatteryMsg__led_states(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__fetch_function__BatteryMsg__led_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__get_const_function__BatteryMsg__led_states(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__assign_function__BatteryMsg__led_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__get_function__BatteryMsg__led_states(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__resize_function__BatteryMsg__led_states(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_member_array[1] = {
  {
    "led_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_state__msg__BatteryMsg, led_states),  // bytes offset in struct
    NULL,  // default value
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__size_function__BatteryMsg__led_states,  // size() function pointer
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__get_const_function__BatteryMsg__led_states,  // get_const(index) function pointer
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__get_function__BatteryMsg__led_states,  // get(index) function pointer
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__fetch_function__BatteryMsg__led_states,  // fetch(index, &value) function pointer
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__assign_function__BatteryMsg__led_states,  // assign(index, value) function pointer
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__resize_function__BatteryMsg__led_states  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_members = {
  "battery_state__msg",  // message namespace
  "BatteryMsg",  // message name
  1,  // number of fields
  sizeof(battery_state__msg__BatteryMsg),
  false,  // has_any_key_member_
  battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_member_array,  // message members
  battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_type_support_handle = {
  0,
  &battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_members,
  get_message_typesupport_handle_function,
  &battery_state__msg__BatteryMsg__get_type_hash,
  &battery_state__msg__BatteryMsg__get_type_description,
  &battery_state__msg__BatteryMsg__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_state
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, msg, BatteryMsg)() {
  if (!battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_type_support_handle.typesupport_identifier) {
    battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &battery_state__msg__BatteryMsg__rosidl_typesupport_introspection_c__BatteryMsg_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
