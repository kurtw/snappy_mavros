#include <cstdlib>
#include <stdlib.h>
#include <sstream>
#include <ros/ros.h>

#include <mavros_msgs/OverrideRCIn.h>
#include <mavros/RCIn.h>
#include <mavros/State.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "pid_pub");
  ros::NodeHandle nh;

  ros::Publisher pid_pub = nh.advertise<mavros_msgs::OverrideRCIn>("pid_pub_out",10);
  mavros_msgs::OverrideRCIn msg_pid;

  while (ros::ok())
  {
    //convert data to something mavros wants?

    pid_pub.publish(msg_pid);
    ros::spinOnce;
  }

  return 0;
}
