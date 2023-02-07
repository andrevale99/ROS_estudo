// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__BUILDER_HPP_
#define INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "interfaces_to_gazebo/srv/detail/rqt_laser_scan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace interfaces_to_gazebo
{

namespace srv
{

namespace builder
{

class Init_RqtLaserScan_Request_who
{
public:
  Init_RqtLaserScan_Request_who()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_to_gazebo::srv::RqtLaserScan_Request who(::interfaces_to_gazebo::srv::RqtLaserScan_Request::_who_type arg)
  {
    msg_.who = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_to_gazebo::srv::RqtLaserScan_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_to_gazebo::srv::RqtLaserScan_Request>()
{
  return interfaces_to_gazebo::srv::builder::Init_RqtLaserScan_Request_who();
}

}  // namespace interfaces_to_gazebo


namespace interfaces_to_gazebo
{

namespace srv
{

namespace builder
{

class Init_RqtLaserScan_Response_range
{
public:
  Init_RqtLaserScan_Response_range()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::interfaces_to_gazebo::srv::RqtLaserScan_Response range(::interfaces_to_gazebo::srv::RqtLaserScan_Response::_range_type arg)
  {
    msg_.range = std::move(arg);
    return std::move(msg_);
  }

private:
  ::interfaces_to_gazebo::srv::RqtLaserScan_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::interfaces_to_gazebo::srv::RqtLaserScan_Response>()
{
  return interfaces_to_gazebo::srv::builder::Init_RqtLaserScan_Response_range();
}

}  // namespace interfaces_to_gazebo

#endif  // INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__BUILDER_HPP_
