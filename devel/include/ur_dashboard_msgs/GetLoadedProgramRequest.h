// Generated by gencpp from file ur_dashboard_msgs/GetLoadedProgramRequest.msg
// DO NOT EDIT!


#ifndef UR_DASHBOARD_MSGS_MESSAGE_GETLOADEDPROGRAMREQUEST_H
#define UR_DASHBOARD_MSGS_MESSAGE_GETLOADEDPROGRAMREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_dashboard_msgs
{
template <class ContainerAllocator>
struct GetLoadedProgramRequest_
{
  typedef GetLoadedProgramRequest_<ContainerAllocator> Type;

  GetLoadedProgramRequest_()
    {
    }
  GetLoadedProgramRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetLoadedProgramRequest_

typedef ::ur_dashboard_msgs::GetLoadedProgramRequest_<std::allocator<void> > GetLoadedProgramRequest;

typedef boost::shared_ptr< ::ur_dashboard_msgs::GetLoadedProgramRequest > GetLoadedProgramRequestPtr;
typedef boost::shared_ptr< ::ur_dashboard_msgs::GetLoadedProgramRequest const> GetLoadedProgramRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace ur_dashboard_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_dashboard_msgs/GetLoadedProgramRequest";
  }

  static const char* value(const ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
;
  }

  static const char* value(const ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetLoadedProgramRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::ur_dashboard_msgs::GetLoadedProgramRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // UR_DASHBOARD_MSGS_MESSAGE_GETLOADEDPROGRAMREQUEST_H