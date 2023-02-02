// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "interfaces_to_gazebo/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace interfaces_to_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
cdr_serialize(
  const interfaces_to_gazebo::srv::RqtLaserScan_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_to_gazebo::srv::RqtLaserScan_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
get_serialized_size(
  const interfaces_to_gazebo::srv::RqtLaserScan_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
max_serialized_size_RqtLaserScan_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces_to_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces_to_gazebo/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace interfaces_to_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
cdr_serialize(
  const interfaces_to_gazebo::srv::RqtLaserScan_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_to_gazebo::srv::RqtLaserScan_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
get_serialized_size(
  const interfaces_to_gazebo::srv::RqtLaserScan_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
max_serialized_size_RqtLaserScan_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces_to_gazebo

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "interfaces_to_gazebo/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan)();

#ifdef __cplusplus
}
#endif

#endif  // INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
