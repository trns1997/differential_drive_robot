/*
 * waffle_kin_sim.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "waffle_kin_sim".
 *
 * Model version              : 1.121
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Wed Feb  3 22:56:50 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_waffle_kin_sim_h_
#define RTW_HEADER_waffle_kin_sim_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "slros_initialize.h"
#include "waffle_kin_sim_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  SL_Bus_waffle_kin_sim_tf2_msgs_TFMessage tf2Msg;/* '<S5>/MATLAB Function1' */
  SL_Bus_waffle_kin_sim_nav_msgs_Odometry odomMsg;/* '<S5>/MATLAB Function' */
  SL_Bus_waffle_kin_sim_geometry_msgs_Twist In1;/* '<S17>/In1' */
  SL_Bus_waffle_kin_sim_geometry_msgs_Twist b_varargout_2;
  SL_Bus_waffle_kin_sim_geometry_msgs_Point BusAssignment1;/* '<S10>/Bus Assignment1' */
  real_T State[3];                     /* '<S3>/State' */
  real_T dstate[3];                    /* '<S3>/Waffle kinematics' */
  real_T count;                        /* '<S2>/MATLAB Function' */
  real_T diff_drive_param[2];          /* '<S1>/Waffle kinematics' */
} B_waffle_kin_sim_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  ros_slros_internal_block_Publ_T obj; /* '<S23>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_l;/* '<S22>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_i;/* '<S15>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_k;/* '<S14>/SinkBlock' */
  ros_slros_internal_block_Publ_T obj_e;/* '<S9>/SinkBlock' */
  ros_slros_internal_block_Subs_T obj_j;/* '<S16>/SourceBlock' */
  real_T UnitDelay_DSTATE;             /* '<S2>/Unit Delay' */
  boolean_T objisempty;                /* '<S23>/SinkBlock' */
  boolean_T objisempty_p;              /* '<S22>/SinkBlock' */
  boolean_T objisempty_l;              /* '<S16>/SourceBlock' */
  boolean_T objisempty_g;              /* '<S15>/SinkBlock' */
  boolean_T objisempty_d;              /* '<S14>/SinkBlock' */
  boolean_T objisempty_gs;             /* '<S9>/SinkBlock' */
} DW_waffle_kin_sim_T;

/* Continuous states (default storage) */
typedef struct {
  real_T State_CSTATE[3];              /* '<S3>/State' */
} X_waffle_kin_sim_T;

/* State derivatives (default storage) */
typedef struct {
  real_T State_CSTATE[3];              /* '<S3>/State' */
} XDot_waffle_kin_sim_T;

/* State disabled  */
typedef struct {
  boolean_T State_CSTATE[3];           /* '<S3>/State' */
} XDis_waffle_kin_sim_T;

#ifndef ODE3_INTG
#define ODE3_INTG

/* ODE3 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[3];                        /* derivatives */
} ODE3_IntgData;

#endif

