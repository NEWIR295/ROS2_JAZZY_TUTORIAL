// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

#include "battery_state/srv/detail/battery_srv__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x58, 0xc6, 0x2e, 0x22, 0xca, 0xd5, 0x75, 0x81,
      0x29, 0x71, 0x64, 0x73, 0xaa, 0x41, 0xc5, 0x26,
      0x03, 0xc2, 0xd8, 0xed, 0x95, 0x64, 0xdf, 0x68,
      0x8e, 0x8a, 0xf9, 0xa0, 0x21, 0x10, 0x99, 0xf7,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xff, 0x71, 0x4d, 0x1d, 0xb0, 0x6c, 0xc4, 0x8b,
      0xe3, 0xbe, 0xb7, 0x16, 0x2c, 0xf0, 0xca, 0x40,
      0x7e, 0x6f, 0x89, 0x3c, 0xc4, 0xe1, 0xc9, 0x1f,
      0x02, 0xcb, 0x4a, 0x27, 0xc6, 0x8f, 0x2a, 0x60,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0xff, 0x57, 0x11, 0x92, 0x89, 0xe3, 0x31,
      0xff, 0x10, 0x9a, 0x2c, 0xbb, 0xea, 0x1c, 0x22,
      0x5f, 0x92, 0xc8, 0x1e, 0x8b, 0x10, 0x23, 0xf2,
      0xed, 0x6c, 0x4f, 0xc9, 0xc8, 0xbe, 0x53, 0x3b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0x0e, 0x55, 0x84, 0x75, 0xf7, 0xbe, 0x71,
      0x76, 0xe3, 0xf6, 0xd5, 0x49, 0x2e, 0x06, 0x32,
      0x6f, 0xbb, 0x55, 0x7a, 0x16, 0x24, 0x75, 0x32,
      0xe1, 0x87, 0xba, 0xc1, 0x0d, 0xab, 0x07, 0x8c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char battery_state__srv__BatterySrv__TYPE_NAME[] = "battery_state/srv/BatterySrv";
static char battery_state__srv__BatterySrv_Event__TYPE_NAME[] = "battery_state/srv/BatterySrv_Event";
static char battery_state__srv__BatterySrv_Request__TYPE_NAME[] = "battery_state/srv/BatterySrv_Request";
static char battery_state__srv__BatterySrv_Response__TYPE_NAME[] = "battery_state/srv/BatterySrv_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char battery_state__srv__BatterySrv__FIELD_NAME__request_message[] = "request_message";
static char battery_state__srv__BatterySrv__FIELD_NAME__response_message[] = "response_message";
static char battery_state__srv__BatterySrv__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field battery_state__srv__BatterySrv__FIELDS[] = {
  {
    {battery_state__srv__BatterySrv__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {battery_state__srv__BatterySrv_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {battery_state__srv__BatterySrv_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {battery_state__srv__BatterySrv_Event__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription battery_state__srv__BatterySrv__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {battery_state__srv__BatterySrv_Event__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {battery_state__srv__BatterySrv__TYPE_NAME, 28, 28},
      {battery_state__srv__BatterySrv__FIELDS, 3, 3},
    },
    {battery_state__srv__BatterySrv__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = battery_state__srv__BatterySrv_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = battery_state__srv__BatterySrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = battery_state__srv__BatterySrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char battery_state__srv__BatterySrv_Request__FIELD_NAME__led_number[] = "led_number";
static char battery_state__srv__BatterySrv_Request__FIELD_NAME__state[] = "state";

static rosidl_runtime_c__type_description__Field battery_state__srv__BatterySrv_Request__FIELDS[] = {
  {
    {battery_state__srv__BatterySrv_Request__FIELD_NAME__led_number, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv_Request__FIELD_NAME__state, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {battery_state__srv__BatterySrv_Request__TYPE_NAME, 36, 36},
      {battery_state__srv__BatterySrv_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char battery_state__srv__BatterySrv_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field battery_state__srv__BatterySrv_Response__FIELDS[] = {
  {
    {battery_state__srv__BatterySrv_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {battery_state__srv__BatterySrv_Response__TYPE_NAME, 37, 37},
      {battery_state__srv__BatterySrv_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char battery_state__srv__BatterySrv_Event__FIELD_NAME__info[] = "info";
static char battery_state__srv__BatterySrv_Event__FIELD_NAME__request[] = "request";
static char battery_state__srv__BatterySrv_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field battery_state__srv__BatterySrv_Event__FIELDS[] = {
  {
    {battery_state__srv__BatterySrv_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {battery_state__srv__BatterySrv_Request__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {battery_state__srv__BatterySrv_Response__TYPE_NAME, 37, 37},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription battery_state__srv__BatterySrv_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {battery_state__srv__BatterySrv_Request__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {battery_state__srv__BatterySrv_Response__TYPE_NAME, 37, 37},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {battery_state__srv__BatterySrv_Event__TYPE_NAME, 34, 34},
      {battery_state__srv__BatterySrv_Event__FIELDS, 3, 3},
    },
    {battery_state__srv__BatterySrv_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = battery_state__srv__BatterySrv_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = battery_state__srv__BatterySrv_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int32 led_number\n"
  "int32 state\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {battery_state__srv__BatterySrv__TYPE_NAME, 28, 28},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 45, 45},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {battery_state__srv__BatterySrv_Request__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {battery_state__srv__BatterySrv_Response__TYPE_NAME, 37, 37},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {battery_state__srv__BatterySrv_Event__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *battery_state__srv__BatterySrv__get_individual_type_description_source(NULL),
    sources[1] = *battery_state__srv__BatterySrv_Event__get_individual_type_description_source(NULL);
    sources[2] = *battery_state__srv__BatterySrv_Request__get_individual_type_description_source(NULL);
    sources[3] = *battery_state__srv__BatterySrv_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *battery_state__srv__BatterySrv_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *battery_state__srv__BatterySrv_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *battery_state__srv__BatterySrv_Event__get_individual_type_description_source(NULL),
    sources[1] = *battery_state__srv__BatterySrv_Request__get_individual_type_description_source(NULL);
    sources[2] = *battery_state__srv__BatterySrv_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
