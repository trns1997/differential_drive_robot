/*
 * waffle_kin_sim_test_types.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "waffle_kin_sim_test".
 *
 * Model version              : 1.26
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Sat Jan  2 13:27:00 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_waffle_kin_sim_test_types_h_
#define RTW_HEADER_waffle_kin_sim_test_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_waffle_kin_sim_test_geometry_msgs_Vector3_
#define DEFINED_TYPEDEF_FOR_SL_Bus_waffle_kin_sim_test_geometry_msgs_Vector3_

typedef struct {
  real_T X;
  real_T Y;
  real_T Z;
} SL_Bus_waffle_kin_sim_test_geometry_msgs_Vector3;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist_
#define DEFINED_TYPEDEF_FOR_SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist_

typedef struct {
  SL_Bus_waffle_kin_sim_test_geometry_msgs_Vector3 Linear;
  SL_Bus_waffle_kin_sim_test_geometry_msgs_Vector3 Angular;
} SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist;

#endif

#ifndef struct_tag_KSdGoEc2IyOHz4CLi4rcCD
#define struct_tag_KSdGoEc2IyOHz4CLi4rcCD

struct tag_KSdGoEc2IyOHz4CLi4rcCD
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_KSdGoEc2IyOHz4CLi4rcCD*/

#ifndef typedef_f_robotics_slcore_internal_bl_T
#define typedef_f_robotics_slcore_internal_bl_T

typedef struct tag_KSdGoEc2IyOHz4CLi4rcCD f_robotics_slcore_internal_bl_T;

#endif                               /*typedef_f_robotics_slcore_internal_bl_T*/

#ifndef struct_tag_3Hmw7UcxkCbDeuTJoUkJ0G
#define struct_tag_3Hmw7UcxkCbDeuTJoUkJ0G

struct tag_3Hmw7UcxkCbDeuTJoUkJ0G
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_robotics_slcore_internal_bl_T SampleTimeHandler;
};

#endif                                 /*struct_tag_3Hmw7UcxkCbDeuTJoUkJ0G*/

#ifndef typedef_ros_slros_internal_block_Curr_T
#define typedef_ros_slros_internal_block_Curr_T

typedef struct tag_3Hmw7UcxkCbDeuTJoUkJ0G ros_slros_internal_block_Curr_T;

#endif                               /*typedef_ros_slros_internal_block_Curr_T*/

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

/* Parameters (default storage) */
typedef struct P_waffle_kin_sim_test_T_ P_waffle_kin_sim_test_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_waffle_kin_sim_test_T RT_MODEL_waffle_kin_sim_test_T;

#endif                             /* RTW_HEADER_waffle_kin_sim_test_types_h_ */
