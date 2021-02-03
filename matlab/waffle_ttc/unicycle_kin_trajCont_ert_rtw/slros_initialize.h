#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_unicycle_kin_trajCont_std_msgs_Float64> Sub_unicycle_kin_trajCont_76;

// For Block unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/Subscribe1
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_unicycle_kin_trajCont_std_msgs_Float64> Sub_unicycle_kin_trajCont_81;

// For Block unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe
extern SimulinkSubscriber<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point> Sub_unicycle_kin_trajCont_39;

// For Block unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe1
extern SimulinkSubscriber<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point> Sub_unicycle_kin_trajCont_45;

// For Block unicycle_kin_trajCont/Pose subscriber/Subscribe
extern SimulinkSubscriber<nav_msgs::Odometry, SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry> Sub_unicycle_kin_trajCont_53;

// For Block unicycle_kin_trajCont/Command publisher/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist> Pub_unicycle_kin_trajCont_9;

void slros_node_init(int argc, char** argv);

#endif
