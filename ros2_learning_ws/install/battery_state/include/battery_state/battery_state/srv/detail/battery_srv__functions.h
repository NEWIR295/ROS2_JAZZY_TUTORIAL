// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "battery_state/srv/battery_srv.h"


#ifndef BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__FUNCTIONS_H_
#define BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__FUNCTIONS_H_

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

#include "battery_state/srv/detail/battery_srv__struct.h"

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv__get_type_hash(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv__get_type_description(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv__get_type_description_sources(
  const rosidl_service_type_support_t * type_support);

/// Initialize srv/BatterySrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_state__srv__BatterySrv_Request
 * )) before or use
 * battery_state__srv__BatterySrv_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Request__init(battery_state__srv__BatterySrv_Request * msg);

/// Finalize srv/BatterySrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Request__fini(battery_state__srv__BatterySrv_Request * msg);

/// Create srv/BatterySrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_state__srv__BatterySrv_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__srv__BatterySrv_Request *
battery_state__srv__BatterySrv_Request__create(void);

/// Destroy srv/BatterySrv message.
/**
 * It calls
 * battery_state__srv__BatterySrv_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Request__destroy(battery_state__srv__BatterySrv_Request * msg);

/// Check for srv/BatterySrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Request__are_equal(const battery_state__srv__BatterySrv_Request * lhs, const battery_state__srv__BatterySrv_Request * rhs);

/// Copy a srv/BatterySrv message.
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
battery_state__srv__BatterySrv_Request__copy(
  const battery_state__srv__BatterySrv_Request * input,
  battery_state__srv__BatterySrv_Request * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv_Request__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/BatterySrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_state__srv__BatterySrv_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Request__Sequence__init(battery_state__srv__BatterySrv_Request__Sequence * array, size_t size);

/// Finalize array of srv/BatterySrv messages.
/**
 * It calls
 * battery_state__srv__BatterySrv_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Request__Sequence__fini(battery_state__srv__BatterySrv_Request__Sequence * array);

/// Create array of srv/BatterySrv messages.
/**
 * It allocates the memory for the array and calls
 * battery_state__srv__BatterySrv_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__srv__BatterySrv_Request__Sequence *
battery_state__srv__BatterySrv_Request__Sequence__create(size_t size);

/// Destroy array of srv/BatterySrv messages.
/**
 * It calls
 * battery_state__srv__BatterySrv_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Request__Sequence__destroy(battery_state__srv__BatterySrv_Request__Sequence * array);

/// Check for srv/BatterySrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Request__Sequence__are_equal(const battery_state__srv__BatterySrv_Request__Sequence * lhs, const battery_state__srv__BatterySrv_Request__Sequence * rhs);

/// Copy an array of srv/BatterySrv messages.
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
battery_state__srv__BatterySrv_Request__Sequence__copy(
  const battery_state__srv__BatterySrv_Request__Sequence * input,
  battery_state__srv__BatterySrv_Request__Sequence * output);

/// Initialize srv/BatterySrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_state__srv__BatterySrv_Response
 * )) before or use
 * battery_state__srv__BatterySrv_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Response__init(battery_state__srv__BatterySrv_Response * msg);

/// Finalize srv/BatterySrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Response__fini(battery_state__srv__BatterySrv_Response * msg);

/// Create srv/BatterySrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_state__srv__BatterySrv_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__srv__BatterySrv_Response *
battery_state__srv__BatterySrv_Response__create(void);

/// Destroy srv/BatterySrv message.
/**
 * It calls
 * battery_state__srv__BatterySrv_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Response__destroy(battery_state__srv__BatterySrv_Response * msg);

/// Check for srv/BatterySrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Response__are_equal(const battery_state__srv__BatterySrv_Response * lhs, const battery_state__srv__BatterySrv_Response * rhs);

/// Copy a srv/BatterySrv message.
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
battery_state__srv__BatterySrv_Response__copy(
  const battery_state__srv__BatterySrv_Response * input,
  battery_state__srv__BatterySrv_Response * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv_Response__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/BatterySrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_state__srv__BatterySrv_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Response__Sequence__init(battery_state__srv__BatterySrv_Response__Sequence * array, size_t size);

/// Finalize array of srv/BatterySrv messages.
/**
 * It calls
 * battery_state__srv__BatterySrv_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Response__Sequence__fini(battery_state__srv__BatterySrv_Response__Sequence * array);

/// Create array of srv/BatterySrv messages.
/**
 * It allocates the memory for the array and calls
 * battery_state__srv__BatterySrv_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__srv__BatterySrv_Response__Sequence *
battery_state__srv__BatterySrv_Response__Sequence__create(size_t size);

/// Destroy array of srv/BatterySrv messages.
/**
 * It calls
 * battery_state__srv__BatterySrv_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Response__Sequence__destroy(battery_state__srv__BatterySrv_Response__Sequence * array);

/// Check for srv/BatterySrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Response__Sequence__are_equal(const battery_state__srv__BatterySrv_Response__Sequence * lhs, const battery_state__srv__BatterySrv_Response__Sequence * rhs);

/// Copy an array of srv/BatterySrv messages.
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
battery_state__srv__BatterySrv_Response__Sequence__copy(
  const battery_state__srv__BatterySrv_Response__Sequence * input,
  battery_state__srv__BatterySrv_Response__Sequence * output);

/// Initialize srv/BatterySrv message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * battery_state__srv__BatterySrv_Event
 * )) before or use
 * battery_state__srv__BatterySrv_Event__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Event__init(battery_state__srv__BatterySrv_Event * msg);

/// Finalize srv/BatterySrv message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Event__fini(battery_state__srv__BatterySrv_Event * msg);

/// Create srv/BatterySrv message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * battery_state__srv__BatterySrv_Event__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__srv__BatterySrv_Event *
battery_state__srv__BatterySrv_Event__create(void);

/// Destroy srv/BatterySrv message.
/**
 * It calls
 * battery_state__srv__BatterySrv_Event__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Event__destroy(battery_state__srv__BatterySrv_Event * msg);

/// Check for srv/BatterySrv message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Event__are_equal(const battery_state__srv__BatterySrv_Event * lhs, const battery_state__srv__BatterySrv_Event * rhs);

/// Copy a srv/BatterySrv message.
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
battery_state__srv__BatterySrv_Event__copy(
  const battery_state__srv__BatterySrv_Event * input,
  battery_state__srv__BatterySrv_Event * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_type_hash_t *
battery_state__srv__BatterySrv_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeDescription *
battery_state__srv__BatterySrv_Event__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource *
battery_state__srv__BatterySrv_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_battery_state
const rosidl_runtime_c__type_description__TypeSource__Sequence *
battery_state__srv__BatterySrv_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of srv/BatterySrv messages.
/**
 * It allocates the memory for the number of elements and calls
 * battery_state__srv__BatterySrv_Event__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Event__Sequence__init(battery_state__srv__BatterySrv_Event__Sequence * array, size_t size);

/// Finalize array of srv/BatterySrv messages.
/**
 * It calls
 * battery_state__srv__BatterySrv_Event__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Event__Sequence__fini(battery_state__srv__BatterySrv_Event__Sequence * array);

/// Create array of srv/BatterySrv messages.
/**
 * It allocates the memory for the array and calls
 * battery_state__srv__BatterySrv_Event__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
battery_state__srv__BatterySrv_Event__Sequence *
battery_state__srv__BatterySrv_Event__Sequence__create(size_t size);

/// Destroy array of srv/BatterySrv messages.
/**
 * It calls
 * battery_state__srv__BatterySrv_Event__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
void
battery_state__srv__BatterySrv_Event__Sequence__destroy(battery_state__srv__BatterySrv_Event__Sequence * array);

/// Check for srv/BatterySrv message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_battery_state
bool
battery_state__srv__BatterySrv_Event__Sequence__are_equal(const battery_state__srv__BatterySrv_Event__Sequence * lhs, const battery_state__srv__BatterySrv_Event__Sequence * rhs);

/// Copy an array of srv/BatterySrv messages.
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
battery_state__srv__BatterySrv_Event__Sequence__copy(
  const battery_state__srv__BatterySrv_Event__Sequence * input,
  battery_state__srv__BatterySrv_Event__Sequence * output);
#ifdef __cplusplus
}
#endif

#endif  // BATTERY_STATE__SRV__DETAIL__BATTERY_SRV__FUNCTIONS_H_
