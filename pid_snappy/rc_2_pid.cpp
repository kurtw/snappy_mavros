//rc_node subscribes to PID

#include <cstdlib>
#include <stdlib.h>
#include <ros/ros.h>

#include <mavros_msgs/OverrideRCIn.h>
#include <mavros/RCIn.h>
#include <mavros/State.h>

void pid_pub_outCallback(const mavros::RCIn::ConstPtr& msg)
{
  ROS_INFO("rc_2_pidCallback start");
  //call rc_node??

}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "rc_2_pid_sub");
  ros::NodeHandle nh;

  ros:Subscriber rcin_sub = nh.subscribe("pid_pub_out", 10, pid_pub_outCallback);

  ros::spin();

  return 0;
}
