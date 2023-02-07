// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__FUNCTIONS_H_
#define INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "interfaces_to_gazebo/msg/rosidl_generator_c__visibility_control.h"

#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__struct.h"

/// Initialize srv/RqtLaserScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces_to_gazebo__srv__RqtLaserScan_Request
 * )) before or use
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__init(interfaces_to_gazebo__srv__RqtLaserScan_Request * msg);

/// Finalize srv/RqtLaserScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Request__fini(interfaces_to_gazebo__srv__RqtLaserScan_Request * msg);

/// Create srv/RqtLaserScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
interfaces_to_gazebo__srv__RqtLaserScan_Request *
interfaces_to_gazebo__srv__RqtLaserScan_Request__create();

/// Destroy srv/RqtLaserScan message.
/**
 * It calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Request__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Request * msg);

/// Check for srv/RqtLaserScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Request * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Request * rhs);

/// Copy a srv/RqtLaserScan message.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Request * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Request * output);

/// Initialize array of srv/RqtLaserScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__init(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array, size_t size);

/// Finalize array of srv/RqtLaserScan messages.
/**
 * It calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__fini(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array);

/// Create array of srv/RqtLaserScan messages.
/**
 * It allocates the memory for the array and calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence *
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__create(size_t size);

/// Destroy array of srv/RqtLaserScan messages.
/**
 * It calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * array);

/// Check for srv/RqtLaserScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * rhs);

/// Copy an array of srv/RqtLaserScan messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence * output);

/// Initialize srv/RqtLaserScan message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * interfaces_to_gazebo__srv__RqtLaserScan_Response
 * )) before or use
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__init(interfaces_to_gazebo__srv__RqtLaserScan_Response * msg);

/// Finalize srv/RqtLaserScan message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Response__fini(interfaces_to_gazebo__srv__RqtLaserScan_Response * msg);

/// Create srv/RqtLaserScan message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
interfaces_to_gazebo__srv__RqtLaserScan_Response *
interfaces_to_gazebo__srv__RqtLaserScan_Response__create();

/// Destroy srv/RqtLaserScan message.
/**
 * It calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Response__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Response * msg);

/// Check for srv/RqtLaserScan message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Response * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Response * rhs);

/// Copy a srv/RqtLaserScan message.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Response * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Response * output);

/// Initialize array of srv/RqtLaserScan messages.
/**
 * It allocates the memory for the number of elements and calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__init(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array, size_t size);

/// Finalize array of srv/RqtLaserScan messages.
/**
 * It calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__fini(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array);

/// Create array of srv/RqtLaserScan messages.
/**
 * It allocates the memory for the array and calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence *
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__create(size_t size);

/// Destroy array of srv/RqtLaserScan messages.
/**
 * It calls
 * interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
void
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__destroy(interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * array);

/// Check for srv/RqtLaserScan message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__are_equal(const interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * lhs, const interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * rhs);

/// Copy an array of srv/RqtLaserScan messages.
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
ROSIDL_GENERATOR_C_PUBLIC_interfaces_to_gazebo
bool
interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence__copy(
  const interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * input,
  interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__FUNCTIONS_H_
