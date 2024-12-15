// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "battery_state/srv/detail/battery_srv__rosidl_typesupport_introspection_c.h"
#include "battery_state/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "battery_state/srv/detail/battery_srv__functions.h"
#include "battery_state/srv/detail/battery_srv__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_state__srv__BatterySrv_Request__init(message_memory);
}

void battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_fini_function(void * message_memory)
{
  battery_state__srv__BatterySrv_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_member_array[1] = {
  {
    "led_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_state__srv__BatterySrv_Request, led_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_members = {
  "battery_state__srv",  // message namespace
  "BatterySrv_Request",  // message name
  1,  // number of fields
  sizeof(battery_state__srv__BatterySrv_Request),
  false,  // has_any_key_member_
  battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_member_array,  // message members
  battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_type_support_handle = {
  0,
  &battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_members,
  get_message_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Request__get_type_hash,
  &battery_state__srv__BatterySrv_Request__get_type_description,
  &battery_state__srv__BatterySrv_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_state
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Request)() {
  if (!battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_type_support_handle.typesupport_identifier) {
    battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "battery_state/srv/detail/battery_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "battery_state/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__functions.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__struct.h"


// Include directives for member types
// Member `state`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_state__srv__BatterySrv_Response__init(message_memory);
}

void battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_fini_function(void * message_memory)
{
  battery_state__srv__BatterySrv_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_member_array[1] = {
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_state__srv__BatterySrv_Response, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_members = {
  "battery_state__srv",  // message namespace
  "BatterySrv_Response",  // message name
  1,  // number of fields
  sizeof(battery_state__srv__BatterySrv_Response),
  false,  // has_any_key_member_
  battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_member_array,  // message members
  battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle = {
  0,
  &battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_members,
  get_message_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Response__get_type_hash,
  &battery_state__srv__BatterySrv_Response__get_type_description,
  &battery_state__srv__BatterySrv_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_state
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Response)() {
  if (!battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle.typesupport_identifier) {
    battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "battery_state/srv/detail/battery_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "battery_state/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__functions.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "battery_state/srv/battery_srv.h"
// Member `request`
// Member `response`
// already included above
// #include "battery_state/srv/detail/battery_srv__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  battery_state__srv__BatterySrv_Event__init(message_memory);
}

void battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_fini_function(void * message_memory)
{
  battery_state__srv__BatterySrv_Event__fini(message_memory);
}

size_t battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__size_function__BatterySrv_Event__request(
  const void * untyped_member)
{
  const battery_state__srv__BatterySrv_Request__Sequence * member =
    (const battery_state__srv__BatterySrv_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_const_function__BatterySrv_Event__request(
  const void * untyped_member, size_t index)
{
  const battery_state__srv__BatterySrv_Request__Sequence * member =
    (const battery_state__srv__BatterySrv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_function__BatterySrv_Event__request(
  void * untyped_member, size_t index)
{
  battery_state__srv__BatterySrv_Request__Sequence * member =
    (battery_state__srv__BatterySrv_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__fetch_function__BatterySrv_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const battery_state__srv__BatterySrv_Request * item =
    ((const battery_state__srv__BatterySrv_Request *)
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_const_function__BatterySrv_Event__request(untyped_member, index));
  battery_state__srv__BatterySrv_Request * value =
    (battery_state__srv__BatterySrv_Request *)(untyped_value);
  *value = *item;
}

void battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__assign_function__BatterySrv_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  battery_state__srv__BatterySrv_Request * item =
    ((battery_state__srv__BatterySrv_Request *)
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_function__BatterySrv_Event__request(untyped_member, index));
  const battery_state__srv__BatterySrv_Request * value =
    (const battery_state__srv__BatterySrv_Request *)(untyped_value);
  *item = *value;
}

bool battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__resize_function__BatterySrv_Event__request(
  void * untyped_member, size_t size)
{
  battery_state__srv__BatterySrv_Request__Sequence * member =
    (battery_state__srv__BatterySrv_Request__Sequence *)(untyped_member);
  battery_state__srv__BatterySrv_Request__Sequence__fini(member);
  return battery_state__srv__BatterySrv_Request__Sequence__init(member, size);
}

size_t battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__size_function__BatterySrv_Event__response(
  const void * untyped_member)
{
  const battery_state__srv__BatterySrv_Response__Sequence * member =
    (const battery_state__srv__BatterySrv_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_const_function__BatterySrv_Event__response(
  const void * untyped_member, size_t index)
{
  const battery_state__srv__BatterySrv_Response__Sequence * member =
    (const battery_state__srv__BatterySrv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_function__BatterySrv_Event__response(
  void * untyped_member, size_t index)
{
  battery_state__srv__BatterySrv_Response__Sequence * member =
    (battery_state__srv__BatterySrv_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__fetch_function__BatterySrv_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const battery_state__srv__BatterySrv_Response * item =
    ((const battery_state__srv__BatterySrv_Response *)
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_const_function__BatterySrv_Event__response(untyped_member, index));
  battery_state__srv__BatterySrv_Response * value =
    (battery_state__srv__BatterySrv_Response *)(untyped_value);
  *value = *item;
}

void battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__assign_function__BatterySrv_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  battery_state__srv__BatterySrv_Response * item =
    ((battery_state__srv__BatterySrv_Response *)
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_function__BatterySrv_Event__response(untyped_member, index));
  const battery_state__srv__BatterySrv_Response * value =
    (const battery_state__srv__BatterySrv_Response *)(untyped_value);
  *item = *value;
}

bool battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__resize_function__BatterySrv_Event__response(
  void * untyped_member, size_t size)
{
  battery_state__srv__BatterySrv_Response__Sequence * member =
    (battery_state__srv__BatterySrv_Response__Sequence *)(untyped_member);
  battery_state__srv__BatterySrv_Response__Sequence__fini(member);
  return battery_state__srv__BatterySrv_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(battery_state__srv__BatterySrv_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(battery_state__srv__BatterySrv_Event, request),  // bytes offset in struct
    NULL,  // default value
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__size_function__BatterySrv_Event__request,  // size() function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_const_function__BatterySrv_Event__request,  // get_const(index) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_function__BatterySrv_Event__request,  // get(index) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__fetch_function__BatterySrv_Event__request,  // fetch(index, &value) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__assign_function__BatterySrv_Event__request,  // assign(index, value) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__resize_function__BatterySrv_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(battery_state__srv__BatterySrv_Event, response),  // bytes offset in struct
    NULL,  // default value
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__size_function__BatterySrv_Event__response,  // size() function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_const_function__BatterySrv_Event__response,  // get_const(index) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__get_function__BatterySrv_Event__response,  // get(index) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__fetch_function__BatterySrv_Event__response,  // fetch(index, &value) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__assign_function__BatterySrv_Event__response,  // assign(index, value) function pointer
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__resize_function__BatterySrv_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_members = {
  "battery_state__srv",  // message namespace
  "BatterySrv_Event",  // message name
  3,  // number of fields
  sizeof(battery_state__srv__BatterySrv_Event),
  false,  // has_any_key_member_
  battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_member_array,  // message members
  battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_type_support_handle = {
  0,
  &battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_members,
  get_message_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Event__get_type_hash,
  &battery_state__srv__BatterySrv_Event__get_type_description,
  &battery_state__srv__BatterySrv_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_state
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Event)() {
  battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Request)();
  battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Response)();
  if (!battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_type_support_handle.typesupport_identifier) {
    battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "battery_state/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_members = {
  "battery_state__srv",  // service namespace
  "BatterySrv",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_Request_message_type_support_handle,
  NULL,  // response message
  // battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle
  NULL  // event_message
  // battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle
};


static rosidl_service_type_support_t battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_type_support_handle = {
  0,
  &battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_members,
  get_service_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Request__rosidl_typesupport_introspection_c__BatterySrv_Request_message_type_support_handle,
  &battery_state__srv__BatterySrv_Response__rosidl_typesupport_introspection_c__BatterySrv_Response_message_type_support_handle,
  &battery_state__srv__BatterySrv_Event__rosidl_typesupport_introspection_c__BatterySrv_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    battery_state,
    srv,
    BatterySrv
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    battery_state,
    srv,
    BatterySrv
  ),
  &battery_state__srv__BatterySrv__get_type_hash,
  &battery_state__srv__BatterySrv__get_type_description,
  &battery_state__srv__BatterySrv__get_type_description_sources,
};

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_battery_state
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv)(void) {
  if (!battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_type_support_handle.typesupport_identifier) {
    battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Event)()->data;
  }

  return &battery_state__srv__detail__battery_srv__rosidl_typesupport_introspection_c__BatterySrv_service_type_support_handle;
}
