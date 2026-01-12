// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from fleetmanager_interfaces:msg/Error.idl
// generated code does not contain a copyright notice
#include "fleetmanager_interfaces/msg/detail/error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
fleetmanager_interfaces__msg__Error__init(fleetmanager_interfaces__msg__Error * msg)
{
  if (!msg) {
    return false;
  }
  // severity
  // timepoint
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    fleetmanager_interfaces__msg__Error__fini(msg);
    return false;
  }
  return true;
}

void
fleetmanager_interfaces__msg__Error__fini(fleetmanager_interfaces__msg__Error * msg)
{
  if (!msg) {
    return;
  }
  // severity
  // timepoint
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

bool
fleetmanager_interfaces__msg__Error__are_equal(const fleetmanager_interfaces__msg__Error * lhs, const fleetmanager_interfaces__msg__Error * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // severity
  if (lhs->severity != rhs->severity) {
    return false;
  }
  // timepoint
  if (lhs->timepoint != rhs->timepoint) {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
fleetmanager_interfaces__msg__Error__copy(
  const fleetmanager_interfaces__msg__Error * input,
  fleetmanager_interfaces__msg__Error * output)
{
  if (!input || !output) {
    return false;
  }
  // severity
  output->severity = input->severity;
  // timepoint
  output->timepoint = input->timepoint;
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

fleetmanager_interfaces__msg__Error *
fleetmanager_interfaces__msg__Error__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleetmanager_interfaces__msg__Error * msg = (fleetmanager_interfaces__msg__Error *)allocator.allocate(sizeof(fleetmanager_interfaces__msg__Error), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(fleetmanager_interfaces__msg__Error));
  bool success = fleetmanager_interfaces__msg__Error__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
fleetmanager_interfaces__msg__Error__destroy(fleetmanager_interfaces__msg__Error * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    fleetmanager_interfaces__msg__Error__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
fleetmanager_interfaces__msg__Error__Sequence__init(fleetmanager_interfaces__msg__Error__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleetmanager_interfaces__msg__Error * data = NULL;

  if (size) {
    data = (fleetmanager_interfaces__msg__Error *)allocator.zero_allocate(size, sizeof(fleetmanager_interfaces__msg__Error), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = fleetmanager_interfaces__msg__Error__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        fleetmanager_interfaces__msg__Error__fini(&data[i - 1]);
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
fleetmanager_interfaces__msg__Error__Sequence__fini(fleetmanager_interfaces__msg__Error__Sequence * array)
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
      fleetmanager_interfaces__msg__Error__fini(&array->data[i]);
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

fleetmanager_interfaces__msg__Error__Sequence *
fleetmanager_interfaces__msg__Error__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  fleetmanager_interfaces__msg__Error__Sequence * array = (fleetmanager_interfaces__msg__Error__Sequence *)allocator.allocate(sizeof(fleetmanager_interfaces__msg__Error__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = fleetmanager_interfaces__msg__Error__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
fleetmanager_interfaces__msg__Error__Sequence__destroy(fleetmanager_interfaces__msg__Error__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    fleetmanager_interfaces__msg__Error__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
fleetmanager_interfaces__msg__Error__Sequence__are_equal(const fleetmanager_interfaces__msg__Error__Sequence * lhs, const fleetmanager_interfaces__msg__Error__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!fleetmanager_interfaces__msg__Error__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
fleetmanager_interfaces__msg__Error__Sequence__copy(
  const fleetmanager_interfaces__msg__Error__Sequence * input,
  fleetmanager_interfaces__msg__Error__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(fleetmanager_interfaces__msg__Error);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    fleetmanager_interfaces__msg__Error * data =
      (fleetmanager_interfaces__msg__Error *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!fleetmanager_interfaces__msg__Error__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          fleetmanager_interfaces__msg__Error__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!fleetmanager_interfaces__msg__Error__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
