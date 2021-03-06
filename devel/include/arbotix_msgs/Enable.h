// Generated by gencpp from file arbotix_msgs/Enable.msg
// DO NOT EDIT!


#ifndef ARBOTIX_MSGS_MESSAGE_ENABLE_H
#define ARBOTIX_MSGS_MESSAGE_ENABLE_H

#include <ros/service_traits.h>


#include <arbotix_msgs/EnableRequest.h>
#include <arbotix_msgs/EnableResponse.h>


namespace arbotix_msgs
{

struct Enable
{

typedef EnableRequest Request;
typedef EnableResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Enable
} // namespace arbotix_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::arbotix_msgs::Enable > {
  static const char* value()
  {
    return "3ea372bdd9923da8a6c7ae2db934a6cb";
  }

  static const char* value(const ::arbotix_msgs::Enable&) { return value(); }
};

template<>
struct DataType< ::arbotix_msgs::Enable > {
  static const char* value()
  {
    return "arbotix_msgs/Enable";
  }

  static const char* value(const ::arbotix_msgs::Enable&) { return value(); }
};


// service_traits::MD5Sum< ::arbotix_msgs::EnableRequest> should match 
// service_traits::MD5Sum< ::arbotix_msgs::Enable > 
template<>
struct MD5Sum< ::arbotix_msgs::EnableRequest>
{
  static const char* value()
  {
    return MD5Sum< ::arbotix_msgs::Enable >::value();
  }
  static const char* value(const ::arbotix_msgs::EnableRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::arbotix_msgs::EnableRequest> should match 
// service_traits::DataType< ::arbotix_msgs::Enable > 
template<>
struct DataType< ::arbotix_msgs::EnableRequest>
{
  static const char* value()
  {
    return DataType< ::arbotix_msgs::Enable >::value();
  }
  static const char* value(const ::arbotix_msgs::EnableRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::arbotix_msgs::EnableResponse> should match 
// service_traits::MD5Sum< ::arbotix_msgs::Enable > 
template<>
struct MD5Sum< ::arbotix_msgs::EnableResponse>
{
  static const char* value()
  {
    return MD5Sum< ::arbotix_msgs::Enable >::value();
  }
  static const char* value(const ::arbotix_msgs::EnableResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::arbotix_msgs::EnableResponse> should match 
// service_traits::DataType< ::arbotix_msgs::Enable > 
template<>
struct DataType< ::arbotix_msgs::EnableResponse>
{
  static const char* value()
  {
    return DataType< ::arbotix_msgs::Enable >::value();
  }
  static const char* value(const ::arbotix_msgs::EnableResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ARBOTIX_MSGS_MESSAGE_ENABLE_H
