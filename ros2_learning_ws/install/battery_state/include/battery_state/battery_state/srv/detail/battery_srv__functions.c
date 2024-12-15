// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_state:srv/BatterySrv.idl
// generated code does not contain a copyright notice
#include "battery_state/srv/detail/battery_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
battery_state__srv__BatterySrv_Request__init(battery_state__srv__BatterySrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // led_number
  // state
  return true;
}

void
battery_state__srv__BatterySrv_Request__fini(battery_state__srv__BatterySrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // led_number
  // state
}

bool
battery_state__srv__BatterySrv_Request__are_equal(const battery_state__srv__BatterySrv_Request * lhs, const battery_state__srv__BatterySrv_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // led_number
  if (lhs->led_number != rhs->led_number) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
battery_state__srv__BatterySrv_Request__copy(
  const battery_state__srv__BatterySrv_Request * input,
  battery_state__srv__BatterySrv_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // led_number
  output->led_number = input->led_number;
  // state
  output->state = input->state;
  return true;
}

battery_state__srv__BatterySrv_Request *
battery_state__srv__BatterySrv_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Request * msg = (battery_state__srv__BatterySrv_Request *)allocator.allocate(sizeof(battery_state__srv__BatterySrv_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_state__srv__BatterySrv_Request));
  bool success = battery_state__srv__BatterySrv_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_state__srv__BatterySrv_Request__destroy(battery_state__srv__BatterySrv_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_state__srv__BatterySrv_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_state__srv__BatterySrv_Request__Sequence__init(battery_state__srv__BatterySrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Request * data = NULL;

  if (size) {
    data = (battery_state__srv__BatterySrv_Request *)allocator.zero_allocate(size, sizeof(battery_state__srv__BatterySrv_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_state__srv__BatterySrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_state__srv__BatterySrv_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_state__srv__BatterySrv_Request__Sequence__fini(battery_state__srv__BatterySrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_state__srv__BatterySrv_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_state__srv__BatterySrv_Request__Sequence *
battery_state__srv__BatterySrv_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Request__Sequence * array = (battery_state__srv__BatterySrv_Request__Sequence *)allocator.allocate(sizeof(battery_state__srv__BatterySrv_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_state__srv__BatterySrv_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_state__srv__BatterySrv_Request__Sequence__destroy(battery_state__srv__BatterySrv_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_state__srv__BatterySrv_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_state__srv__BatterySrv_Request__Sequence__are_equal(const battery_state__srv__BatterySrv_Request__Sequence * lhs, const battery_state__srv__BatterySrv_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_state__srv__BatterySrv_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_state__srv__BatterySrv_Request__Sequence__copy(
  const battery_state__srv__BatterySrv_Request__Sequence * input,
  battery_state__srv__BatterySrv_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_state__srv__BatterySrv_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_state__srv__BatterySrv_Request * data =
      (battery_state__srv__BatterySrv_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_state__srv__BatterySrv_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_state__srv__BatterySrv_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_state__srv__BatterySrv_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
battery_state__srv__BatterySrv_Response__init(battery_state__srv__BatterySrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
battery_state__srv__BatterySrv_Response__fini(battery_state__srv__BatterySrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
battery_state__srv__BatterySrv_Response__are_equal(const battery_state__srv__BatterySrv_Response * lhs, const battery_state__srv__BatterySrv_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
battery_state__srv__BatterySrv_Response__copy(
  const battery_state__srv__BatterySrv_Response * input,
  battery_state__srv__BatterySrv_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

battery_state__srv__BatterySrv_Response *
battery_state__srv__BatterySrv_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Response * msg = (battery_state__srv__BatterySrv_Response *)allocator.allocate(sizeof(battery_state__srv__BatterySrv_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_state__srv__BatterySrv_Response));
  bool success = battery_state__srv__BatterySrv_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_state__srv__BatterySrv_Response__destroy(battery_state__srv__BatterySrv_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_state__srv__BatterySrv_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_state__srv__BatterySrv_Response__Sequence__init(battery_state__srv__BatterySrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Response * data = NULL;

  if (size) {
    data = (battery_state__srv__BatterySrv_Response *)allocator.zero_allocate(size, sizeof(battery_state__srv__BatterySrv_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_state__srv__BatterySrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_state__srv__BatterySrv_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_state__srv__BatterySrv_Response__Sequence__fini(battery_state__srv__BatterySrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_state__srv__BatterySrv_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_state__srv__BatterySrv_Response__Sequence *
battery_state__srv__BatterySrv_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Response__Sequence * array = (battery_state__srv__BatterySrv_Response__Sequence *)allocator.allocate(sizeof(battery_state__srv__BatterySrv_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_state__srv__BatterySrv_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_state__srv__BatterySrv_Response__Sequence__destroy(battery_state__srv__BatterySrv_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_state__srv__BatterySrv_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_state__srv__BatterySrv_Response__Sequence__are_equal(const battery_state__srv__BatterySrv_Response__Sequence * lhs, const battery_state__srv__BatterySrv_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_state__srv__BatterySrv_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_state__srv__BatterySrv_Response__Sequence__copy(
  const battery_state__srv__BatterySrv_Response__Sequence * input,
  battery_state__srv__BatterySrv_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_state__srv__BatterySrv_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_state__srv__BatterySrv_Response * data =
      (battery_state__srv__BatterySrv_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_state__srv__BatterySrv_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_state__srv__BatterySrv_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_state__srv__BatterySrv_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "battery_state/srv/detail/battery_srv__functions.h"

bool
battery_state__srv__BatterySrv_Event__init(battery_state__srv__BatterySrv_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    battery_state__srv__BatterySrv_Event__fini(msg);
    return false;
  }
  // request
  if (!battery_state__srv__BatterySrv_Request__Sequence__init(&msg->request, 0)) {
    battery_state__srv__BatterySrv_Event__fini(msg);
    return false;
  }
  // response
  if (!battery_state__srv__BatterySrv_Response__Sequence__init(&msg->response, 0)) {
    battery_state__srv__BatterySrv_Event__fini(msg);
    return false;
  }
  return true;
}

void
battery_state__srv__BatterySrv_Event__fini(battery_state__srv__BatterySrv_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  battery_state__srv__BatterySrv_Request__Sequence__fini(&msg->request);
  // response
  battery_state__srv__BatterySrv_Response__Sequence__fini(&msg->response);
}

bool
battery_state__srv__BatterySrv_Event__are_equal(const battery_state__srv__BatterySrv_Event * lhs, const battery_state__srv__BatterySrv_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!battery_state__srv__BatterySrv_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!battery_state__srv__BatterySrv_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
battery_state__srv__BatterySrv_Event__copy(
  const battery_state__srv__BatterySrv_Event * input,
  battery_state__srv__BatterySrv_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!battery_state__srv__BatterySrv_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!battery_state__srv__BatterySrv_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

battery_state__srv__BatterySrv_Event *
battery_state__srv__BatterySrv_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Event * msg = (battery_state__srv__BatterySrv_Event *)allocator.allocate(sizeof(battery_state__srv__BatterySrv_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_state__srv__BatterySrv_Event));
  bool success = battery_state__srv__BatterySrv_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_state__srv__BatterySrv_Event__destroy(battery_state__srv__BatterySrv_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_state__srv__BatterySrv_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_state__srv__BatterySrv_Event__Sequence__init(battery_state__srv__BatterySrv_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Event * data = NULL;

  if (size) {
    data = (battery_state__srv__BatterySrv_Event *)allocator.zero_allocate(size, sizeof(battery_state__srv__BatterySrv_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_state__srv__BatterySrv_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_state__srv__BatterySrv_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
battery_state__srv__BatterySrv_Event__Sequence__fini(battery_state__srv__BatterySrv_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      battery_state__srv__BatterySrv_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

battery_state__srv__BatterySrv_Event__Sequence *
battery_state__srv__BatterySrv_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__srv__BatterySrv_Event__Sequence * array = (battery_state__srv__BatterySrv_Event__Sequence *)allocator.allocate(sizeof(battery_state__srv__BatterySrv_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_state__srv__BatterySrv_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_state__srv__BatterySrv_Event__Sequence__destroy(battery_state__srv__BatterySrv_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_state__srv__BatterySrv_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_state__srv__BatterySrv_Event__Sequence__are_equal(const battery_state__srv__BatterySrv_Event__Sequence * lhs, const battery_state__srv__BatterySrv_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_state__srv__BatterySrv_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_state__srv__BatterySrv_Event__Sequence__copy(
  const battery_state__srv__BatterySrv_Event__Sequence * input,
  battery_state__srv__BatterySrv_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_state__srv__BatterySrv_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_state__srv__BatterySrv_Event * data =
      (battery_state__srv__BatterySrv_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_state__srv__BatterySrv_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_state__srv__BatterySrv_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_state__srv__BatterySrv_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
