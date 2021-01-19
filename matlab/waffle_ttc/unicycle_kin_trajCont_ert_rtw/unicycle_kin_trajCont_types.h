/*
 * unicycle_kin_trajCont_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "unicycle_kin_trajCont".
 *
 * Model version              : 1.48
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Jan  8 13:58:36 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_unicycle_kin_trajCont_types_h_
#define RTW_HEADER_unicycle_kin_trajCont_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_unicycle_kin_trajCont_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist_

typedef struct {
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Vector3 Linear;
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Vector3 Angular;
} SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

typedef struct {
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
} SL_Bus_ROSVariableLengthArrayInfo;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_ros_time_Time_

typedef struct {
  real_T Sec;
  real_T Nsec;
} SL_Bus_unicycle_kin_trajCont_ros_time_Time;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_std_msgs_Header_

typedef struct {
  uint32_T Seq;
  uint8_T FrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
  SL_Bus_unicycle_kin_trajCont_ros_time_Time Stamp;
} SL_Bus_unicycle_kin_trajCont_std_msgs_Header;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Quaternion_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Quaternion_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
  real_T W;
} SL_Bus_unicycle_kin_trajCont_geometry_msgs_Quaternion;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Pose_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_geometry_msgs_Pose_

typedef struct {
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point Position;
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Quaternion Orientation;
} SL_Bus_unicycle_kin_trajCont_geometry_msgs_Pose;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_PoseWithCovariance_fhis7r_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_PoseWithCovariance_fhis7r_

typedef struct {
  real_T Covariance[36];
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Pose Pose;
} SL_Bus_unicycle_kin_trajCont_PoseWithCovariance_fhis7r;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_TwistWithCovariance_iec493_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_TwistWithCovariance_iec493_

typedef struct {
  real_T Covariance[36];
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist Twist;
} SL_Bus_unicycle_kin_trajCont_TwistWithCovariance_iec493;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry_
#define DEFINED_TYPEDEF_FOR_SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry_

typedef struct {
  uint8_T ChildFrameId[128];
  SL_Bus_ROSVariableLengthArrayInfo ChildFrameId_SL_Info;
  SL_Bus_unicycle_kin_trajCont_std_msgs_Header Header;
  SL_Bus_unicycle_kin_trajCont_PoseWithCovariance_fhis7r Pose;
  SL_Bus_unicycle_kin_trajCont_TwistWithCovariance_iec493 Twist;
} SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry;

#endif

#ifndef struct_tag_rkSooZHJZnr3Dpfu1LNqfH
#define struct_tag_rkSooZHJZnr3Dpfu1LNqfH

struct tag_rkSooZHJZnr3Dpfu1LNqfH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_rkSooZHJZnr3Dpfu1LNqfH*/

#ifndef typedef_ros_slros_internal_block_Publ_T
#define typedef_ros_slros_internal_block_Publ_T

typedef struct tag_rkSooZHJZnr3Dpfu1LNqfH ros_slros_internal_block_Publ_T;

#endif                               /*typedef_ros_slros_internal_block_Publ_T*/

#ifndef struct_tag_9SewJ4y3IXNs5GrZti8qkG
#define struct_tag_9SewJ4y3IXNs5GrZti8qkG

struct tag_9SewJ4y3IXNs5GrZti8qkG
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /*struct_tag_9SewJ4y3IXNs5GrZti8qkG*/

#ifndef typedef_ros_slros_internal_block_Subs_T
#define typedef_ros_slros_internal_block_Subs_T

typedef struct tag_9SewJ4y3IXNs5GrZti8qkG ros_slros_internal_block_Subs_T;

#endif                               /*typedef_ros_slros_internal_block_Subs_T*/

/* Parameters for system: '<S10>/Enabled Subsystem' */
typedef struct P_EnabledSubsystem_unicycle_k_T_ P_EnabledSubsystem_unicycle_k_T;

/* Parameters (default storage) */
typedef struct P_unicycle_kin_trajCont_T_ P_unicycle_kin_trajCont_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_unicycle_kin_trajCont_T RT_MODEL_unicycle_kin_trajCon_T;

#endif                           /* RTW_HEADER_unicycle_kin_trajCont_types_h_ */
