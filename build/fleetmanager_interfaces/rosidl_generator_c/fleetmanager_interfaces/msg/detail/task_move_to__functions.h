// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fleetmanager_interfaces:msg/TaskMoveTo.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "fleetmanager_interfaces/msg/task_move_to.h"


#ifndef FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__FUNCTIONS_H_
#define FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__FUNCTIONS_H_

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
#include "fleetmanager_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "fleetmanager_interfaces/msg/detail/task_move_to__struct.h"

/// Initialize msg/TaskMoveTo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fleetmanager_interfaces__msg__TaskMoveTo
 * )) before or use
 * fleetmanager_interfaces__msg__TaskMoveTo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
bool
fleetmanager_interfaces__msg__TaskMoveTo__init(fleetmanager_interfaces__msg__TaskMoveTo * msg);

/// Finalize msg/TaskMoveTo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
void
fleetmanager_interfaces__msg__TaskMoveTo__fini(fleetmanager_interfaces__msg__TaskMoveTo * msg);

/// Create msg/TaskMoveTo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fleetmanager_interfaces__msg__TaskMoveTo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
fleetmanager_interfaces__msg__TaskMoveTo *
fleetmanager_interfaces__msg__TaskMoveTo__create(void);

/// Destroy msg/TaskMoveTo message.
/**
 * It calls
 * fleetmanager_interfaces__msg__TaskMoveTo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
void
fleetmanager_interfaces__msg__TaskMoveTo__destroy(fleetmanager_interfaces__msg__TaskMoveTo * msg);

/// Check for msg/TaskMoveTo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
bool
fleetmanager_interfaces__msg__TaskMoveTo__are_equal(const fleetmanager_interfaces__msg__TaskMoveTo * lhs, const fleetmanager_interfaces__msg__TaskMoveTo * rhs);

/// Copy a msg/TaskMoveTo message.
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
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
bool
fleetmanager_interfaces__msg__TaskMoveTo__copy(
  const fleetmanager_interfaces__msg__TaskMoveTo * input,
  fleetmanager_interfaces__msg__TaskMoveTo * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_type_hash_t *
fleetmanager_interfaces__msg__TaskMoveTo__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
fleetmanager_interfaces__msg__TaskMoveTo__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_runtime_c__type_description__TypeSource *
fleetmanager_interfaces__msg__TaskMoveTo__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
fleetmanager_interfaces__msg__TaskMoveTo__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/TaskMoveTo messages.
/**
 * It allocates the memory for the number of elements and calls
 * fleetmanager_interfaces__msg__TaskMoveTo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
bool
fleetmanager_interfaces__msg__TaskMoveTo__Sequence__init(fleetmanager_interfaces__msg__TaskMoveTo__Sequence * array, size_t size);

/// Finalize array of msg/TaskMoveTo messages.
/**
 * It calls
 * fleetmanager_interfaces__msg__TaskMoveTo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
void
fleetmanager_interfaces__msg__TaskMoveTo__Sequence__fini(fleetmanager_interfaces__msg__TaskMoveTo__Sequence * array);

/// Create array of msg/TaskMoveTo messages.
/**
 * It allocates the memory for the array and calls
 * fleetmanager_interfaces__msg__TaskMoveTo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
fleetmanager_interfaces__msg__TaskMoveTo__Sequence *
fleetmanager_interfaces__msg__TaskMoveTo__Sequence__create(size_t size);

/// Destroy array of msg/TaskMoveTo messages.
/**
 * It calls
 * fleetmanager_interfaces__msg__TaskMoveTo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
void
fleetmanager_interfaces__msg__TaskMoveTo__Sequence__destroy(fleetmanager_interfaces__msg__TaskMoveTo__Sequence * array);

/// Check for msg/TaskMoveTo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
bool
fleetmanager_interfaces__msg__TaskMoveTo__Sequence__are_equal(const fleetmanager_interfaces__msg__TaskMoveTo__Sequence * lhs, const fleetmanager_interfaces__msg__TaskMoveTo__Sequence * rhs);

/// Copy an array of msg/TaskMoveTo messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fleetmanager_interfaces
bool
fleetmanager_interfaces__msg__TaskMoveTo__Sequence__copy(
  const fleetmanager_interfaces__msg__TaskMoveTo__Sequence * input,
  fleetmanager_interfaces__msg__TaskMoveTo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FLEETMANAGER_INTERFACES__MSG__DETAIL__TASK_MOVE_TO__FUNCTIONS_H_
