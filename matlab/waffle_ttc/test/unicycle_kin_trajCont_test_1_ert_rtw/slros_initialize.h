#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "slros_time.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block unicycle_kin_trajCont_test_1/Trajectory publisher/Publish
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point> Pub_unicycle_kin_trajCont_test_1_29;

// For Block unicycle_kin_trajCont_test_1/Trajectory publisher/Publish1
extern SimulinkPublisher<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point> Pub_unicycle_kin_trajCont_test_1_34;

void slros_node_init(int argc, char** argv);

#endif
