// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "battery_state/msg/detail/battery_msg__functions.h"
#include "battery_state/msg/detail/battery_msg__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace battery_state
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void BatteryMsg_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) battery_state::msg::BatteryMsg(_init);
}

void BatteryMsg_fini_function(void * message_memory)
{
  auto typed_message = static_cast<battery_state::msg::BatteryMsg *>(message_memory);
  typed_message->~BatteryMsg();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember BatteryMsg_message_member_array[1] = {
  {
    "leds_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_state::msg::BatteryMsg, leds_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers BatteryMsg_message_members = {
  "battery_state::msg",  // message namespace
  "BatteryMsg",  // message name
  1,  // number of fields
  sizeof(battery_state::msg::BatteryMsg),
  false,  // has_any_key_member_
  BatteryMsg_message_member_array,  // message members
  BatteryMsg_init_function,  // function to initialize message memory (memory has to be allocated)
  BatteryMsg_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t BatteryMsg_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &BatteryMsg_message_members,
  get_message_typesupport_handle_function,
  &battery_state__msg__BatteryMsg__get_type_hash,
  &battery_state__msg__BatteryMsg__get_type_description,
  &battery_state__msg__BatteryMsg__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace battery_state


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<battery_state::msg::BatteryMsg>()
{
  return &::battery_state::msg::rosidl_typesupport_introspection_cpp::BatteryMsg_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, battery_state, msg, BatteryMsg)() {
  return &::battery_state::msg::rosidl_typesupport_introspection_cpp::BatteryMsg_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
