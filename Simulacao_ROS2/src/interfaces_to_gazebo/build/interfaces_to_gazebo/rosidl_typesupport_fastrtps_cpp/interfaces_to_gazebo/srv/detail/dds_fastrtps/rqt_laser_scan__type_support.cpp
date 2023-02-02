// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice
#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__rosidl_typesupport_fastrtps_cpp.hpp"
#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: who
  cdr << ros_message.who;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_to_gazebo::srv::RqtLaserScan_Request & ros_message)
{
  // Member: who
  cdr >> ros_message.who;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
get_serialized_size(
  const interfaces_to_gazebo::srv::RqtLaserScan_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: who
  {
    size_t item_size = sizeof(ros_message.who);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
max_serialized_size_RqtLaserScan_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: who
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RqtLaserScan_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_to_gazebo::srv::RqtLaserScan_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RqtLaserScan_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_to_gazebo::srv::RqtLaserScan_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RqtLaserScan_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_to_gazebo::srv::RqtLaserScan_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RqtLaserScan_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RqtLaserScan_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RqtLaserScan_Request__callbacks = {
  "interfaces_to_gazebo::srv",
  "RqtLaserScan_Request",
  _RqtLaserScan_Request__cdr_serialize,
  _RqtLaserScan_Request__cdr_deserialize,
  _RqtLaserScan_Request__get_serialized_size,
  _RqtLaserScan_Request__max_serialized_size
};

static rosidl_message_type_support_t _RqtLaserScan_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RqtLaserScan_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces_to_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_to_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_to_gazebo::srv::RqtLaserScan_Request>()
{
  return &interfaces_to_gazebo::srv::typesupport_fastrtps_cpp::_RqtLaserScan_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan_Request)() {
  return &interfaces_to_gazebo::srv::typesupport_fastrtps_cpp::_RqtLaserScan_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: range
  cdr << ros_message.range;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  interfaces_to_gazebo::srv::RqtLaserScan_Response & ros_message)
{
  // Member: range
  cdr >> ros_message.range;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
get_serialized_size(
  const interfaces_to_gazebo::srv::RqtLaserScan_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: range
  {
    size_t item_size = sizeof(ros_message.range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_interfaces_to_gazebo
max_serialized_size_RqtLaserScan_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: range
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _RqtLaserScan_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const interfaces_to_gazebo::srv::RqtLaserScan_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RqtLaserScan_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<interfaces_to_gazebo::srv::RqtLaserScan_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RqtLaserScan_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const interfaces_to_gazebo::srv::RqtLaserScan_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RqtLaserScan_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RqtLaserScan_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RqtLaserScan_Response__callbacks = {
  "interfaces_to_gazebo::srv",
  "RqtLaserScan_Response",
  _RqtLaserScan_Response__cdr_serialize,
  _RqtLaserScan_Response__cdr_deserialize,
  _RqtLaserScan_Response__get_serialized_size,
  _RqtLaserScan_Response__max_serialized_size
};

static rosidl_message_type_support_t _RqtLaserScan_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RqtLaserScan_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces_to_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_to_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<interfaces_to_gazebo::srv::RqtLaserScan_Response>()
{
  return &interfaces_to_gazebo::srv::typesupport_fastrtps_cpp::_RqtLaserScan_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan_Response)() {
  return &interfaces_to_gazebo::srv::typesupport_fastrtps_cpp::_RqtLaserScan_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace interfaces_to_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RqtLaserScan__callbacks = {
  "interfaces_to_gazebo::srv",
  "RqtLaserScan",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan_Response)(),
};

static rosidl_service_type_support_t _RqtLaserScan__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RqtLaserScan__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace interfaces_to_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_interfaces_to_gazebo
const rosidl_service_type_support_t *
get_service_type_support_handle<interfaces_to_gazebo::srv::RqtLaserScan>()
{
  return &interfaces_to_gazebo::srv::typesupport_fastrtps_cpp::_RqtLaserScan__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, interfaces_to_gazebo, srv, RqtLaserScan)() {
  return &interfaces_to_gazebo::srv::typesupport_fastrtps_cpp::_RqtLaserScan__handle;
}

#ifdef __cplusplus
}
#endif
