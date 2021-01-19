/*
 * unicycle_kin_trajCont_test_1.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "unicycle_kin_trajCont_test_1".
 *
 * Model version              : 1.27
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Jan  8 13:29:27 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_unicycle_kin_trajCont_test_1_h_
#define RTW_HEADER_unicycle_kin_trajCont_test_1_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "unicycle_kin_trajCont_test_1_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ros_slros_internal_block_Curr_T obj; /* '<S1>/Current Time' */
  ros_slros_internal_block_Publ_T obj_e;/* '<S7>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_j;/* '<S6>/SinkBlock' */
  boolean_T objisempty;                /* '<S7>/SinkBlock' */
  boolean_T objisempty_l;              /* '<S6>/SinkBlock' */
  boolean_T objisempty_h;              /* '<S1>/Current Time' */
} DW_unicycle_kin_trajCont_test_T;

/* Parameters (default storage) */
struct P_unicycle_kin_trajCont_test__T_ {
  real_T Squaretrajectory_L;           /* Mask Parameter: Squaretrajectory_L
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Squaretrajectory_v;           /* Mask Parameter: Squaretrajectory_v
                                        * Referenced by: '<S1>/Constant3'
                                        */
  SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point Constant_Value;/* Computed Parameter: Constant_Value
                                                                      * Referenced by: '<S4>/Constant'
                                                                      */
  SL_Bus_unicycle_kin_trajCont_test_1_geometry_msgs_Point Constant_Value_e;/* Computed Parameter: Constant_Value_e
                                                                      * Referenced by: '<S5>/Constant'
                                                                      */
  real_T Constant_Value_g;             /* Expression: start(1)
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: start(2)
                                        * Referenced by: '<S1>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_unicycle_kin_trajCont_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_unicycle_kin_trajCont_test__T unicycle_kin_trajCont_test_1_P;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_unicycle_kin_trajCont_test_T unicycle_kin_trajCont_test_1_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void unicycle_kin_trajCont_test_1_initialize(void);
  extern void unicycle_kin_trajCont_test_1_step(void);
  extern void unicycle_kin_trajCont_test_1_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_unicycle_kin_trajCon_T *const unicycle_kin_trajCont_test_1_M;

#ifdef __cplusplus

}
#endif

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'unicycle_kin_trajCont_test_1'
 * '<S1>'   : 'unicycle_kin_trajCont_test_1/Square trajectory'
 * '<S2>'   : 'unicycle_kin_trajCont_test_1/Trajectory publisher'
 * '<S3>'   : 'unicycle_kin_trajCont_test_1/Square trajectory/MATLAB Function'
 * '<S4>'   : 'unicycle_kin_trajCont_test_1/Trajectory publisher/Blank Message'
 * '<S5>'   : 'unicycle_kin_trajCont_test_1/Trajectory publisher/Blank Message1'
 * '<S6>'   : 'unicycle_kin_trajCont_test_1/Trajectory publisher/Publish'
 * '<S7>'   : 'unicycle_kin_trajCont_test_1/Trajectory publisher/Publish1'
 */
#endif                          /* RTW_HEADER_unicycle_kin_trajCont_test_1_h_ */
