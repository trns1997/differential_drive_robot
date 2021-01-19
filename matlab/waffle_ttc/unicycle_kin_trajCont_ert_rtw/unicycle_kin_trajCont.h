/*
 * unicycle_kin_trajCont.h
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

#ifndef RTW_HEADER_unicycle_kin_trajCont_h_
#define RTW_HEADER_unicycle_kin_trajCont_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "unicycle_kin_trajCont_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S10>/Enabled Subsystem' */
typedef struct {
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point In1;/* '<S12>/In1' */
} B_EnabledSubsystem_unicycle_k_T;

/* Block signals (default storage) */
typedef struct {
  SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry In1;/* '<S16>/In1' */
  SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry b_varargout_2;
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist BusAssignment;/* '<S1>/Bus Assignment' */
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point b_varargout_2_m;
  B_EnabledSubsystem_unicycle_k_T EnabledSubsystem_e;/* '<S11>/Enabled Subsystem' */
  B_EnabledSubsystem_unicycle_k_T EnabledSubsystem;/* '<S10>/Enabled Subsystem' */
} B_unicycle_kin_trajCont_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ros_slros_internal_block_Publ_T obj; /* '<S6>/SinkBlock' */
  ros_slros_internal_block_Subs_T obj_p;/* '<S15>/SourceBlock' */
  ros_slros_internal_block_Subs_T obj_o;/* '<S11>/SourceBlock' */
  ros_slros_internal_block_Subs_T obj_k;/* '<S10>/SourceBlock' */
  boolean_T objisempty;                /* '<S15>/SourceBlock' */
  boolean_T objisempty_f;              /* '<S11>/SourceBlock' */
  boolean_T objisempty_e;              /* '<S10>/SourceBlock' */
  boolean_T objisempty_k;              /* '<S6>/SinkBlock' */
} DW_unicycle_kin_trajCont_T;

/* Parameters for system: '<S10>/Enabled Subsystem' */
struct P_EnabledSubsystem_unicycle_k_T_ {
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point Out1_Y0;/* Computed Parameter: Out1_Y0
                                                            * Referenced by: '<S12>/Out1'
                                                            */
};

/* Parameters (default storage) */
struct P_unicycle_kin_trajCont_T_ {
  real_T Pvelocityfeedforwardbasedonfeed;
                              /* Mask Parameter: Pvelocityfeedforwardbasedonfeed
                               * Referenced by: '<S2>/Constant'
                               */
  real_T Pvelocityfeedforwardbasedonfe_m;
                              /* Mask Parameter: Pvelocityfeedforwardbasedonfe_m
                               * Referenced by: '<S2>/Constant1'
                               */
  SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry Out1_Y0;/* Computed Parameter: Out1_Y0
                                                          * Referenced by: '<S16>/Out1'
                                                          */
  SL_Bus_unicycle_kin_trajCont_nav_msgs_Odometry Constant_Value;/* Computed Parameter: Constant_Value
                                                                 * Referenced by: '<S15>/Constant'
                                                                 */
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Twist Constant_Value_a;/* Computed Parameter: Constant_Value_a
                                                                     * Referenced by: '<S5>/Constant'
                                                                     */
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point Constant_Value_p;/* Computed Parameter: Constant_Value_p
                                                                     * Referenced by: '<S10>/Constant'
                                                                     */
  SL_Bus_unicycle_kin_trajCont_geometry_msgs_Point Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                                     * Referenced by: '<S11>/Constant'
                                                                     */
  P_EnabledSubsystem_unicycle_k_T EnabledSubsystem_e;/* '<S11>/Enabled Subsystem' */
  P_EnabledSubsystem_unicycle_k_T EnabledSubsystem;/* '<S10>/Enabled Subsystem' */
};

/* Real-time Model Data Structure */
struct tag_RTM_unicycle_kin_trajCont_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_unicycle_kin_trajCont_T unicycle_kin_trajCont_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern B_unicycle_kin_trajCont_T unicycle_kin_trajCont_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern DW_unicycle_kin_trajCont_T unicycle_kin_trajCont_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void unicycle_kin_trajCont_initialize(void);
  extern void unicycle_kin_trajCont_step(void);
  extern void unicycle_kin_trajCont_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_unicycle_kin_trajCon_T *const unicycle_kin_trajCont_M;

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
 * '<Root>' : 'unicycle_kin_trajCont'
 * '<S1>'   : 'unicycle_kin_trajCont/Command publisher'
 * '<S2>'   : 'unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization'
 * '<S3>'   : 'unicycle_kin_trajCont/Planned trajectory subscriber'
 * '<S4>'   : 'unicycle_kin_trajCont/Pose subscriber'
 * '<S5>'   : 'unicycle_kin_trajCont/Command publisher/Blank Message'
 * '<S6>'   : 'unicycle_kin_trajCont/Command publisher/Publish'
 * '<S7>'   : 'unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/P+velocity feedforward'
 * '<S8>'   : 'unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/Unicycle kinematic feedback linearization'
 * '<S9>'   : 'unicycle_kin_trajCont/P+velocity feedforward based on feedback linearization/Unicycle kinematic feedback linearization/Unicycle kinematic feedback linearization'
 * '<S10>'  : 'unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe'
 * '<S11>'  : 'unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe1'
 * '<S12>'  : 'unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe/Enabled Subsystem'
 * '<S13>'  : 'unicycle_kin_trajCont/Planned trajectory subscriber/Subscribe1/Enabled Subsystem'
 * '<S14>'  : 'unicycle_kin_trajCont/Pose subscriber/Conversion'
 * '<S15>'  : 'unicycle_kin_trajCont/Pose subscriber/Subscribe'
 * '<S16>'  : 'unicycle_kin_trajCont/Pose subscriber/Subscribe/Enabled Subsystem'
 */
#endif                                 /* RTW_HEADER_unicycle_kin_trajCont_h_ */
