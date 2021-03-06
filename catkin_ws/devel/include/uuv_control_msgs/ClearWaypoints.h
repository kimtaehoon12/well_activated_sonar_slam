// Generated by gencpp from file uuv_control_msgs/ClearWaypoints.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_CLEARWAYPOINTS_H
#define UUV_CONTROL_MSGS_MESSAGE_CLEARWAYPOINTS_H

#include <ros/service_traits.h>


#include <uuv_control_msgs/ClearWaypointsRequest.h>
#include <uuv_control_msgs/ClearWaypointsResponse.h>


namespace uuv_control_msgs
{

struct ClearWaypoints
{

typedef ClearWaypointsRequest Request;
typedef ClearWaypointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ClearWaypoints
} // namespace uuv_control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::uuv_control_msgs::ClearWaypoints > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::uuv_control_msgs::ClearWaypoints&) { return value(); }
};

template<>
struct DataType< ::uuv_control_msgs::ClearWaypoints > {
  static const char* value()
  {
    return "uuv_control_msgs/ClearWaypoints";
  }

  static const char* value(const ::uuv_control_msgs::ClearWaypoints&) { return value(); }
};


// service_traits::MD5Sum< ::uuv_control_msgs::ClearWaypointsRequest> should match 
// service_traits::MD5Sum< ::uuv_control_msgs::ClearWaypoints > 
template<>
struct MD5Sum< ::uuv_control_msgs::ClearWaypointsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::ClearWaypoints >::value();
  }
  static const char* value(const ::uuv_control_msgs::ClearWaypointsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::ClearWaypointsRequest> should match 
// service_traits::DataType< ::uuv_control_msgs::ClearWaypoints > 
template<>
struct DataType< ::uuv_control_msgs::ClearWaypointsRequest>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::ClearWaypoints >::value();
  }
  static const char* value(const ::uuv_control_msgs::ClearWaypointsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::uuv_control_msgs::ClearWaypointsResponse> should match 
// service_traits::MD5Sum< ::uuv_control_msgs::ClearWaypoints > 
template<>
struct MD5Sum< ::uuv_control_msgs::ClearWaypointsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::uuv_control_msgs::ClearWaypoints >::value();
  }
  static const char* value(const ::uuv_control_msgs::ClearWaypointsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::uuv_control_msgs::ClearWaypointsResponse> should match 
// service_traits::DataType< ::uuv_control_msgs::ClearWaypoints > 
template<>
struct DataType< ::uuv_control_msgs::ClearWaypointsResponse>
{
  static const char* value()
  {
    return DataType< ::uuv_control_msgs::ClearWaypoints >::value();
  }
  static const char* value(const ::uuv_control_msgs::ClearWaypointsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_CLEARWAYPOINTS_H
