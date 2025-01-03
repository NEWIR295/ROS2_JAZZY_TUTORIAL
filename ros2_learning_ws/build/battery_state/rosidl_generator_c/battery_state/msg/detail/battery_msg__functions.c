// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from battery_state:msg/BatteryMsg.idl
// generated code does not contain a copyright notice
#include "battery_state/msg/detail/battery_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
battery_state__msg__BatteryMsg__init(battery_state__msg__BatteryMsg * msg)
{
  if (!msg) {
    return false;
  }
  // leds_on
  return true;
}

void
battery_state__msg__BatteryMsg__fini(battery_state__msg__BatteryMsg * msg)
{
  if (!msg) {
    return;
  }
  // leds_on
}

bool
battery_state__msg__BatteryMsg__are_equal(const battery_state__msg__BatteryMsg * lhs, const battery_state__msg__BatteryMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // leds_on
  if (lhs->leds_on != rhs->leds_on) {
    return false;
  }
  return true;
}

bool
battery_state__msg__BatteryMsg__copy(
  const battery_state__msg__BatteryMsg * input,
  battery_state__msg__BatteryMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // leds_on
  output->leds_on = input->leds_on;
  return true;
}

battery_state__msg__BatteryMsg *
battery_state__msg__BatteryMsg__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__msg__BatteryMsg * msg = (battery_state__msg__BatteryMsg *)allocator.allocate(sizeof(battery_state__msg__BatteryMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(battery_state__msg__BatteryMsg));
  bool success = battery_state__msg__BatteryMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
battery_state__msg__BatteryMsg__destroy(battery_state__msg__BatteryMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    battery_state__msg__BatteryMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
battery_state__msg__BatteryMsg__Sequence__init(battery_state__msg__BatteryMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__msg__BatteryMsg * data = NULL;

  if (size) {
    data = (battery_state__msg__BatteryMsg *)allocator.zero_allocate(size, sizeof(battery_state__msg__BatteryMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = battery_state__msg__BatteryMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        battery_state__msg__BatteryMsg__fini(&data[i - 1]);
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
battery_state__msg__BatteryMsg__Sequence__fini(battery_state__msg__BatteryMsg__Sequence * array)
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
      battery_state__msg__BatteryMsg__fini(&array->data[i]);
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

battery_state__msg__BatteryMsg__Sequence *
battery_state__msg__BatteryMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  battery_state__msg__BatteryMsg__Sequence * array = (battery_state__msg__BatteryMsg__Sequence *)allocator.allocate(sizeof(battery_state__msg__BatteryMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = battery_state__msg__BatteryMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
battery_state__msg__BatteryMsg__Sequence__destroy(battery_state__msg__BatteryMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    battery_state__msg__BatteryMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
battery_state__msg__BatteryMsg__Sequence__are_equal(const battery_state__msg__BatteryMsg__Sequence * lhs, const battery_state__msg__BatteryMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!battery_state__msg__BatteryMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
battery_state__msg__BatteryMsg__Sequence__copy(
  const battery_state__msg__BatteryMsg__Sequence * input,
  battery_state__msg__BatteryMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(battery_state__msg__BatteryMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    battery_state__msg__BatteryMsg * data =
      (battery_state__msg__BatteryMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!battery_state__msg__BatteryMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          battery_state__msg__BatteryMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!battery_state__msg__BatteryMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
