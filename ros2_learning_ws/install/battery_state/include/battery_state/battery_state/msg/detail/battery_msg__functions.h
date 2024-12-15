// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/msg/battery_msg.h"


#ifndef BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__FUNCTIONS_H_
#define BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "battery_state/msg/rosidl_generator_c__visibility_control.h"

#include "battery_state/msg/detail/battery_msg__struct.h"

/// Initialize msg/BatteryMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_state__msg__BatteryMsg
 * )) before or use
 * battery_state__msg__BatteryMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__msg__BatteryMsg__init(battery_state__msg__BatteryMsg * msg);

/// Finalize msg/BatteryMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__msg__BatteryMsg__fini(battery_state__msg__BatteryMsg * msg);

/// Create msg/BatteryMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_state__msg__BatteryMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__msg__BatteryMsg *
battery_state__msg__BatteryMsg__create(void);

/// Destroy msg/BatteryMsg message.
/**
 * It calls
 * battery_state__msg__BatteryMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__msg__BatteryMsg__destroy(battery_state__msg__BatteryMsg * msg);

/// Check for msg/BatteryMsg message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__msg__BatteryMsg__are_equal(const battery_state__msg__BatteryMsg * lhs, const battery_state__msg__BatteryMsg * rhs);

/// Copy a msg/BatteryMsg message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__msg__BatteryMsg__copy(
  const battery_state__msg__BatteryMsg * input,
  battery_state__msg__BatteryMsg * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__msg__BatteryMsg__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeDescription *
battery_state__msg__BatteryMsg__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource *
battery_state__msg__BatteryMsg__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__msg__BatteryMsg__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/BatteryMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_state__msg__BatteryMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__msg__BatteryMsg__Sequence__init(battery_state__msg__BatteryMsg__Sequence * array, size_t size);

/// Finalize array of msg/BatteryMsg messages.
/**
 * It calls
 * battery_state__msg__BatteryMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__msg__BatteryMsg__Sequence__fini(battery_state__msg__BatteryMsg__Sequence * array);

/// Create array of msg/BatteryMsg messages.
/**
 * It allocates the memory for the array and calls
 * battery_state__msg__BatteryMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__msg__BatteryMsg__Sequence *
battery_state__msg__BatteryMsg__Sequence__create(size_t size);

/// Destroy array of msg/BatteryMsg messages.
/**
 * It calls
 * battery_state__msg__BatteryMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__msg__BatteryMsg__Sequence__destroy(battery_state__msg__BatteryMsg__Sequence * array);

/// Check for msg/BatteryMsg message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__msg__BatteryMsg__Sequence__are_equal(const battery_state__msg__BatteryMsg__Sequence * lhs, const battery_state__msg__BatteryMsg__Sequence * rhs);

/// Copy an array of msg/BatteryMsg messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__msg__BatteryMsg__Sequence__copy(
  const battery_state__msg__BatteryMsg__Sequence * input,
  battery_state__msg__BatteryMsg__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATE__MSG__DETAIL__BATTERY_MSG__FUNCTIONS_H_
