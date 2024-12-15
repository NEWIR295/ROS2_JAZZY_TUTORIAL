// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include <cstddef>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "battery_state/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "battery_state/msg/detail/battery_msg__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace battery_state
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
cdr_serialize(
  const battery_state::msg::BatteryMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_state::msg::BatteryMsg & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
get_serialized_size(
  const battery_state::msg::BatteryMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
max_serialized_size_BatteryMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
cdr_serialize_key(
  const battery_state::msg::BatteryMsg & ros_message,
  eprosima::fastcdr::Cdr &);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
get_serialized_size_key(
  const battery_state::msg::BatteryMsg & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
max_serialized_size_key_BatteryMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace battery_state

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_state, msg, BatteryMsg)();

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
