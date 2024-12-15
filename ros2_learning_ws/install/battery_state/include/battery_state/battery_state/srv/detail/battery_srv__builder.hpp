// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/srv/battery_srv.hpp"


#ifndef BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__BUILDER_HPP_
#define BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "battery_state/srv/detail/battery_srv__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace battery_state
{

namespace srv
{

namespace builder
{

class Init_BatterySrv_Request_led_state
{
public:
  Init_BatterySrv_Request_led_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_state::srv::BatterySrv_Request led_state(::battery_state::srv::BatterySrv_Request::_led_state_type arg)
  {
    msg_.led_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_state::srv::BatterySrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_state::srv::BatterySrv_Request>()
{
  return battery_state::srv::builder::Init_BatterySrv_Request_led_state();
}

}  // namespace battery_state


namespace battery_state
{

namespace srv
{

namespace builder
{

class Init_BatterySrv_Response_state
{
public:
  Init_BatterySrv_Response_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::battery_state::srv::BatterySrv_Response state(::battery_state::srv::BatterySrv_Response::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_state::srv::BatterySrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_state::srv::BatterySrv_Response>()
{
  return battery_state::srv::builder::Init_BatterySrv_Response_state();
}

}  // namespace battery_state


namespace battery_state
{

namespace srv
{

namespace builder
{

class Init_BatterySrv_Event_response
{
public:
  explicit Init_BatterySrv_Event_response(::battery_state::srv::BatterySrv_Event & msg)
  : msg_(msg)
  {}
  ::battery_state::srv::BatterySrv_Event response(::battery_state::srv::BatterySrv_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::battery_state::srv::BatterySrv_Event msg_;
};

class Init_BatterySrv_Event_request
{
public:
  explicit Init_BatterySrv_Event_request(::battery_state::srv::BatterySrv_Event & msg)
  : msg_(msg)
  {}
  Init_BatterySrv_Event_response request(::battery_state::srv::BatterySrv_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BatterySrv_Event_response(msg_);
  }

private:
  ::battery_state::srv::BatterySrv_Event msg_;
};

class Init_BatterySrv_Event_info
{
public:
  Init_BatterySrv_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BatterySrv_Event_request info(::battery_state::srv::BatterySrv_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_BatterySrv_Event_request(msg_);
  }

private:
  ::battery_state::srv::BatterySrv_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::battery_state::srv::BatterySrv_Event>()
{
  return battery_state::srv::builder::Init_BatterySrv_Event_info();
}

}  // namespace battery_state

#endif  // BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__BUILDER_HPP_
