// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__STRUCT_H_
#define INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/RqtLaserScan in the package interfaces_to_gazebo.
typedef struct interfaces_to_gazebo__srv__RqtLaserScan_Request
{
  int32_t who;
} interfaces_to_gazebo__srv__RqtLaserScan_Request;

// Struct for a sequence of interfaces_to_gazebo__srv__RqtLaserScan_Request.
typedef struct interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence
{
  interfaces_to_gazebo__srv__RqtLaserScan_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_to_gazebo__srv__RqtLaserScan_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RqtLaserScan in the package interfaces_to_gazebo.
typedef struct interfaces_to_gazebo__srv__RqtLaserScan_Response
{
  float range;
} interfaces_to_gazebo__srv__RqtLaserScan_Response;

// Struct for a sequence of interfaces_to_gazebo__srv__RqtLaserScan_Response.
typedef struct interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence
{
  interfaces_to_gazebo__srv__RqtLaserScan_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} interfaces_to_gazebo__srv__RqtLaserScan_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__STRUCT_H_
