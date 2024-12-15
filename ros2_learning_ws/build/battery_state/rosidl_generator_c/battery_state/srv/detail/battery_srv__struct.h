// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/srv/battery_srv.h"


#ifndef BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__STRUCT_H_
#define BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/BatterySrv in the package battery_state.
typedef struct battery_state__srv__BatterySrv_Request
{
  int32_t led_number;
  int32_t state;
} battery_state__srv__BatterySrv_Request;

// Struct for a sequence of battery_state__srv__BatterySrv_Request.
typedef struct battery_state__srv__BatterySrv_Request__Sequence
{
  battery_state__srv__BatterySrv_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_state__srv__BatterySrv_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/BatterySrv in the package battery_state.
typedef struct battery_state__srv__BatterySrv_Response
{
  bool success;
} battery_state__srv__BatterySrv_Response;

// Struct for a sequence of battery_state__srv__BatterySrv_Response.
typedef struct battery_state__srv__BatterySrv_Response__Sequence
{
  battery_state__srv__BatterySrv_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_state__srv__BatterySrv_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  battery_state__srv__BatterySrv_Event__request__MAX_SIZE = 1
};
// response
enum
{
  battery_state__srv__BatterySrv_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/BatterySrv in the package battery_state.
typedef struct battery_state__srv__BatterySrv_Event
{
  service_msgs__msg__ServiceEventInfo info;
  battery_state__srv__BatterySrv_Request__Sequence request;
  battery_state__srv__BatterySrv_Response__Sequence response;
} battery_state__srv__BatterySrv_Event;

// Struct for a sequence of battery_state__srv__BatterySrv_Event.
typedef struct battery_state__srv__BatterySrv_Event__Sequence
{
  battery_state__srv__BatterySrv_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} battery_state__srv__BatterySrv_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__STRUCT_H_
