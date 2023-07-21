// Generated by gencpp from file easy_handeye_msgs/ExecutePlan.msg
// DO NOT EDIT!


#ifndef EASY_HANDEYE_MSGS_MESSAGE_EXECUTEPLAN_H
#define EASY_HANDEYE_MSGS_MESSAGE_EXECUTEPLAN_H

#include <ros/service_traits.h>


#include <easy_handeye_msgs/ExecutePlanRequest.h>
#include <easy_handeye_msgs/ExecutePlanResponse.h>


namespace easy_handeye_msgs
{

struct ExecutePlan
{

typedef ExecutePlanRequest Request;
typedef ExecutePlanResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ExecutePlan
} // namespace easy_handeye_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::easy_handeye_msgs::ExecutePlan > {
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::easy_handeye_msgs::ExecutePlan&) { return value(); }
};

template<>
struct DataType< ::easy_handeye_msgs::ExecutePlan > {
  static const char* value()
  {
    return "easy_handeye_msgs/ExecutePlan";
  }

  static const char* value(const ::easy_handeye_msgs::ExecutePlan&) { return value(); }
};


// service_traits::MD5Sum< ::easy_handeye_msgs::ExecutePlanRequest> should match
// service_traits::MD5Sum< ::easy_handeye_msgs::ExecutePlan >
template<>
struct MD5Sum< ::easy_handeye_msgs::ExecutePlanRequest>
{
  static const char* value()
  {
    return MD5Sum< ::easy_handeye_msgs::ExecutePlan >::value();
  }
  static const char* value(const ::easy_handeye_msgs::ExecutePlanRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::easy_handeye_msgs::ExecutePlanRequest> should match
// service_traits::DataType< ::easy_handeye_msgs::ExecutePlan >
template<>
struct DataType< ::easy_handeye_msgs::ExecutePlanRequest>
{
  static const char* value()
  {
    return DataType< ::easy_handeye_msgs::ExecutePlan >::value();
  }
  static const char* value(const ::easy_handeye_msgs::ExecutePlanRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::easy_handeye_msgs::ExecutePlanResponse> should match
// service_traits::MD5Sum< ::easy_handeye_msgs::ExecutePlan >
template<>
struct MD5Sum< ::easy_handeye_msgs::ExecutePlanResponse>
{
  static const char* value()
  {
    return MD5Sum< ::easy_handeye_msgs::ExecutePlan >::value();
  }
  static const char* value(const ::easy_handeye_msgs::ExecutePlanResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::easy_handeye_msgs::ExecutePlanResponse> should match
// service_traits::DataType< ::easy_handeye_msgs::ExecutePlan >
template<>
struct DataType< ::easy_handeye_msgs::ExecutePlanResponse>
{
  static const char* value()
  {
    return DataType< ::easy_handeye_msgs::ExecutePlan >::value();
  }
  static const char* value(const ::easy_handeye_msgs::ExecutePlanResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // EASY_HANDEYE_MSGS_MESSAGE_EXECUTEPLAN_H
