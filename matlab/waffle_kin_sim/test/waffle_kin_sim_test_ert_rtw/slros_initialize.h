#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block waffle_kin_sim_test/cmd_vel publisher/Publish
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist> Pub_waffle_kin_sim_test_2;

void slros_node_init(int argc, char** argv);

#endif
