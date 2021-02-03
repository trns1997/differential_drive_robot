#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "unicycle_kin_trajCont";

// For Block unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_unicycle_kin_trajCont_std_msgs_Float64> Sub_unicycle_kin_trajCont_76;

// For Block unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/Subscribe1
SimulinkSubscriber<std_msgs::Float64, SL_Bus_unicycle_kin_trajCont_std_msgs_Float64> Sub_unicycle_kin_trajCont_81;

// For Block unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point> Sub_unicycle_kin_trajCont_39;

// For Block unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe1
SimulinkSubscriber<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point> Sub_unicycle_kin_trajCont_45;

// For Block unicycle_kin_trajCont/Pose subscriber/Subscribe
SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry> Sub_unicycle_kin_trajCont_53;

// For Block unicycle_kin_trajCont/Command publisher/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist> Pub_unicycle_kin_trajCont_9;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

