// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice
#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__init(interfaces_to_gazebo__srv__RqtLaserScan_Request * msg)
{
  if (!msg) {
    return false;
  }
  // who
  return true;
}

void
interfaces_to_gazebo__srv__RqtLaserScan_Request__fini(interfaces_to_gazebo__srv__RqtLaserScan_Request * msg)
{
  if (!msg) {
    return;
  }
  // who
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Request * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // who
  if (lhs->who != rhs->who) {
    return false;
  }
  return true;
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Request * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // who
  output->who = input->who;
  return true;
}

interfaces_to_gazebo__srv__RqtLaserScan_Request *
interfaces_to_gazebo__srv__RqtLaserScan_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_to_gazebo__srv__RqtLaserScan_Request * msg = (interfaces_to_gazebo__srv__RqtLaserScan_Request *)allocator.allocate(sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Request));
  bool success = interfaces_to_gazebo__srv__RqtLaserScan_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_to_gazebo__srv__RqtLaserScan_Request__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_to_gazebo__srv__RqtLaserScan_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__init(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_to_gazebo__srv__RqtLaserScan_Request * data = NULL;

  if (size) {
    data = (interfaces_to_gazebo__srv__RqtLaserScan_Request *)allocator.zero_allocate(size, sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_to_gazebo__srv__RqtLaserScan_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_to_gazebo__srv__RqtLaserScan_Request__fini(&data[i - 1]);
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
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__fini(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array)
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
      interfaces_to_gazebo__srv__RqtLaserScan_Request__fini(&array->data[i]);
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

interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence *
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array = (interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence *)allocator.allocate(sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_to_gazebo__srv__RqtLaserScan_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_to_gazebo__srv__RqtLaserScan_Request * data =
      (interfaces_to_gazebo__srv__RqtLaserScan_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_to_gazebo__srv__RqtLaserScan_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_to_gazebo__srv__RqtLaserScan_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_to_gazebo__srv__RqtLaserScan_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__init(interfaces_to_gazebo__srv__RqtLaserScan_Response * msg)
{
  if (!msg) {
    return false;
  }
  // range
  return true;
}

void
interfaces_to_gazebo__srv__RqtLaserScan_Response__fini(interfaces_to_gazebo__srv__RqtLaserScan_Response * msg)
{
  if (!msg) {
    return;
  }
  // range
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Response * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // range
  if (lhs->range != rhs->range) {
    return false;
  }
  return true;
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Response * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // range
  output->range = input->range;
  return true;
}

interfaces_to_gazebo__srv__RqtLaserScan_Response *
interfaces_to_gazebo__srv__RqtLaserScan_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_to_gazebo__srv__RqtLaserScan_Response * msg = (interfaces_to_gazebo__srv__RqtLaserScan_Response *)allocator.allocate(sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Response));
  bool success = interfaces_to_gazebo__srv__RqtLaserScan_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
interfaces_to_gazebo__srv__RqtLaserScan_Response__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    interfaces_to_gazebo__srv__RqtLaserScan_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__init(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_to_gazebo__srv__RqtLaserScan_Response * data = NULL;

  if (size) {
    data = (interfaces_to_gazebo__srv__RqtLaserScan_Response *)allocator.zero_allocate(size, sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = interfaces_to_gazebo__srv__RqtLaserScan_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        interfaces_to_gazebo__srv__RqtLaserScan_Response__fini(&data[i - 1]);
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
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__fini(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array)
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
      interfaces_to_gazebo__srv__RqtLaserScan_Response__fini(&array->data[i]);
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

interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence *
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array = (interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence *)allocator.allocate(sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!interfaces_to_gazebo__srv__RqtLaserScan_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(interfaces_to_gazebo__srv__RqtLaserScan_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    interfaces_to_gazebo__srv__RqtLaserScan_Response * data =
      (interfaces_to_gazebo__srv__RqtLaserScan_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!interfaces_to_gazebo__srv__RqtLaserScan_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          interfaces_to_gazebo__srv__RqtLaserScan_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!interfaces_to_gazebo__srv__RqtLaserScan_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
