// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice
#include "battery_state/msg/detail/battery_msg__rosidl_typesupport_fastrtps_cpp.hpp"
#include "battery_state/msg/detail/battery_msg__functions.h"
#include "battery_state/msg/detail/battery_msg__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leds_on
  cdr << ros_message.leds_on;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  battery_state::msg::BatteryMsg & ros_message)
{
  // Member: leds_on
  cdr >> ros_message.leds_on;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
get_serialized_size(
  const battery_state::msg::BatteryMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leds_on
  {
    size_t item_size = sizeof(ros_message.leds_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
max_serialized_size_BatteryMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: leds_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = battery_state::msg::BatteryMsg;
    is_plain =
      (
      offsetof(DataType, leds_on) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
cdr_serialize_key(
  const battery_state::msg::BatteryMsg & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: leds_on
  cdr << ros_message.leds_on;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
get_serialized_size_key(
  const battery_state::msg::BatteryMsg & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: leds_on
  {
    size_t item_size = sizeof(ros_message.leds_on);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_battery_state
max_serialized_size_key_BatteryMsg(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Member: leds_on
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = battery_state::msg::BatteryMsg;
    is_plain =
      (
      offsetof(DataType, leds_on) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}


static bool _BatteryMsg__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const battery_state::msg::BatteryMsg *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _BatteryMsg__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<battery_state::msg::BatteryMsg *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _BatteryMsg__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const battery_state::msg::BatteryMsg *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _BatteryMsg__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_BatteryMsg(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _BatteryMsg__callbacks = {
  "battery_state::msg",
  "BatteryMsg",
  _BatteryMsg__cdr_serialize,
  _BatteryMsg__cdr_deserialize,
  _BatteryMsg__get_serialized_size,
  _BatteryMsg__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BatteryMsg__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_BatteryMsg__callbacks,
  get_message_typesupport_handle_function,
  &battery_state__msg__BatteryMsg__get_type_hash,
  &battery_state__msg__BatteryMsg__get_type_description,
  &battery_state__msg__BatteryMsg__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace battery_state

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_battery_state
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_state::msg::BatteryMsg>()
{
  return &battery_state::msg::typesupport_fastrtps_cpp::_BatteryMsg__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, battery_state, msg, BatteryMsg)() {
  return &battery_state::msg::typesupport_fastrtps_cpp::_BatteryMsg__handle;
}

#ifdef __cplusplus
}
#endif
