// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "battery_state/srv/detail/battery_srv__struct.h"
#include "battery_state/srv/detail/battery_srv__type_support.h"
#include "battery_state/srv/detail/battery_srv__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace battery_state
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BatterySrv_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatterySrv_Request_type_support_ids_t;

static const _BatterySrv_Request_type_support_ids_t _BatterySrv_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BatterySrv_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatterySrv_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatterySrv_Request_type_support_symbol_names_t _BatterySrv_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_state, srv, BatterySrv_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Request)),
  }
};

typedef struct _BatterySrv_Request_type_support_data_t
{
  void * data[2];
} _BatterySrv_Request_type_support_data_t;

static _BatterySrv_Request_type_support_data_t _BatterySrv_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatterySrv_Request_message_typesupport_map = {
  2,
  "battery_state",
  &_BatterySrv_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BatterySrv_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BatterySrv_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatterySrv_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatterySrv_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Request__get_type_hash,
  &battery_state__srv__BatterySrv_Request__get_type_description,
  &battery_state__srv__BatterySrv_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace battery_state

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, battery_state, srv, BatterySrv_Request)() {
  return &::battery_state::srv::rosidl_typesupport_c::BatterySrv_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__struct.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__type_support.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace battery_state
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BatterySrv_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatterySrv_Response_type_support_ids_t;

static const _BatterySrv_Response_type_support_ids_t _BatterySrv_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BatterySrv_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatterySrv_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatterySrv_Response_type_support_symbol_names_t _BatterySrv_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_state, srv, BatterySrv_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Response)),
  }
};

typedef struct _BatterySrv_Response_type_support_data_t
{
  void * data[2];
} _BatterySrv_Response_type_support_data_t;

static _BatterySrv_Response_type_support_data_t _BatterySrv_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatterySrv_Response_message_typesupport_map = {
  2,
  "battery_state",
  &_BatterySrv_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BatterySrv_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BatterySrv_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatterySrv_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatterySrv_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Response__get_type_hash,
  &battery_state__srv__BatterySrv_Response__get_type_description,
  &battery_state__srv__BatterySrv_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace battery_state

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, battery_state, srv, BatterySrv_Response)() {
  return &::battery_state::srv::rosidl_typesupport_c::BatterySrv_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__struct.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__type_support.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace battery_state
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _BatterySrv_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatterySrv_Event_type_support_ids_t;

static const _BatterySrv_Event_type_support_ids_t _BatterySrv_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BatterySrv_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatterySrv_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatterySrv_Event_type_support_symbol_names_t _BatterySrv_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_state, srv, BatterySrv_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv_Event)),
  }
};

typedef struct _BatterySrv_Event_type_support_data_t
{
  void * data[2];
} _BatterySrv_Event_type_support_data_t;

static _BatterySrv_Event_type_support_data_t _BatterySrv_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatterySrv_Event_message_typesupport_map = {
  2,
  "battery_state",
  &_BatterySrv_Event_message_typesupport_ids.typesupport_identifier[0],
  &_BatterySrv_Event_message_typesupport_symbol_names.symbol_name[0],
  &_BatterySrv_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BatterySrv_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatterySrv_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &battery_state__srv__BatterySrv_Event__get_type_hash,
  &battery_state__srv__BatterySrv_Event__get_type_description,
  &battery_state__srv__BatterySrv_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace battery_state

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, battery_state, srv, BatterySrv_Event)() {
  return &::battery_state::srv::rosidl_typesupport_c::BatterySrv_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "battery_state/srv/detail/battery_srv__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace battery_state
{

namespace srv
{

namespace rosidl_typesupport_c
{
typedef struct _BatterySrv_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BatterySrv_type_support_ids_t;

static const _BatterySrv_type_support_ids_t _BatterySrv_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _BatterySrv_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BatterySrv_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BatterySrv_type_support_symbol_names_t _BatterySrv_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, battery_state, srv, BatterySrv)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, battery_state, srv, BatterySrv)),
  }
};

typedef struct _BatterySrv_type_support_data_t
{
  void * data[2];
} _BatterySrv_type_support_data_t;

static _BatterySrv_type_support_data_t _BatterySrv_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BatterySrv_service_typesupport_map = {
  2,
  "battery_state",
  &_BatterySrv_service_typesupport_ids.typesupport_identifier[0],
  &_BatterySrv_service_typesupport_symbol_names.symbol_name[0],
  &_BatterySrv_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BatterySrv_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BatterySrv_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &BatterySrv_Request_message_type_support_handle,
  &BatterySrv_Response_message_type_support_handle,
  &BatterySrv_Event_message_type_support_handle,
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

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace battery_state

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, battery_state, srv, BatterySrv)() {
  return &::battery_state::srv::rosidl_typesupport_c::BatterySrv_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif
