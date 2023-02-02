// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_to_gazebo:srv/RqtLaserScan.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__STRUCT_HPP_
#define INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Request __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Request __declspec(deprecated)
#endif

namespace interfaces_to_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RqtLaserScan_Request_
{
  using Type = RqtLaserScan_Request_<ContainerAllocator>;

  explicit RqtLaserScan_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->who = 0l;
    }
  }

  explicit RqtLaserScan_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->who = 0l;
    }
  }

  // field types and members
  using _who_type =
    int32_t;
  _who_type who;

  // setters for named parameter idiom
  Type & set__who(
    const int32_t & _arg)
  {
    this->who = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Request
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Request
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RqtLaserScan_Request_ & other) const
  {
    if (this->who != other.who) {
      return false;
    }
    return true;
  }
  bool operator!=(const RqtLaserScan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RqtLaserScan_Request_

// alias to use template instance with default allocator
using RqtLaserScan_Request =
  interfaces_to_gazebo::srv::RqtLaserScan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_to_gazebo


#ifndef _WIN32
# define DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Response __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Response __declspec(deprecated)
#endif

namespace interfaces_to_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct RqtLaserScan_Response_
{
  using Type = RqtLaserScan_Response_<ContainerAllocator>;

  explicit RqtLaserScan_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
    }
  }

  explicit RqtLaserScan_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->range = 0.0f;
    }
  }

  // field types and members
  using _range_type =
    float;
  _range_type range;

  // setters for named parameter idiom
  Type & set__range(
    const float & _arg)
  {
    this->range = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Response
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_to_gazebo__srv__RqtLaserScan_Response
    std::shared_ptr<interfaces_to_gazebo::srv::RqtLaserScan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RqtLaserScan_Response_ & other) const
  {
    if (this->range != other.range) {
      return false;
    }
    return true;
  }
  bool operator!=(const RqtLaserScan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RqtLaserScan_Response_

// alias to use template instance with default allocator
using RqtLaserScan_Response =
  interfaces_to_gazebo::srv::RqtLaserScan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace interfaces_to_gazebo

namespace interfaces_to_gazebo
{

namespace srv
{

struct RqtLaserScan
{
  using Request = interfaces_to_gazebo::srv::RqtLaserScan_Request;
  using Response = interfaces_to_gazebo::srv::RqtLaserScan_Response;
};

}  // namespace srv

}  // namespace interfaces_to_gazebo

#endif  // INTERFACES_TO_GAZEBO__SRV__DETAIL__RQT_LASER_SCAN__STRUCT_HPP_
