#include "ros/ros.h"
#include "geometry_msgs/Twist.h"
#include "turtlesim/TeleportAbsolute.h"
#include "turtlesim/TeleportRelative.h"


int main(int argc, char *argv[]) {
  ros::init(argc, argv, "Hello");

  ros::NodeHandle nh;
  ros::Publisher cmd_vel_pub = nh.advertise<geometry_msgs::Twist>("/turtle1/cmd_vel", 10);

  geometry_msgs::Twist msg;
  msg.linear.x = 1.0;
  msg.angular.z = 0.0;


  while(ros::ok() )
  {
    msg.linear.x = 1.0;
    msg.angular.z = 1.0;
            
    cmd_vel_pub.publish(msg);
    ros::Duration(1.5).sleep();
  }

  return 0;
}