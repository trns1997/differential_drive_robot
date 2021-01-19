/*
 * waffle_kin_sim_test.h
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

#ifndef RTW_HEADER_waffle_kin_sim_test_h_
#define RTW_HEADER_waffle_kin_sim_test_h_
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "waffle_kin_sim_test_types.h"

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
  ros_slros_internal_block_Curr_T obj; /* '<Root>/Current Time' */
  ros_slros_internal_block_Publ_T obj_j;/* '<S4>/SinkBlock' */
  boolean_T objisempty;                /* '<S4>/SinkBlock' */
  boolean_T objisempty_b;              /* '<Root>/Current Time' */
} DW_waffle_kin_sim_test_T;

/* Parameters (default storage) */
struct P_waffle_kin_sim_test_T_ {
  SL_Bus_waffle_kin_sim_test_geometry_msgs_Twist Constant_Value;/* Computed Parameter: Constant_Value
                                                                 * Referenced by: '<S3>/Constant'
                                                                 */
};

/* Real-time Model Data Structure */
struct tag_RTM_waffle_kin_sim_test_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    struct {
      uint8_T TID[2];
    } TaskCounters;
  } Timing;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_waffle_kin_sim_test_T waffle_kin_sim_test_P;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_waffle_kin_sim_test_T waffle_kin_sim_test_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void waffle_kin_sim_test_initialize(void);
  extern void waffle_kin_sim_test_step(void);
  extern void waffle_kin_sim_test_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_waffle_kin_sim_test_T *const waffle_kin_sim_test_M;

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
 * '<Root>' : 'waffle_kin_sim_test'
 * '<S1>'   : 'waffle_kin_sim_test/MATLAB Function'
 * '<S2>'   : 'waffle_kin_sim_test/cmd_vel publisher'
 * '<S3>'   : 'waffle_kin_sim_test/cmd_vel publisher/Blank Message'
 * '<S4>'   : 'waffle_kin_sim_test/cmd_vel publisher/Publish'
 */
#endif                                 /* RTW_HEADER_waffle_kin_sim_test_h_ */
