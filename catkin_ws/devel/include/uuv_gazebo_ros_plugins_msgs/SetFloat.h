// Generated by gencpp from file uuv_gazebo_ros_plugins_msgs/SetFloat.msg
// DO NOT EDIT!


#ifndef UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETFLOAT_H
#define UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETFLOAT_H

#include <ros/service_traits.h>


#include <uuv_gazebo_ros_plugins_msgs/SetFloatRequest.h>
#include <uuv_gazebo_ros_plugins_msgs/SetFloatResponse.h>


namespace uuv_gazebo_ros_plugins_msgs
{

struct SetFloat
{

typedef SetFloatRequest Request;
typedef SetFloatResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct SetFloat
} // namespace uuv_gazebo_ros_plugins_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloat > {
  static const char* value()
  {
    return "3f47c51e9da05852f0d7f484f9279955";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloat&) { return value(); }
};

template<>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloat > {
  static const char* value()
  {
    return "uuv_gazebo_ros_plugins_msgs/SetFloat";
  }

  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloat&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest> should match 
// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloat > 
template<>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloat >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest> should match 
// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloat > 
template<>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloat >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloatResponse> should match 
// service_traits::MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloat > 
template<>
struct MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloatResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_gazebo_ros_plugins_msgs::SetFloat >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloatResponse> should match 
// service_traits::DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloat > 
template<>
struct DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloatResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_gazebo_ros_plugins_msgs::SetFloat >::value();
  }
  static const char* value(const ::uuv_gazebo_ros_plugins_msgs::SetFloatResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_GAZEBO_ROS_PLUGINS_MSGS_MESSAGE_SETFLOAT_H
