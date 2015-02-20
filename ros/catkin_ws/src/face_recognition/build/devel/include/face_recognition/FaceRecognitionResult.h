/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/gabriel/catkin_ws/src/procrob_functional-catkin/build/devel/share/face_recognition/msg/FaceRecognitionResult.msg
 *
 */


#ifndef FACE_RECOGNITION_MESSAGE_FACERECOGNITIONRESULT_H
#define FACE_RECOGNITION_MESSAGE_FACERECOGNITIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace face_recognition
{
template <class ContainerAllocator>
struct FaceRecognitionResult_
{
  typedef FaceRecognitionResult_<ContainerAllocator> Type;

  FaceRecognitionResult_()
    : order_id(0)
    , names()
    , confidence()  {
    }
  FaceRecognitionResult_(const ContainerAllocator& _alloc)
    : order_id(0)
    , names(_alloc)
    , confidence(_alloc)  {
    }



   typedef uint8_t _order_id_type;
  _order_id_type order_id;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _names_type;
  _names_type names;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _confidence_type;
  _confidence_type confidence;




  typedef boost::shared_ptr< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> const> ConstPtr;

}; // struct FaceRecognitionResult_

typedef ::face_recognition::FaceRecognitionResult_<std::allocator<void> > FaceRecognitionResult;

typedef boost::shared_ptr< ::face_recognition::FaceRecognitionResult > FaceRecognitionResultPtr;
typedef boost::shared_ptr< ::face_recognition::FaceRecognitionResult const> FaceRecognitionResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::face_recognition::FaceRecognitionResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace face_recognition

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'face_recognition': ['/home/gabriel/catkin_ws/src/procrob_functional-catkin/msg', '/home/gabriel/catkin_ws/src/procrob_functional-catkin/build/devel/share/face_recognition/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1354b7478703dcb5d9e033b8bdfafb3b";
  }

  static const char* value(const ::face_recognition::FaceRecognitionResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1354b7478703dcb5ULL;
  static const uint64_t static_value2 = 0xd9e033b8bdfafb3bULL;
};

template<class ContainerAllocator>
struct DataType< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "face_recognition/FaceRecognitionResult";
  }

  static const char* value(const ::face_recognition::FaceRecognitionResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8   order_id\n\
string[]  names\n\
float32[] confidence\n\
";
  }

  static const char* value(const ::face_recognition::FaceRecognitionResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.order_id);
      stream.next(m.names);
      stream.next(m.confidence);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FaceRecognitionResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_recognition::FaceRecognitionResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::face_recognition::FaceRecognitionResult_<ContainerAllocator>& v)
  {
    s << indent << "order_id: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.order_id);
    s << indent << "names[]" << std::endl;
    for (size_t i = 0; i < v.names.size(); ++i)
    {
      s << indent << "  names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.names[i]);
    }
    s << indent << "confidence[]" << std::endl;
    for (size_t i = 0; i < v.confidence.size(); ++i)
    {
      s << indent << "  confidence[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.confidence[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // FACE_RECOGNITION_MESSAGE_FACERECOGNITIONRESULT_H
