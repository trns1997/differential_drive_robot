/*
 * waffle_kin_sim.cpp
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "waffle_kin_sim".
 *
 * Model version              : 1.121
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C++ source code generated on : Fri Jan  8 13:52:20 2021
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "waffle_kin_sim.h"
#include "waffle_kin_sim_private.h"

/* Block signals (default storage) */
B_waffle_kin_sim_T waffle_kin_sim_B;

/* Continuous states */
X_waffle_kin_sim_T waffle_kin_sim_X;

/* Block states (default storage) */
DW_waffle_kin_sim_T waffle_kin_sim_DW;

/* Real-time model */
RT_MODEL_waffle_kin_sim_T waffle_kin_sim_M_ = RT_MODEL_waffle_kin_sim_T();
RT_MODEL_waffle_kin_sim_T *const waffle_kin_sim_M = &waffle_kin_sim_M_;

/* Forward declaration for local functions */
static void matlabCodegenHandle_matlabC_hcr(ros_slros_internal_block_Subs_T *obj);
static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj);
static void rate_scheduler(void);

/*
 *   This function updates active task flag for each subrate.
 * The function is called at model base rate, hence the
 * generated code self-manages all its subrates.
 */
static void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (waffle_kin_sim_M->Timing.TaskCounters.TID[2])++;
  if ((waffle_kin_sim_M->Timing.TaskCounters.TID[2]) > 99) {/* Sample time: [0.01s, 0.0s] */
    waffle_kin_sim_M->Timing.TaskCounters.TID[2] = 0;
  }

  (waffle_kin_sim_M->Timing.TaskCounters.TID[3])++;
  if ((waffle_kin_sim_M->Timing.TaskCounters.TID[3]) > 999) {/* Sample time: [0.1s, 0.0s] */
    waffle_kin_sim_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/*
 * This function updates continuous states using the ODE3 fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static const real_T rt_ODE3_A[3] = {
    1.0/2.0, 3.0/4.0, 1.0
  };

  static const real_T rt_ODE3_B[3][3] = {
    { 1.0/2.0, 0.0, 0.0 },

    { 0.0, 3.0/4.0, 0.0 },

    { 2.0/9.0, 1.0/3.0, 4.0/9.0 }
  };

  time_T t = rtsiGetT(si);
  time_T tnew = rtsiGetSolverStopTime(si);
  time_T h = rtsiGetStepSize(si);
  real_T *x = rtsiGetContStates(si);
  ODE3_IntgData *id = static_cast<ODE3_IntgData *>(rtsiGetSolverData(si));
  real_T *y = id->y;
  real_T *f0 = id->f[0];
  real_T *f1 = id->f[1];
  real_T *f2 = id->f[2];
  real_T hB[3];
  int_T i;
  int_T nXc = 3;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(y, x,
                static_cast<uint_T>(nXc)*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  waffle_kin_sim_derivatives();

  /* f(:,2) = feval(odefile, t + hA(1), y + f*hB(:,1), args(:)(*)); */
  hB[0] = h * rt_ODE3_B[0][0];
  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[0]);
  rtsiSetdX(si, f1);
  waffle_kin_sim_step();
  waffle_kin_sim_derivatives();

  /* f(:,3) = feval(odefile, t + hA(2), y + f*hB(:,2), args(:)(*)); */
  for (i = 0; i <= 1; i++) {
    hB[i] = h * rt_ODE3_B[1][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1]);
  }

  rtsiSetT(si, t + h*rt_ODE3_A[1]);
  rtsiSetdX(si, f2);
  waffle_kin_sim_step();
  waffle_kin_sim_derivatives();

  /* tnew = t + hA(3);
     ynew = y + f*hB(:,3); */
  for (i = 0; i <= 2; i++) {
    hB[i] = h * rt_ODE3_B[2][i];
  }

  for (i = 0; i < nXc; i++) {
    x[i] = y[i] + (f0[i]*hB[0] + f1[i]*hB[1] + f2[i]*hB[2]);
  }

  rtsiSetT(si, tnew);
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void matlabCodegenHandle_matlabC_hcr(ros_slros_internal_block_Subs_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

static void matlabCodegenHandle_matlabCodeg(ros_slros_internal_block_Publ_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void waffle_kin_sim_step(void)
{
  real_T v;
  boolean_T b_varargout_1;
  SL_Bus_waffle_kin_sim_rosgraph_msgs_Clock rtb_timeMsg;
  real_T rtb_DigitalClock;
  int32_T i;
  real_T c_tmp;
  real_T s_tmp;
  if (rtmIsMajorTimeStep(waffle_kin_sim_M)) {
    /* set solver stop time */
    if (!(waffle_kin_sim_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&waffle_kin_sim_M->solverInfo,
                            ((waffle_kin_sim_M->Timing.clockTickH0 + 1) *
        waffle_kin_sim_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&waffle_kin_sim_M->solverInfo,
                            ((waffle_kin_sim_M->Timing.clockTick0 + 1) *
        waffle_kin_sim_M->Timing.stepSize0 +
        waffle_kin_sim_M->Timing.clockTickH0 *
        waffle_kin_sim_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(waffle_kin_sim_M)) {
    waffle_kin_sim_M->Timing.t[0] = rtsiGetT(&waffle_kin_sim_M->solverInfo);
  }

  /* Integrator: '<S3>/State' */
  waffle_kin_sim_B.State[0] = waffle_kin_sim_X.State_CSTATE[0];
  waffle_kin_sim_B.State[1] = waffle_kin_sim_X.State_CSTATE[1];
  waffle_kin_sim_B.State[2] = waffle_kin_sim_X.State_CSTATE[2];
  if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
      waffle_kin_sim_M->Timing.TaskCounters.TID[1] == 0) {
    /* Outputs for Atomic SubSystem: '<S4>/Subscribe' */
    /* MATLABSystem: '<S16>/SourceBlock' incorporates:
     *  Inport: '<S17>/In1'
     */
    b_varargout_1 = Sub_waffle_kin_sim_17.getLatestMessage
      (&waffle_kin_sim_B.b_varargout_2);

    /* Outputs for Enabled SubSystem: '<S16>/Enabled Subsystem' incorporates:
     *  EnablePort: '<S17>/Enable'
     */
    if (b_varargout_1) {
      waffle_kin_sim_B.In1 = waffle_kin_sim_B.b_varargout_2;
    }

    /* End of MATLABSystem: '<S16>/SourceBlock' */
    /* End of Outputs for SubSystem: '<S16>/Enabled Subsystem' */
    /* End of Outputs for SubSystem: '<S4>/Subscribe' */

    /* MATLAB Function: '<S1>/Waffle kinematics' incorporates:
     *  Constant: '<Root>/d'
     *  Constant: '<Root>/r'
     */
    v = 2.0 * waffle_kin_sim_B.In1.Linear.X;
    rtb_DigitalClock = waffle_kin_sim_B.In1.Angular.Z * waffle_kin_sim_P.d;
    waffle_kin_sim_B.diff_drive_param[0] = (v + rtb_DigitalClock) / (2.0 *
      waffle_kin_sim_P.r);
    waffle_kin_sim_B.diff_drive_param[1] = (v - rtb_DigitalClock) / (2.0 *
      waffle_kin_sim_P.r);
  }

  /* MATLAB Function: '<S3>/Waffle kinematics' incorporates:
   *  Constant: '<Root>/d'
   *  Constant: '<Root>/r'
   */
  v = (waffle_kin_sim_B.diff_drive_param[0] + waffle_kin_sim_B.diff_drive_param
       [1]) * waffle_kin_sim_P.r / 2.0;
  waffle_kin_sim_B.dstate[0] = v * cos(waffle_kin_sim_B.State[2]);
  waffle_kin_sim_B.dstate[1] = v * sin(waffle_kin_sim_B.State[2]);
  waffle_kin_sim_B.dstate[2] = (waffle_kin_sim_B.diff_drive_param[0] -
    waffle_kin_sim_B.diff_drive_param[1]) * waffle_kin_sim_P.r /
    waffle_kin_sim_P.d;
  if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
      waffle_kin_sim_M->Timing.TaskCounters.TID[3] == 0) {
    /* BusAssignment: '<S10>/Bus Assignment1' incorporates:
     *  Constant: '<S13>/Constant'
     */
    waffle_kin_sim_B.BusAssignment1 = waffle_kin_sim_P.Constant_Value_gl;
    waffle_kin_sim_B.BusAssignment1.X = waffle_kin_sim_B.dstate[0];
    waffle_kin_sim_B.BusAssignment1.Y = waffle_kin_sim_B.dstate[1];

    /* Outputs for Atomic SubSystem: '<S10>/Publish1' */
    /* MATLABSystem: '<S15>/SinkBlock' */
    Pub_waffle_kin_sim_126.publish(&waffle_kin_sim_B.BusAssignment1);

    /* End of Outputs for SubSystem: '<S10>/Publish1' */
  }

  if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
      waffle_kin_sim_M->Timing.TaskCounters.TID[2] == 0) {
    /* DigitalClock: '<S5>/Digital Clock' */
    rtb_DigitalClock = (((waffle_kin_sim_M->Timing.clockTick2+
                          waffle_kin_sim_M->Timing.clockTickH2* 4294967296.0)) *
                        0.01);

    /* MATLAB Function: '<S5>/MATLAB Function' incorporates:
     *  Constant: '<S18>/Constant'
     *  Constant: '<S5>/frame_id'
     *  MATLAB Function: '<S5>/MATLAB Function1'
     */
    waffle_kin_sim_B.odomMsg = waffle_kin_sim_P.Constant_Value_k;
    if (rtb_DigitalClock < 0.0) {
      v = ceil(rtb_DigitalClock);
    } else {
      v = floor(rtb_DigitalClock);
    }

    waffle_kin_sim_B.odomMsg.Header.Stamp.Sec = v;
    rtb_DigitalClock = (rtb_DigitalClock - v) * 1.0E+9;
    if (rtb_DigitalClock < 0.0) {
      rtb_DigitalClock = ceil(rtb_DigitalClock);
    } else {
      rtb_DigitalClock = floor(rtb_DigitalClock);
    }

    waffle_kin_sim_B.odomMsg.Header.Stamp.Nsec = rtb_DigitalClock;
    waffle_kin_sim_B.odomMsg.Header.FrameId[0] =
      waffle_kin_sim_P.frame_id_Value[0];
    waffle_kin_sim_B.odomMsg.Header.FrameId[1] =
      waffle_kin_sim_P.frame_id_Value[1];
    waffle_kin_sim_B.odomMsg.Header.FrameId[2] =
      waffle_kin_sim_P.frame_id_Value[2];
    waffle_kin_sim_B.odomMsg.Header.FrameId[3] =
      waffle_kin_sim_P.frame_id_Value[3];
    waffle_kin_sim_B.odomMsg.Header.FrameId_SL_Info.CurrentLength = 4U;
    waffle_kin_sim_B.odomMsg.Pose.Pose.Position.X = waffle_kin_sim_B.State[0];
    waffle_kin_sim_B.odomMsg.Pose.Pose.Position.Y = waffle_kin_sim_B.State[1];
    waffle_kin_sim_B.odomMsg.Pose.Pose.Position.Z = 0.0;
    c_tmp = cos(waffle_kin_sim_B.State[2] / 2.0);
    s_tmp = sin(waffle_kin_sim_B.State[2] / 2.0);
    waffle_kin_sim_B.odomMsg.Pose.Pose.Orientation.X = 0.0 * s_tmp + c_tmp;
    waffle_kin_sim_B.odomMsg.Pose.Pose.Orientation.Y = s_tmp - 0.0 * c_tmp;
    waffle_kin_sim_B.odomMsg.Pose.Pose.Orientation.Z = 0.0 * c_tmp + 0.0 * s_tmp;
    waffle_kin_sim_B.odomMsg.Pose.Pose.Orientation.W = 0.0 * c_tmp - 0.0 * s_tmp;

    /* End of MATLAB Function: '<S5>/MATLAB Function' */

    /* Outputs for Atomic SubSystem: '<S5>/Publish' */
    /* MATLABSystem: '<S22>/SinkBlock' */
    Pub_waffle_kin_sim_72.publish(&waffle_kin_sim_B.odomMsg);

    /* End of Outputs for SubSystem: '<S5>/Publish' */

    /* MATLAB Function: '<S5>/MATLAB Function1' incorporates:
     *  Constant: '<S19>/Constant'
     *  Constant: '<S5>/frame_id1'
     *  Constant: '<S5>/frame_id2'
     */
    waffle_kin_sim_B.tf2Msg = waffle_kin_sim_P.Constant_Value;
    waffle_kin_sim_B.tf2Msg.Transforms_SL_Info.CurrentLength = 1U;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.Stamp.Sec = v;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.Stamp.Nsec = rtb_DigitalClock;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.FrameId[0] =
      waffle_kin_sim_P.frame_id1_Value[0];
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.FrameId[1] =
      waffle_kin_sim_P.frame_id1_Value[1];
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.FrameId[2] =
      waffle_kin_sim_P.frame_id1_Value[2];
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.FrameId[3] =
      waffle_kin_sim_P.frame_id1_Value[3];
    waffle_kin_sim_B.tf2Msg.Transforms[0].Header.FrameId_SL_Info.CurrentLength =
      4U;
    for (i = 0; i < 9; i++) {
      waffle_kin_sim_B.tf2Msg.Transforms[0].ChildFrameId[i] =
        waffle_kin_sim_P.frame_id2_Value[i];
    }

    waffle_kin_sim_B.tf2Msg.Transforms[0].ChildFrameId_SL_Info.CurrentLength =
      9U;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Translation.X =
      waffle_kin_sim_B.State[0];
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Translation.Y =
      waffle_kin_sim_B.State[1];
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Translation.Z = 0.0;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Rotation.X = 0.0 * s_tmp +
      c_tmp;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Rotation.Y = s_tmp - 0.0 *
      c_tmp;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Rotation.Z = 0.0 * c_tmp +
      0.0 * s_tmp;
    waffle_kin_sim_B.tf2Msg.Transforms[0].Transform.Rotation.W = 0.0 * c_tmp -
      0.0 * s_tmp;

    /* Outputs for Atomic SubSystem: '<S5>/Publish1' */
    /* MATLABSystem: '<S23>/SinkBlock' */
    Pub_waffle_kin_sim_85.publish(&waffle_kin_sim_B.tf2Msg);

    /* End of Outputs for SubSystem: '<S5>/Publish1' */
  }

  if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
      waffle_kin_sim_M->Timing.TaskCounters.TID[3] == 0) {
    /* BusAssignment: '<S10>/Bus Assignment' incorporates:
     *  Constant: '<S12>/Constant'
     */
    waffle_kin_sim_B.BusAssignment1 = waffle_kin_sim_P.Constant_Value_g;
    waffle_kin_sim_B.BusAssignment1.X = waffle_kin_sim_B.State[0];
    waffle_kin_sim_B.BusAssignment1.Y = waffle_kin_sim_B.State[1];

    /* Outputs for Atomic SubSystem: '<S10>/Publish' */
    /* MATLABSystem: '<S14>/SinkBlock' */
    Pub_waffle_kin_sim_125.publish(&waffle_kin_sim_B.BusAssignment1);

    /* End of Outputs for SubSystem: '<S10>/Publish' */
  }

  if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
      waffle_kin_sim_M->Timing.TaskCounters.TID[1] == 0) {
    /* MATLAB Function: '<S2>/MATLAB Function' */
    v = waffle_kin_sim_DW.UnitDelay_DSTATE * 100000.0;
    rtb_timeMsg.Clock_.Sec = rt_roundd_snf(v * 1.0E-9);
    rtb_timeMsg.Clock_.Nsec = rt_roundd_snf(v - rt_roundd_snf(v));
    waffle_kin_sim_B.count = waffle_kin_sim_DW.UnitDelay_DSTATE + 1.0;

    /* Outputs for Atomic SubSystem: '<S2>/Publish' */
    /* MATLABSystem: '<S9>/SinkBlock' */
    Pub_waffle_kin_sim_34.publish(&rtb_timeMsg);

    /* End of Outputs for SubSystem: '<S2>/Publish' */
  }

  if (rtmIsMajorTimeStep(waffle_kin_sim_M)) {
    if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
        waffle_kin_sim_M->Timing.TaskCounters.TID[1] == 0) {
      /* Update for UnitDelay: '<S2>/Unit Delay' */
      waffle_kin_sim_DW.UnitDelay_DSTATE = waffle_kin_sim_B.count;
    }
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(waffle_kin_sim_M)) {
    rt_ertODEUpdateContinuousStates(&waffle_kin_sim_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++waffle_kin_sim_M->Timing.clockTick0)) {
      ++waffle_kin_sim_M->Timing.clockTickH0;
    }

    waffle_kin_sim_M->Timing.t[0] = rtsiGetSolverStopTime
      (&waffle_kin_sim_M->solverInfo);

    {
      /* Update absolute timer for sample time: [0.0001s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.0001, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      waffle_kin_sim_M->Timing.clockTick1++;
      if (!waffle_kin_sim_M->Timing.clockTick1) {
        waffle_kin_sim_M->Timing.clockTickH1++;
      }
    }

    if (rtmIsMajorTimeStep(waffle_kin_sim_M) &&
        waffle_kin_sim_M->Timing.TaskCounters.TID[2] == 0) {
      /* Update absolute timer for sample time: [0.01s, 0.0s] */
      /* The "clockTick2" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 0.01, which is the step size
       * of the task. Size of "clockTick2" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick2 and the high bits
       * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
       */
      waffle_kin_sim_M->Timing.clockTick2++;
      if (!waffle_kin_sim_M->Timing.clockTick2) {
        waffle_kin_sim_M->Timing.clockTickH2++;
      }
    }

    rate_scheduler();
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void waffle_kin_sim_derivatives(void)
{
  XDot_waffle_kin_sim_T *_rtXdot;
  _rtXdot = ((XDot_waffle_kin_sim_T *) waffle_kin_sim_M->derivs);

  /* Derivatives for Integrator: '<S3>/State' */
  _rtXdot->State_CSTATE[0] = waffle_kin_sim_B.dstate[0];
  _rtXdot->State_CSTATE[1] = waffle_kin_sim_B.dstate[1];
  _rtXdot->State_CSTATE[2] = waffle_kin_sim_B.dstate[2];
}

/* Model initialize function */
void waffle_kin_sim_initialize(void)
{
  /* Registration code */
  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&waffle_kin_sim_M->solverInfo,
                          &waffle_kin_sim_M->Timing.simTimeStep);
    rtsiSetTPtr(&waffle_kin_sim_M->solverInfo, &rtmGetTPtr(waffle_kin_sim_M));
    rtsiSetStepSizePtr(&waffle_kin_sim_M->solverInfo,
                       &waffle_kin_sim_M->Timing.stepSize0);
    rtsiSetdXPtr(&waffle_kin_sim_M->solverInfo, &waffle_kin_sim_M->derivs);
    rtsiSetContStatesPtr(&waffle_kin_sim_M->solverInfo, (real_T **)
                         &waffle_kin_sim_M->contStates);
    rtsiSetNumContStatesPtr(&waffle_kin_sim_M->solverInfo,
      &waffle_kin_sim_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&waffle_kin_sim_M->solverInfo,
      &waffle_kin_sim_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&waffle_kin_sim_M->solverInfo,
      &waffle_kin_sim_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&waffle_kin_sim_M->solverInfo,
      &waffle_kin_sim_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&waffle_kin_sim_M->solverInfo, (&rtmGetErrorStatus
      (waffle_kin_sim_M)));
    rtsiSetRTModelPtr(&waffle_kin_sim_M->solverInfo, waffle_kin_sim_M);
  }

  rtsiSetSimTimeStep(&waffle_kin_sim_M->solverInfo, MAJOR_TIME_STEP);
  waffle_kin_sim_M->intgData.y = waffle_kin_sim_M->odeY;
  waffle_kin_sim_M->intgData.f[0] = waffle_kin_sim_M->odeF[0];
  waffle_kin_sim_M->intgData.f[1] = waffle_kin_sim_M->odeF[1];
  waffle_kin_sim_M->intgData.f[2] = waffle_kin_sim_M->odeF[2];
  waffle_kin_sim_M->contStates = ((X_waffle_kin_sim_T *) &waffle_kin_sim_X);
  rtsiSetSolverData(&waffle_kin_sim_M->solverInfo, static_cast<void *>
                    (&waffle_kin_sim_M->intgData));
  rtsiSetSolverName(&waffle_kin_sim_M->solverInfo,"ode3");
  rtmSetTPtr(waffle_kin_sim_M, &waffle_kin_sim_M->Timing.tArray[0]);
  waffle_kin_sim_M->Timing.stepSize0 = 0.0001;

  /* block I/O */
  (void) memset((static_cast<void *>(&waffle_kin_sim_B)), 0,
                sizeof(B_waffle_kin_sim_T));

  /* states (continuous) */
  {
    (void) memset(static_cast<void *>(&waffle_kin_sim_X), 0,
                  sizeof(X_waffle_kin_sim_T));
  }

  /* states (dwork) */
  (void) memset(static_cast<void *>(&waffle_kin_sim_DW), 0,
                sizeof(DW_waffle_kin_sim_T));

  {
    char_T tmp[9];
    char_T tmp_0[17];
    char_T tmp_1[6];
    char_T tmp_2[4];
    char_T tmp_3[7];
    int32_T i;
    static const char_T tmp_4[8] = { '/', 'c', 'm', 'd', '_', 'v', 'e', 'l' };

    static const char_T tmp_5[16] = { '/', 'a', 'c', 't', 'u', 'a', 'l', '_',
      'v', 'e', 'l', 'o', 'c', 'i', 't', 'y' };

    static const char_T tmp_6[5] = { '/', 'o', 'd', 'o', 'm' };

    static const char_T tmp_7[16] = { '/', 'a', 'c', 't', 'u', 'a', 'l', '_',
      'p', 'o', 's', 'i', 't', 'i', 'o', 'n' };

    static const char_T tmp_8[6] = { '/', 'c', 'l', 'o', 'c', 'k' };

    /* Start for Atomic SubSystem: '<S4>/Subscribe' */
    /* Start for MATLABSystem: '<S16>/SourceBlock' */
    waffle_kin_sim_DW.obj_j.matlabCodegenIsDeleted = false;
    waffle_kin_sim_DW.objisempty_l = true;
    waffle_kin_sim_DW.obj_j.isInitialized = 1;
    for (i = 0; i < 8; i++) {
      tmp[i] = tmp_4[i];
    }

    tmp[8] = '\x00';
    Sub_waffle_kin_sim_17.createSubscriber(tmp, 1);
    waffle_kin_sim_DW.obj_j.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S16>/SourceBlock' */
    /* End of Start for SubSystem: '<S4>/Subscribe' */

    /* Start for Atomic SubSystem: '<S10>/Publish1' */
    /* Start for MATLABSystem: '<S15>/SinkBlock' */
    waffle_kin_sim_DW.obj_i.matlabCodegenIsDeleted = false;
    waffle_kin_sim_DW.objisempty_g = true;
    waffle_kin_sim_DW.obj_i.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_0[i] = tmp_5[i];
    }

    tmp_0[16] = '\x00';
    Pub_waffle_kin_sim_126.createPublisher(tmp_0, 1);
    waffle_kin_sim_DW.obj_i.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S15>/SinkBlock' */
    /* End of Start for SubSystem: '<S10>/Publish1' */

    /* Start for Atomic SubSystem: '<S5>/Publish' */
    /* Start for MATLABSystem: '<S22>/SinkBlock' */
    waffle_kin_sim_DW.obj_l.matlabCodegenIsDeleted = false;
    waffle_kin_sim_DW.objisempty_p = true;
    waffle_kin_sim_DW.obj_l.isInitialized = 1;
    for (i = 0; i < 5; i++) {
      tmp_1[i] = tmp_6[i];
    }

    tmp_1[5] = '\x00';
    Pub_waffle_kin_sim_72.createPublisher(tmp_1, 1);
    waffle_kin_sim_DW.obj_l.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S22>/SinkBlock' */
    /* End of Start for SubSystem: '<S5>/Publish' */

    /* Start for Atomic SubSystem: '<S5>/Publish1' */
    /* Start for MATLABSystem: '<S23>/SinkBlock' */
    waffle_kin_sim_DW.obj.matlabCodegenIsDeleted = false;
    waffle_kin_sim_DW.objisempty = true;
    waffle_kin_sim_DW.obj.isInitialized = 1;
    tmp_2[0] = '/';
    tmp_2[1] = 't';
    tmp_2[2] = 'f';
    tmp_2[3] = '\x00';
    Pub_waffle_kin_sim_85.createPublisher(tmp_2, 1);
    waffle_kin_sim_DW.obj.isSetupComplete = true;

    /* End of Start for SubSystem: '<S5>/Publish1' */

    /* Start for Atomic SubSystem: '<S10>/Publish' */
    /* Start for MATLABSystem: '<S14>/SinkBlock' */
    waffle_kin_sim_DW.obj_k.matlabCodegenIsDeleted = false;
    waffle_kin_sim_DW.objisempty_d = true;
    waffle_kin_sim_DW.obj_k.isInitialized = 1;
    for (i = 0; i < 16; i++) {
      tmp_0[i] = tmp_7[i];
    }

    tmp_0[16] = '\x00';
    Pub_waffle_kin_sim_125.createPublisher(tmp_0, 1);
    waffle_kin_sim_DW.obj_k.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S14>/SinkBlock' */
    /* End of Start for SubSystem: '<S10>/Publish' */

    /* Start for Atomic SubSystem: '<S2>/Publish' */
    /* Start for MATLABSystem: '<S9>/SinkBlock' */
    waffle_kin_sim_DW.obj_e.matlabCodegenIsDeleted = false;
    waffle_kin_sim_DW.objisempty_gs = true;
    waffle_kin_sim_DW.obj_e.isInitialized = 1;
    for (i = 0; i < 6; i++) {
      tmp_3[i] = tmp_8[i];
    }

    tmp_3[6] = '\x00';
    Pub_waffle_kin_sim_34.createPublisher(tmp_3, 1);
    waffle_kin_sim_DW.obj_e.isSetupComplete = true;

    /* End of Start for MATLABSystem: '<S9>/SinkBlock' */
    /* End of Start for SubSystem: '<S2>/Publish' */
  }

  /* InitializeConditions for Integrator: '<S3>/State' */
  waffle_kin_sim_X.State_CSTATE[0] =
    waffle_kin_sim_P.Wafflekinematicmodel_state0[0];
  waffle_kin_sim_X.State_CSTATE[1] =
    waffle_kin_sim_P.Wafflekinematicmodel_state0[1];
  waffle_kin_sim_X.State_CSTATE[2] =
    waffle_kin_sim_P.Wafflekinematicmodel_state0[2];

  /* InitializeConditions for UnitDelay: '<S2>/Unit Delay' */
  waffle_kin_sim_DW.UnitDelay_DSTATE =
    waffle_kin_sim_P.UnitDelay_InitialCondition;

  /* SystemInitialize for Atomic SubSystem: '<S4>/Subscribe' */
  /* SystemInitialize for Enabled SubSystem: '<S16>/Enabled Subsystem' */
  /* SystemInitialize for Outport: '<S17>/Out1' */
  waffle_kin_sim_B.In1 = waffle_kin_sim_P.Out1_Y0;

  /* End of SystemInitialize for SubSystem: '<S16>/Enabled Subsystem' */
  /* End of SystemInitialize for SubSystem: '<S4>/Subscribe' */
}

