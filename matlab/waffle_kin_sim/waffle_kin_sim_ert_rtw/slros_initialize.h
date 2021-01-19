#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block waffle_kin_sim/cmd_vel subscriber/Subscribe
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_waffle_kin_sim_geometry_msgs_Twist> Sub_waffle_kin_sim_17;

// For Block waffle_kin_sim/Time publisher/Publish
extern SimulinkPublisher<rosgraph_msgs::Clock, SL_Bus_waffle_kin_sim_rosgraph_msgs_Clock> Pub_waffle_kin_sim_34;

// For Block waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Publish
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_waffle_kin_sim_geometry_msgs_Point> Pub_waffle_kin_sim_125;

// For Block waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Publish1
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_waffle_kin_sim_geometry_msgs_Point> Pub_waffle_kin_sim_126;

// For Block waffle_kin_sim/odom and tf publishers/Publish
extern SimulinkPublisher<nav_msgs::Odometry, SL_Bus_waffle_kin_sim_nav_msgs_Odometry> Pub_waffle_kin_sim_72;

// For Block waffle_kin_sim/odom and tf publishers/Publish1
extern SimulinkPublisher<tf2_msgs::TFMessage, SL_Bus_waffle_kin_sim_tf2_msgs_TFMessage> Pub_waffle_kin_sim_85;

void slros_node_init(int argc, char** argv);

#endif
