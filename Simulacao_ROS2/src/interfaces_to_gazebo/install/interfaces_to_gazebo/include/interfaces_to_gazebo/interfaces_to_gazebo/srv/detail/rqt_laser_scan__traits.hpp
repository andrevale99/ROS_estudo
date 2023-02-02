// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__TRAITS_HPP_
#define INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace interfaces_to_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const RqtLaserScan_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: who
  {
    out << "who: ";
    rosidl_generator_traits::value_to_yaml(msg.who, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RqtLaserScan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: who
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "who: ";
    rosidl_generator_traits::value_to_yaml(msg.who, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RqtLaserScan_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces_to_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_to_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_to_gazebo::srv::RqtLaserScan_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_to_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_to_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_to_gazebo::srv::RqtLaserScan_Request & msg)
{
  return interfaces_to_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_to_gazebo::srv::RqtLaserScan_Request>()
{
  return "interfaces_to_gazebo::srv::RqtLaserScan_Request";
}

template<>
inline const char * name<interfaces_to_gazebo::srv::RqtLaserScan_Request>()
{
  return "interfaces_to_gazebo/srv/RqtLaserScan_Request";
}

template<>
struct has_fixed_size<interfaces_to_gazebo::srv::RqtLaserScan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_to_gazebo::srv::RqtLaserScan_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_to_gazebo::srv::RqtLaserScan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace interfaces_to_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const RqtLaserScan_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: range
  {
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RqtLaserScan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "range: ";
    rosidl_generator_traits::value_to_yaml(msg.range, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RqtLaserScan_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace interfaces_to_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use interfaces_to_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const interfaces_to_gazebo::srv::RqtLaserScan_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  interfaces_to_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use interfaces_to_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const interfaces_to_gazebo::srv::RqtLaserScan_Response & msg)
{
  return interfaces_to_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<interfaces_to_gazebo::srv::RqtLaserScan_Response>()
{
  return "interfaces_to_gazebo::srv::RqtLaserScan_Response";
}

template<>
inline const char * name<interfaces_to_gazebo::srv::RqtLaserScan_Response>()
{
  return "interfaces_to_gazebo/srv/RqtLaserScan_Response";
}

template<>
struct has_fixed_size<interfaces_to_gazebo::srv::RqtLaserScan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<interfaces_to_gazebo::srv::RqtLaserScan_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<interfaces_to_gazebo::srv::RqtLaserScan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<interfaces_to_gazebo::srv::RqtLaserScan>()
{
  return "interfaces_to_gazebo::srv::RqtLaserScan";
}

template<>
inline const char * name<interfaces_to_gazebo::srv::RqtLaserScan>()
{
  return "interfaces_to_gazebo/srv/RqtLaserScan";
}

template<>
struct has_fixed_size<interfaces_to_gazebo::srv::RqtLaserScan>
  : std::integral_constant<
    bool,
    has_fixed_size<interfaces_to_gazebo::srv::RqtLaserScan_Request>::value &&
    has_fixed_size<interfaces_to_gazebo::srv::RqtLaserScan_Response>::value
  >
{
};

template<>
struct has_bounded_size<interfaces_to_gazebo::srv::RqtLaserScan>
  : std::integral_constant<
    bool,
    has_bounded_size<interfaces_to_gazebo::srv::RqtLaserScan_Request>::value &&
    has_bounded_size<interfaces_to_gazebo::srv::RqtLaserScan_Response>::value
  >
{
};

template<>
struct is_service<interfaces_to_gazebo::srv::RqtLaserScan>
  : std::true_type
{
};

template<>
struct is_service_request<interfaces_to_gazebo::srv::RqtLaserScan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<interfaces_to_gazebo::srv::RqtLaserScan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__TRAITS_HPP_
