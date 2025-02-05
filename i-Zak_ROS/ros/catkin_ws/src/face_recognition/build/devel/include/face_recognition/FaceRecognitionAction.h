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
 * Auto-generated by genmsg_cpp from file /home/gabriel/catkin_ws/src/procrob_functional-catkin/build/devel/share/face_recognition/msg/FaceRecognitionAction.msg
 *
 */


#ifndef FACE_RECOGNITION_MESSAGE_FACERECOGNITIONACTION_H
#define FACE_RECOGNITION_MESSAGE_FACERECOGNITIONACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <face_recognition/FaceRecognitionActionGoal.h>
#include <face_recognition/FaceRecognitionActionResult.h>
#include <face_recognition/FaceRecognitionActionFeedback.h>

namespace face_recognition
{
template <class ContainerAllocator>
struct FaceRecognitionAction_
{
  typedef FaceRecognitionAction_<ContainerAllocator> Type;

  FaceRecognitionAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  FaceRecognitionAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
    }



   typedef  ::face_recognition::FaceRecognitionActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::face_recognition::FaceRecognitionActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> const> ConstPtr;

}; // struct FaceRecognitionAction_

typedef ::face_recognition::FaceRecognitionAction_<std::allocator<void> > FaceRecognitionAction;

typedef boost::shared_ptr< ::face_recognition::FaceRecognitionAction > FaceRecognitionActionPtr;
typedef boost::shared_ptr< ::face_recognition::FaceRecognitionAction const> FaceRecognitionActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::face_recognition::FaceRecognitionAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "102b0392d6292ae2bbbc788be5a2bd52";
  }

  static const char* value(const ::face_recognition::FaceRecognitionAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x102b0392d6292ae2ULL;
  static const uint64_t static_value2 = 0xbbbc788be5a2bd52ULL;
};

template<class ContainerAllocator>
struct DataType< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "face_recognition/FaceRecognitionAction";
  }

  static const char* value(const ::face_recognition::FaceRecognitionAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
FaceRecognitionActionGoal action_goal\n\
FaceRecognitionActionResult action_result\n\
FaceRecognitionActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
FaceRecognitionGoal goal\n\
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
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#goal definition\n\
uint8   order_id \n\
string  order_argument\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FaceRecognitionResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#result definition\n\
uint8   order_id\n\
string[]  names\n\
float32[] confidence\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FaceRecognitionFeedback feedback\n\
\n\
================================================================================\n\
MSG: face_recognition/FaceRecognitionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
uint8   order_id\n\
string[]  names\n\
float32[] confidence\n\
\n\
\n\
\n\
\n\
\n\
\n\
################# order_id\n\
#order_id = 0: recognize_once\n\
#order_id = 1: recognize_continuous\n\
#order_id = 2  add_face_images\n\
#order_id = 3  (re)train\n\
#order_id = 4  exit\n\
\n\
################ order_argument\n\
# for the add_face_images goal, the order_argument specifies the name of the person for which training images are acquired from the camera.\n\
\n\
################ name and confidence in feedback and result\n\
# for Order_id = 0 or 1, name and confidence are the name and confidence of the recognized person in the video stream.\n\
\n\
";
  }

  static const char* value(const ::face_recognition::FaceRecognitionAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FaceRecognitionAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::face_recognition::FaceRecognitionAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::face_recognition::FaceRecognitionAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::face_recognition::FaceRecognitionActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::face_recognition::FaceRecognitionActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::face_recognition::FaceRecognitionActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FACE_RECOGNITION_MESSAGE_FACERECOGNITIONACTION_H
