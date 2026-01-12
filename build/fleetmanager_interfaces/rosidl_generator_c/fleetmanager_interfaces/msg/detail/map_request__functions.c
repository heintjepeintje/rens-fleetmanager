// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fleetmanager_interfaces:msg/MapRequest.idl
// generated code does not contain a copyright notice
#include "fleetmanager_interfaces/msg/detail/map_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
fleetmanager_interfaces__msg__MapRequest__init(fleetmanager_interfaces__msg__MapRequest * msg)
{
  if (!msg) {
    return false;
  }
  // loc_x
  // loc_y
  // level
  // radius
  return true;
}

void
fleetmanager_interfaces__msg__MapRequest__fini(fleetmanager_interfaces__msg__MapRequest * msg)
{
  if (!msg) {
    return;
  }
  // loc_x
  // loc_y
  // level
  // radius
}

bool
fleetmanager_interfaces__msg__MapRequest__are_equal(const fleetmanager_interfaces__msg__MapRequest * lhs, const fleetmanager_interfaces__msg__MapRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // loc_x
  if (lhs->loc_x != rhs->loc_x) {
    return false;
  }
  // loc_y
  if (lhs->loc_y != rhs->loc_y) {
    return false;
  }
  // level
  if (lhs->level != rhs->level) {
    return false;
  }
  // radius
  if (lhs->radius != rhs->radius) {
    return false;
  }
  return true;
}

bool
fleetmanager_interfaces__msg__MapRequest__copy(
  const fleetmanager_interfaces__msg__MapRequest * input,
  fleetmanager_interfaces__msg__MapRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // loc_x
  output->loc_x = input->loc_x;
  // loc_y
  output->loc_y = input->loc_y;
  // level
  output->level = input->level;
  // radius
  output->radius = input->radius;
  return true;
}

fleetmanager_interfaces__msg__MapRequest *
fleetmanager_interfaces__msg__MapRequest__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleetmanager_interfaces__msg__MapRequest * msg = (fleetmanager_interfaces__msg__MapRequest *)allocator.allocate(sizeof(fleetmanager_interfaces__msg__MapRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleetmanager_interfaces__msg__MapRequest));
  bool success = fleetmanager_interfaces__msg__MapRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleetmanager_interfaces__msg__MapRequest__destroy(fleetmanager_interfaces__msg__MapRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleetmanager_interfaces__msg__MapRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleetmanager_interfaces__msg__MapRequest__Sequence__init(fleetmanager_interfaces__msg__MapRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleetmanager_interfaces__msg__MapRequest * data = NULL;

  if (size) {
    data = (fleetmanager_interfaces__msg__MapRequest *)allocator.zero_allocate(size, sizeof(fleetmanager_interfaces__msg__MapRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleetmanager_interfaces__msg__MapRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleetmanager_interfaces__msg__MapRequest__fini(&data[i - 1]);
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
fleetmanager_interfaces__msg__MapRequest__Sequence__fini(fleetmanager_interfaces__msg__MapRequest__Sequence * array)
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
      fleetmanager_interfaces__msg__MapRequest__fini(&array->data[i]);
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

fleetmanager_interfaces__msg__MapRequest__Sequence *
fleetmanager_interfaces__msg__MapRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleetmanager_interfaces__msg__MapRequest__Sequence * array = (fleetmanager_interfaces__msg__MapRequest__Sequence *)allocator.allocate(sizeof(fleetmanager_interfaces__msg__MapRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleetmanager_interfaces__msg__MapRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleetmanager_interfaces__msg__MapRequest__Sequence__destroy(fleetmanager_interfaces__msg__MapRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleetmanager_interfaces__msg__MapRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleetmanager_interfaces__msg__MapRequest__Sequence__are_equal(const fleetmanager_interfaces__msg__MapRequest__Sequence * lhs, const fleetmanager_interfaces__msg__MapRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleetmanager_interfaces__msg__MapRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleetmanager_interfaces__msg__MapRequest__Sequence__copy(
  const fleetmanager_interfaces__msg__MapRequest__Sequence * input,
  fleetmanager_interfaces__msg__MapRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleetmanager_interfaces__msg__MapRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleetmanager_interfaces__msg__MapRequest * data =
      (fleetmanager_interfaces__msg__MapRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleetmanager_interfaces__msg__MapRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleetmanager_interfaces__msg__MapRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleetmanager_interfaces__msg__MapRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
