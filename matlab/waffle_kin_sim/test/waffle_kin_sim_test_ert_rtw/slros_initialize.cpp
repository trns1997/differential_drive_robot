#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "waffle_kin_sim_test";

// For Block waffle_kin_sim_test/cmd_vel publisher/Publish
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist> Pub_waffle_kin_sim_test_2;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

