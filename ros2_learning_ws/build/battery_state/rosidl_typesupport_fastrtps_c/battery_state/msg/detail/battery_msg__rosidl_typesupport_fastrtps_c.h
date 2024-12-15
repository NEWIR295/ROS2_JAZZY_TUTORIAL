// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice
#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "battery_state/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "battery_state/msg/detail/battery_msg__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
bool cdr_serialize_battery_state__msg__BatteryMsg(
  const battery_state__msg__BatteryMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
bool cdr_deserialize_battery_state__msg__BatteryMsg(
  eprosima::fastcdr::Cdr &,
  battery_state__msg__BatteryMsg * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
size_t get_serialized_size_battery_state__msg__BatteryMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
size_t max_serialized_size_battery_state__msg__BatteryMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
bool cdr_serialize_key_battery_state__msg__BatteryMsg(
  const battery_state__msg__BatteryMsg * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
size_t get_serialized_size_key_battery_state__msg__BatteryMsg(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
size_t max_serialized_size_key_battery_state__msg__BatteryMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_battery_state
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_state, msg, BatteryMsg)();

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
