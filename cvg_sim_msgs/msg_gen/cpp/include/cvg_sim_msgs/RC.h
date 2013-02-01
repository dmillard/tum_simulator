/* Auto-generated by genmsg_cpp for file /home/dmillard/fuerte_workspace/sandbox/tum_simulator/cvg_sim_msgs/msg/RC.msg */
#ifndef CVG_SIM_MSGS_MESSAGE_RC_H
#define CVG_SIM_MSGS_MESSAGE_RC_H
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
struct RC_ {
  typedef RC_<ContainerAllocator> Type;

  RC_()
  : header()
  , status(0)
  , valid(false)
  , axis()
  , axis_function()
  , swit()
  , swit_function()
  {
  }

  RC_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , status(0)
  , valid(false)
  , axis(_alloc)
  , axis_function(_alloc)
  , swit(_alloc)
  , swit_function(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint8_t _status_type;
  uint8_t status;

  typedef uint8_t _valid_type;
  uint8_t valid;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _axis_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  axis;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _axis_function_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  axis_function;

  typedef std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  _swit_type;
  std::vector<int8_t, typename ContainerAllocator::template rebind<int8_t>::other >  swit;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _swit_function_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  swit_function;

  enum { ROLL = 1 };
  enum { PITCH = 2 };
  enum { YAW = 3 };
  enum { STEER = 4 };
  enum { HEIGHT = 5 };
  enum { THRUST = 6 };
  enum { BRAKE = 7 };

  typedef boost::shared_ptr< ::cvg_sim_msgs::RC_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cvg_sim_msgs::RC_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct RC
typedef  ::cvg_sim_msgs::RC_<std::allocator<void> > RC;

typedef boost::shared_ptr< ::cvg_sim_msgs::RC> RCPtr;
typedef boost::shared_ptr< ::cvg_sim_msgs::RC const> RCConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::cvg_sim_msgs::RC_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::cvg_sim_msgs::RC_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace cvg_sim_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::cvg_sim_msgs::RC_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::cvg_sim_msgs::RC_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::cvg_sim_msgs::RC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2691c2fe8c5ab2323146bdd8dd2e449e";
  }

  static const char* value(const  ::cvg_sim_msgs::RC_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2691c2fe8c5ab232ULL;
  static const uint64_t static_value2 = 0x3146bdd8dd2e449eULL;
};

template<class ContainerAllocator>
struct DataType< ::cvg_sim_msgs::RC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cvg_sim_msgs/RC";
  }

  static const char* value(const  ::cvg_sim_msgs::RC_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::cvg_sim_msgs::RC_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
\n\
uint8 ROLL = 1\n\
uint8 PITCH = 2\n\
uint8 YAW = 3\n\
uint8 STEER = 4\n\
uint8 HEIGHT = 5\n\
uint8 THRUST = 6\n\
uint8 BRAKE = 7\n\
\n\
uint8 status\n\
bool valid\n\
\n\
float32[] axis\n\
uint8[] axis_function\n\
\n\
int8[] swit\n\
uint8[] swit_function\n\
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

  static const char* value(const  ::cvg_sim_msgs::RC_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::cvg_sim_msgs::RC_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::cvg_sim_msgs::RC_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::cvg_sim_msgs::RC_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.status);
    stream.next(m.valid);
    stream.next(m.axis);
    stream.next(m.axis_function);
    stream.next(m.swit);
    stream.next(m.swit_function);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct RC_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cvg_sim_msgs::RC_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::cvg_sim_msgs::RC_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
    s << indent << "valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.valid);
    s << indent << "axis[]" << std::endl;
    for (size_t i = 0; i < v.axis.size(); ++i)
    {
      s << indent << "  axis[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.axis[i]);
    }
    s << indent << "axis_function[]" << std::endl;
    for (size_t i = 0; i < v.axis_function.size(); ++i)
    {
      s << indent << "  axis_function[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.axis_function[i]);
    }
    s << indent << "swit[]" << std::endl;
    for (size_t i = 0; i < v.swit.size(); ++i)
    {
      s << indent << "  swit[" << i << "]: ";
      Printer<int8_t>::stream(s, indent + "  ", v.swit[i]);
    }
    s << indent << "swit_function[]" << std::endl;
    for (size_t i = 0; i < v.swit_function.size(); ++i)
    {
      s << indent << "  swit_function[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.swit_function[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // CVG_SIM_MSGS_MESSAGE_RC_H

