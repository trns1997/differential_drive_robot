#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "waffle_kin_sim";

// For Block waffle_kin_sim/cmd_vel subscriber/Subscribe
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_waffle_kin_sim_geometry_msgs_Twist> Sub_waffle_kin_sim_17;

// For Block waffle_kin_sim/Time publisher/Publish
SimulinkPublisher<rosgraph_msgs::Clock, SL_Bus_waffle_kin_sim_rosgraph_msgs_Clock> Pub_waffle_kin_sim_34;

// For Block waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Publish
SimulinkPublisher<geometry_msgs::Point, SL_Bus_waffle_kin_sim_geometry_msgs_Point> Pub_waffle_kin_sim_125;

// For Block waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Publish1
SimulinkPublisher<geometry_msgs::Point, SL_Bus_waffle_kin_sim_geometry_msgs_Point> Pub_waffle_kin_sim_126;

// For Block waffle_kin_sim/odom and tf publishers/Publish
SimulinkPublisher<nav_msgs::Odometry, SL_Bus_waffle_kin_sim_nav_msgs_Odometry> Pub_waffle_kin_sim_72;

// For Block waffle_kin_sim/odom and tf publishers/Publish1
SimulinkPublisher<tf2_msgs::TFMessage, SL_Bus_waffle_kin_sim_tf2_msgs_TFMessage> Pub_waffle_kin_sim_85;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

