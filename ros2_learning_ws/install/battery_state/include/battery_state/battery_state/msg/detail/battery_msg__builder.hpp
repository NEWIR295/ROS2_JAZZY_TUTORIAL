// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/msg/battery_msg.hpp"


#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__BUILDER_HPP_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_state/msg/detail/battery_msg__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_state
{

namespace msg
{

namespace builder
{

class Init_BatteryMsg_led_states
{
public:
  Init_BatteryMsg_led_states()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_state::msg::BatteryMsg led_states(::battery_state::msg::BatteryMsg::_led_states_type arg)
  {
    msg_.led_states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_state::msg::BatteryMsg msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_state::msg::BatteryMsg>()
{
  return battery_state::msg::builder::Init_BatteryMsg_led_states();
}

}  // namespace battery_state

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__BUILDER_HPP_
