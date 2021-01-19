#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "unicycle_kin_trajCont_test_1";

// For Block unicycle_kin_trajCont_test_1/Trajectory publisher/Publish
SimulinkPublisher<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point> Pub_unicycle_kin_trajCont_test_1_29;

// For Block unicycle_kin_trajCont_test_1/Trajectory publisher/Publish1
SimulinkPublisher<geometry_msgs::Point, SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point> Pub_unicycle_kin_trajCont_test_1_34;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