/* Model terminate function */
void waffle_kin_sim_terminate(void)
{
  /* Terminate for Atomic SubSystem: '<S4>/Subscribe' */
  /* Terminate for MATLABSystem: '<S16>/SourceBlock' */
  matlabCodegenHandle_matlabC_hcr(&waffle_kin_sim_DW.obj_j);

  /* End of Terminate for SubSystem: '<S4>/Subscribe' */

  /* Terminate for Atomic SubSystem: '<S10>/Publish1' */
  /* Terminate for MATLABSystem: '<S15>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&waffle_kin_sim_DW.obj_i);

  /* End of Terminate for SubSystem: '<S10>/Publish1' */

  /* Terminate for Atomic SubSystem: '<S5>/Publish' */
  /* Terminate for MATLABSystem: '<S22>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&waffle_kin_sim_DW.obj_l);

  /* End of Terminate for SubSystem: '<S5>/Publish' */

  /* Terminate for Atomic SubSystem: '<S5>/Publish1' */
  /* Terminate for MATLABSystem: '<S23>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&waffle_kin_sim_DW.obj);

  /* End of Terminate for SubSystem: '<S5>/Publish1' */

  /* Terminate for Atomic SubSystem: '<S10>/Publish' */
  /* Terminate for MATLABSystem: '<S14>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&waffle_kin_sim_DW.obj_k);

  /* End of Terminate for SubSystem: '<S10>/Publish' */

  /* Terminate for Atomic SubSystem: '<S2>/Publish' */
  /* Terminate for MATLABSystem: '<S9>/SinkBlock' */
  matlabCodegenHandle_matlabCodeg(&waffle_kin_sim_DW.obj_e);

  /* End of Terminate for SubSystem: '<S2>/Publish' */
}
