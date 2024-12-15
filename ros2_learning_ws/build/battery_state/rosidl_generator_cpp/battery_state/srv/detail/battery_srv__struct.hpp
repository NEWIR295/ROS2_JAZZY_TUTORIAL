// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/srv/battery_srv.hpp"


#ifndef BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__STRUCT_HPP_
#define BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__battery_state__srv__BatterySrv_Request __attribute__((deprecated))
#else
# define DEPRECATED__battery_state__srv__BatterySrv_Request __declspec(deprecated)
#endif

namespace battery_state
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatterySrv_Request_
{
  using Type = BatterySrv_Request_<ContainerAllocator>;

  explicit BatterySrv_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0l;
      this->state = 0l;
    }
  }

  explicit BatterySrv_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->led_number = 0l;
      this->state = 0l;
    }
  }

  // field types and members
  using _led_number_type =
    int32_t;
  _led_number_type led_number;
  using _state_type =
    int32_t;
  _state_type state;

  // setters for named parameter idiom
  Type & set__led_number(
    const int32_t & _arg)
  {
    this->led_number = _arg;
    return *this;
  }
  Type & set__state(
    const int32_t & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_state::srv::BatterySrv_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_state::srv::BatterySrv_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_state::srv::BatterySrv_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_state::srv::BatterySrv_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_state__srv__BatterySrv_Request
    std::shared_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_state__srv__BatterySrv_Request
    std::shared_ptr<battery_state::srv::BatterySrv_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatterySrv_Request_ & other) const
  {
    if (this->led_number != other.led_number) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatterySrv_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatterySrv_Request_

// alias to use template instance with default allocator
using BatterySrv_Request =
  battery_state::srv::BatterySrv_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_state


#ifndef _WIN32
# define DEPRECATED__battery_state__srv__BatterySrv_Response __attribute__((deprecated))
#else
# define DEPRECATED__battery_state__srv__BatterySrv_Response __declspec(deprecated)
#endif

namespace battery_state
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatterySrv_Response_
{
  using Type = BatterySrv_Response_<ContainerAllocator>;

  explicit BatterySrv_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit BatterySrv_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_state::srv::BatterySrv_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_state::srv::BatterySrv_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_state::srv::BatterySrv_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_state::srv::BatterySrv_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_state__srv__BatterySrv_Response
    std::shared_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_state__srv__BatterySrv_Response
    std::shared_ptr<battery_state::srv::BatterySrv_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatterySrv_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatterySrv_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatterySrv_Response_

// alias to use template instance with default allocator
using BatterySrv_Response =
  battery_state::srv::BatterySrv_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_state


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__battery_state__srv__BatterySrv_Event __attribute__((deprecated))
#else
# define DEPRECATED__battery_state__srv__BatterySrv_Event __declspec(deprecated)
#endif

namespace battery_state
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BatterySrv_Event_
{
  using Type = BatterySrv_Event_<ContainerAllocator>;

  explicit BatterySrv_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit BatterySrv_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<battery_state::srv::BatterySrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<battery_state::srv::BatterySrv_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<battery_state::srv::BatterySrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<battery_state::srv::BatterySrv_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<battery_state::srv::BatterySrv_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<battery_state::srv::BatterySrv_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<battery_state::srv::BatterySrv_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<battery_state::srv::BatterySrv_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    battery_state::srv::BatterySrv_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const battery_state::srv::BatterySrv_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      battery_state::srv::BatterySrv_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      battery_state::srv::BatterySrv_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__battery_state__srv__BatterySrv_Event
    std::shared_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__battery_state__srv__BatterySrv_Event
    std::shared_ptr<battery_state::srv::BatterySrv_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BatterySrv_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const BatterySrv_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BatterySrv_Event_

// alias to use template instance with default allocator
using BatterySrv_Event =
  battery_state::srv::BatterySrv_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace battery_state

namespace battery_state
{

namespace srv
{

struct BatterySrv
{
  using Request = battery_state::srv::BatterySrv_Request;
  using Response = battery_state::srv::BatterySrv_Response;
  using Event = battery_state::srv::BatterySrv_Event;
};

}  // namespace srv

}  // namespace battery_state

#endif  // BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__STRUCT_HPP_
