// Generated by gencpp from file uuv_control_msgs/IsRunningTrajectoryResponse.msg
// DO NOT EDIT!


#ifndef UUV_CONTROL_MSGS_MESSAGE_ISRUNNINGTRAJECTORYRESPONSE_H
#define UUV_CONTROL_MSGS_MESSAGE_ISRUNNINGTRAJECTORYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace uuv_control_msgs
{
template <class ContainerAllocator>
struct IsRunningTrajectoryResponse_
{
  typedef IsRunningTrajectoryResponse_<ContainerAllocator> Type;

  IsRunningTrajectoryResponse_()
    : progress(0.0)  {
    }
  IsRunningTrajectoryResponse_(const ContainerAllocator& _alloc)
    : progress(0.0)  {
  (void)_alloc;
    }



   typedef double _progress_type;
  _progress_type progress;





  typedef boost::shared_ptr< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> const> ConstPtr;

}; // struct IsRunningTrajectoryResponse_

typedef ::uuv_control_msgs::IsRunningTrajectoryResponse_<std::allocator<void> > IsRunningTrajectoryResponse;

typedef boost::shared_ptr< ::uuv_control_msgs::IsRunningTrajectoryResponse > IsRunningTrajectoryResponsePtr;
typedef boost::shared_ptr< ::uuv_control_msgs::IsRunningTrajectoryResponse const> IsRunningTrajectoryResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace uuv_control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'uuv_control_msgs': ['/home/biorobotics/catkin_ws/src/uuv_simulator/uuv_control/uuv_control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7afca0099e0cddc25243b1e3569895fe";
  }

  static const char* value(const ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7afca0099e0cddc2ULL;
  static const uint64_t static_value2 = 0x5243b1e3569895feULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_control_msgs/IsRunningTrajectoryResponse";
  }

  static const char* value(const ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 progress\n\
\n\
";
  }

  static const char* value(const ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.progress);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct IsRunningTrajectoryResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_control_msgs::IsRunningTrajectoryResponse_<ContainerAllocator>& v)
  {
    s << indent << "progress: ";
    Printer<double>::stream(s, indent + "  ", v.progress);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_CONTROL_MSGS_MESSAGE_ISRUNNINGTRAJECTORYRESPONSE_H
