// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/srv/battery_srv.hpp"


#ifndef BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__TRAITS_HPP_
#define BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "battery_state/srv/detail/battery_srv__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace battery_state
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatterySrv_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: led_state
  {
    out << "led_state: ";
    rosidl_generator_traits::value_to_yaml(msg.led_state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatterySrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: led_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_state: ";
    rosidl_generator_traits::value_to_yaml(msg.led_state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatterySrv_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_state

namespace rosidl_generator_traits
{

[[deprecated("use battery_state::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_state::srv::BatterySrv_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_state::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_state::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_state::srv::BatterySrv_Request & msg)
{
  return battery_state::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_state::srv::BatterySrv_Request>()
{
  return "battery_state::srv::BatterySrv_Request";
}

template<>
inline const char * name<battery_state::srv::BatterySrv_Request>()
{
  return "battery_state/srv/BatterySrv_Request";
}

template<>
struct has_fixed_size<battery_state::srv::BatterySrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<battery_state::srv::BatterySrv_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<battery_state::srv::BatterySrv_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace battery_state
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatterySrv_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BatterySrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatterySrv_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_state

namespace rosidl_generator_traits
{

[[deprecated("use battery_state::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_state::srv::BatterySrv_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_state::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_state::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_state::srv::BatterySrv_Response & msg)
{
  return battery_state::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_state::srv::BatterySrv_Response>()
{
  return "battery_state::srv::BatterySrv_Response";
}

template<>
inline const char * name<battery_state::srv::BatterySrv_Response>()
{
  return "battery_state/srv/BatterySrv_Response";
}

template<>
struct has_fixed_size<battery_state::srv::BatterySrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_state::srv::BatterySrv_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<battery_state::srv::BatterySrv_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace battery_state
{

namespace srv
{

inline void to_flow_style_yaml(
  const BatterySrv_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
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
  const BatterySrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BatterySrv_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace battery_state

namespace rosidl_generator_traits
{

[[deprecated("use battery_state::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const battery_state::srv::BatterySrv_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  battery_state::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use battery_state::srv::to_yaml() instead")]]
inline std::string to_yaml(const battery_state::srv::BatterySrv_Event & msg)
{
  return battery_state::srv::to_yaml(msg);
}

template<>
inline const char * data_type<battery_state::srv::BatterySrv_Event>()
{
  return "battery_state::srv::BatterySrv_Event";
}

template<>
inline const char * name<battery_state::srv::BatterySrv_Event>()
{
  return "battery_state/srv/BatterySrv_Event";
}

template<>
struct has_fixed_size<battery_state::srv::BatterySrv_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<battery_state::srv::BatterySrv_Event>
  : std::integral_constant<bool, has_bounded_size<battery_state::srv::BatterySrv_Request>::value && has_bounded_size<battery_state::srv::BatterySrv_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<battery_state::srv::BatterySrv_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<battery_state::srv::BatterySrv>()
{
  return "battery_state::srv::BatterySrv";
}

template<>
inline const char * name<battery_state::srv::BatterySrv>()
{
  return "battery_state/srv/BatterySrv";
}

template<>
struct has_fixed_size<battery_state::srv::BatterySrv>
  : std::integral_constant<
    bool,
    has_fixed_size<battery_state::srv::BatterySrv_Request>::value &&
    has_fixed_size<battery_state::srv::BatterySrv_Response>::value
  >
{
};

template<>
struct has_bounded_size<battery_state::srv::BatterySrv>
  : std::integral_constant<
    bool,
    has_bounded_size<battery_state::srv::BatterySrv_Request>::value &&
    has_bounded_size<battery_state::srv::BatterySrv_Response>::value
  >
{
};

template<>
struct is_service<battery_state::srv::BatterySrv>
  : std::true_type
{
};

template<>
struct is_service_request<battery_state::srv::BatterySrv_Request>
  : std::true_type
{
};

template<>
struct is_service_response<battery_state::srv::BatterySrv_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__TRAITS_HPP_