/* Parameters (default storage) */
struct P_waffle_kin_sim_T_ {
  real_T d;                            /* Variable: d
                                        * Referenced by: '<Root>/d'
                                        */
  real_T r;                            /* Variable: r
                                        * Referenced by: '<Root>/r'
                                        */
  real_T Wafflekinematicmodel_state0[3];
                                  /* Mask Parameter: Wafflekinematicmodel_state0
                                   * Referenced by: '<S3>/State'
                                   */
  SL_Bus_waffle_kin_sim_tf2_msgs_TFMessage Constant_Value;/* Computed Parameter: Constant_Value
                                                           * Referenced by: '<S19>/Constant'
                                                           */
  SL_Bus_waffle_kin_sim_nav_msgs_Odometry Constant_Value_k;/* Computed Parameter: Constant_Value_k
                                                            * Referenced by: '<S18>/Constant'
                                                            */
  SL_Bus_waffle_kin_sim_geometry_msgs_Twist Out1_Y0;/* Computed Parameter: Out1_Y0
                                                     * Referenced by: '<S17>/Out1'
                                                     */
  SL_Bus_waffle_kin_sim_geometry_msgs_Twist Constant_Value_h;/* Computed Parameter: Constant_Value_h
                                                              * Referenced by: '<S16>/Constant'
                                                              */
  SL_Bus_waffle_kin_sim_geometry_msgs_Point Constant_Value_g;/* Computed Parameter: Constant_Value_g
                                                              * Referenced by: '<S12>/Constant'
                                                              */
  SL_Bus_waffle_kin_sim_geometry_msgs_Point Constant_Value_gl;/* Computed Parameter: Constant_Value_gl
                                                               * Referenced by: '<S13>/Constant'
                                                               */
  SL_Bus_waffle_kin_sim_rosgraph_msgs_Clock Constant_Value_e;/* Computed Parameter: Constant_Value_e
                                                              * Referenced by: '<S7>/Constant'
                                                              */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S2>/Unit Delay'
                                        */
  uint8_T frame_id2_Value[9];          /* Expression: uint8('base_link')
                                        * Referenced by: '<S5>/frame_id2'
                                        */
  uint8_T frame_id_Value[4];           /* Expression: uint8('odom')
                                        * Referenced by: '<S5>/frame_id'
                                        */
  uint8_T frame_id1_Value[4];          /* Expression: uint8('odom')
                                        * Referenced by: '<S5>/frame_id1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_waffle_kin_sim_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_waffle_kin_sim_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[3];
  real_T odeF[3][3];
  ODE3_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    struct {
      uint16_T TID[4];
    } TaskCounters;

    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[4];
  } Timing;
};

/* Block parameters (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern P_waffle_kin_sim_T waffle_kin_sim_P;

#ifdef __cplusplus

}
#endif

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern B_waffle_kin_sim_T waffle_kin_sim_B;

#ifdef __cplusplus

}
#endif

/* Continuous states (default storage) */
extern X_waffle_kin_sim_T waffle_kin_sim_X;

/* Block states (default storage) */
extern DW_waffle_kin_sim_T waffle_kin_sim_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void waffle_kin_sim_initialize(void);
  extern void waffle_kin_sim_step(void);
  extern void waffle_kin_sim_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_waffle_kin_sim_T *const waffle_kin_sim_M;

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
 * '<Root>' : 'waffle_kin_sim'
 * '<S1>'   : 'waffle_kin_sim/Conversion Block'
 * '<S2>'   : 'waffle_kin_sim/Time publisher'
 * '<S3>'   : 'waffle_kin_sim/Waffle kinematic model'
 * '<S4>'   : 'waffle_kin_sim/cmd_vel subscriber'
 * '<S5>'   : 'waffle_kin_sim/odom and tf publishers'
 * '<S6>'   : 'waffle_kin_sim/Conversion Block/Waffle kinematics'
 * '<S7>'   : 'waffle_kin_sim/Time publisher/Blank Message'
 * '<S8>'   : 'waffle_kin_sim/Time publisher/MATLAB Function'
 * '<S9>'   : 'waffle_kin_sim/Time publisher/Publish'
 * '<S10>'  : 'waffle_kin_sim/Waffle kinematic model/Trajectory publisher'
 * '<S11>'  : 'waffle_kin_sim/Waffle kinematic model/Waffle kinematics'
 * '<S12>'  : 'waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Blank Message'
 * '<S13>'  : 'waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Blank Message1'
 * '<S14>'  : 'waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Publish'
 * '<S15>'  : 'waffle_kin_sim/Waffle kinematic model/Trajectory publisher/Publish1'
 * '<S16>'  : 'waffle_kin_sim/cmd_vel subscriber/Subscribe'
 * '<S17>'  : 'waffle_kin_sim/cmd_vel subscriber/Subscribe/Enabled Subsystem'
 * '<S18>'  : 'waffle_kin_sim/odom and tf publishers/Blank Message'
 * '<S19>'  : 'waffle_kin_sim/odom and tf publishers/Blank Message1'
 * '<S20>'  : 'waffle_kin_sim/odom and tf publishers/MATLAB Function'
 * '<S21>'  : 'waffle_kin_sim/odom and tf publishers/MATLAB Function1'
 * '<S22>'  : 'waffle_kin_sim/odom and tf publishers/Publish'
 * '<S23>'  : 'waffle_kin_sim/odom and tf publishers/Publish1'
 */
#endif                                 /* RTW_HEADER_waffle_kin_sim_h_ */
