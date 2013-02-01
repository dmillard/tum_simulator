/* Auto-generated by genmsg_cpp for file /home/dmillard/fuerte_workspace/sandbox/tum_simulator/cvg_sim_msgs/msg/MotorStatus.msg */
#ifndef CVG_SIM_MSGS_MESSAGE_MOTORSTATUS_H
#define CVG_SIM_MSGS_MESSAGE_MOTORSTATUS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"

namespace cvg_sim_msgs
{
template <class ContainerAllocator>
struct MotorStatus_ {
  typedef MotorStatus_<ContainerAllocator> Type;

  MotorStatus_()
  : header()
  , on(false)
  , running(false)
  , frequency()
  , current()
  {
  }

  MotorStatus_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , on(false)
  , running(false)
  , frequency(_alloc)
  , current(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint8_t _on_type;
  uint8_t on;

  typedef uint8_t _running_type;
  uint8_t running;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _frequency_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  frequency;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _current_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  current;


  typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct MotorStatus
typedef  ::cvg_sim_msgs::MotorStatus_<std::allocator<void> > MotorStatus;

typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus> MotorStatusPtr;
typedef boost::shared_ptr< ::cvg_sim_msgs::MotorStatus const> MotorStatusConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace cvg_sim_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "1469bebf9a94a2d2a47aefabd197f250";
  }

  static const char* value(const  ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x1469bebf9a94a2d2ULL;
  static const uint64_t static_value2 = 0xa47aefabd197f250ULL;
};

template<class ContainerAllocator>
struct DataType< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cvg_sim_msgs/MotorStatus";
  }

  static const char* value(const  ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
bool on\n\
bool running\n\
float32[] frequency\n\
uint8[] current\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.on);
    stream.next(m.running);
    stream.next(m.frequency);
    stream.next(m.current);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct MotorStatus_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::cvg_sim_msgs::MotorStatus_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "on: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.on);
    s << indent << "running: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.running);
    s << indent << "frequency[]" << std::endl;
    for (size_t i = 0; i < v.frequency.size(); ++i)
    {
      s << indent << "  frequency[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.frequency[i]);
    }
    s << indent << "current[]" << std::endl;
    for (size_t i = 0; i < v.current.size(); ++i)
    {
      s << indent << "  current[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.current[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // CVG_SIM_MSGS_MESSAGE_MOTORSTATUS_H

