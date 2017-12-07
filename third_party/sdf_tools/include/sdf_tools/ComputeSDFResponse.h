// Generated by gencpp from file sdf_tools/ComputeSDFResponse.msg
// DO NOT EDIT!


#ifndef SDF_TOOLS_MESSAGE_COMPUTESDFRESPONSE_H
#define SDF_TOOLS_MESSAGE_COMPUTESDFRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sdf_tools/SDF.h>

namespace sdf_tools
{
template <class ContainerAllocator>
struct ComputeSDFResponse_
{
  typedef ComputeSDFResponse_<ContainerAllocator> Type;

  ComputeSDFResponse_()
    : is_valid(false)
    , sdf()  {
    }
  ComputeSDFResponse_(const ContainerAllocator& _alloc)
    : is_valid(false)
    , sdf(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _is_valid_type;
  _is_valid_type is_valid;

   typedef  ::sdf_tools::SDF_<ContainerAllocator>  _sdf_type;
  _sdf_type sdf;




  typedef boost::shared_ptr< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ComputeSDFResponse_

typedef ::sdf_tools::ComputeSDFResponse_<std::allocator<void> > ComputeSDFResponse;

typedef boost::shared_ptr< ::sdf_tools::ComputeSDFResponse > ComputeSDFResponsePtr;
typedef boost::shared_ptr< ::sdf_tools::ComputeSDFResponse const> ComputeSDFResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sdf_tools

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'sdf_tools': ['/home/zby/workspaces/demo_ws/src/sdf_tools/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fbf70ecbf2634799341a7255b0c416e3";
  }

  static const char* value(const ::sdf_tools::ComputeSDFResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfbf70ecbf2634799ULL;
  static const uint64_t static_value2 = 0x341a7255b0c416e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sdf_tools/ComputeSDFResponse";
  }

  static const char* value(const ::sdf_tools::ComputeSDFResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool is_valid\n\
sdf_tools/SDF sdf\n\
\n\
\n\
================================================================================\n\
MSG: sdf_tools/SDF\n\
std_msgs/Header header\n\
geometry_msgs/Transform origin_transform\n\
geometry_msgs/Vector3 dimensions\n\
float64 sdf_cell_size\n\
float32 OOB_value\n\
bool initialized\n\
bool locked\n\
uint8[] data\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::sdf_tools::ComputeSDFResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_valid);
      stream.next(m.sdf);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ComputeSDFResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sdf_tools::ComputeSDFResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sdf_tools::ComputeSDFResponse_<ContainerAllocator>& v)
  {
    s << indent << "is_valid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_valid);
    s << indent << "sdf: ";
    s << std::endl;
    Printer< ::sdf_tools::SDF_<ContainerAllocator> >::stream(s, indent + "  ", v.sdf);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SDF_TOOLS_MESSAGE_COMPUTESDFRESPONSE_H
