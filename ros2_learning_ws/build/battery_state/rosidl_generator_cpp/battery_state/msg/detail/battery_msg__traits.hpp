// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/msg/battery_msg.hpp"


#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__TRAITS_HPP_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_state/msg/detail/battery_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_state
{

namespace msg
{

inline void to_flow_style_yaml(
  const BatteryMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_states
  {
    if (msg.led_states.size() == 0) {
      out << "led_states: []";
    } else {
      out << "led_states: [";
      size_t pending_items = msg.led_states.size();
      for (auto item : msg.led_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatteryMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.led_states.size() == 0) {
      out << "led_states: []\n";
    } else {
      out << "led_states:\n";
      for (auto item : msg.led_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatteryMsg & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace battery_state

namespace rosidl_generator_traits
{

[[deprecated("use battery_state::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_state::msg::BatteryMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_state::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_state::msg::to_yaml() instead")]]
inline std::string to_yaml(const battery_state::msg::BatteryMsg & msg)
{
  return battery_state::msg::to_yaml(msg);
}

template<>
inline const char * data_type<battery_state::msg::BatteryMsg>()
{
  return "battery_state::msg::BatteryMsg";
}

template<>
inline const char * name<battery_state::msg::BatteryMsg>()
{
  return "battery_state/msg/BatteryMsg";
}

template<>
struct has_fixed_size<battery_state::msg::BatteryMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_state::msg::BatteryMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<battery_state::msg::BatteryMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__TRAITS_HPP_
