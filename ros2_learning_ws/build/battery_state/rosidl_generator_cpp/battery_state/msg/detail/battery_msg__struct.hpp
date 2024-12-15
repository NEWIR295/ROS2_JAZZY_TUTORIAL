// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/msg/battery_msg.hpp"


#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__STRUCT_HPP_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_state__msg__BatteryMsg __attribute__((deprecated))
#else
# define DEPRECATED__battery_state__msg__BatteryMsg __declspec(deprecated)
#endif

namespace battery_state
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BatteryMsg_
{
  using Type = BatteryMsg_<ContainerAllocator>;

  explicit BatteryMsg_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leds_on = 0l;
    }
  }

  explicit BatteryMsg_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->leds_on = 0l;
    }
  }

  // field types and members
  using _leds_on_type =
    int32_t;
  _leds_on_type leds_on;

  // setters for named parameter idiom
  Type & set__leds_on(
    const int32_t & _arg)
  {
    this->leds_on = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_state::msg::BatteryMsg_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_state::msg::BatteryMsg_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_state::msg::BatteryMsg_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_state::msg::BatteryMsg_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_state__msg__BatteryMsg
    std::shared_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_state__msg__BatteryMsg
    std::shared_ptr<battery_state::msg::BatteryMsg_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatteryMsg_ & other) const
  {
    if (this->leds_on != other.leds_on) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatteryMsg_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatteryMsg_

// alias to use template instance with default allocator
using BatteryMsg =
  battery_state::msg::BatteryMsg_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace battery_state

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__STRUCT_HPP_
