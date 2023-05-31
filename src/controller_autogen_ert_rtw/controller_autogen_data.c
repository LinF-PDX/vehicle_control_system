/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: controller_autogen_data.c
 *
 * Code generated for Simulink model 'controller_autogen'.
 *
 * Model version                  : 1.26
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun May 28 19:57:13 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "controller_autogen.h"

/* Invariant block signals (default storage) */
const ConstB_controller_autogen_T controller_autogen_ConstB = {
  4095.0F,                             /* '<S11>/Data Type Conversion' */
  0.0F,                                /* '<S11>/Data Type Conversion2' */
  4095.0F,                             /* '<S16>/Subtract' */
  4095.0F,                             /* '<S12>/Data Type Conversion' */
  0.0F,                                /* '<S12>/Data Type Conversion2' */
  4095.0F,                             /* '<S18>/Subtract' */
  4095.0F,                             /* '<S13>/Data Type Conversion' */
  0.0F,                                /* '<S13>/Data Type Conversion2' */
  4095.0F,                             /* '<S20>/Subtract' */
  18000.0F,                            /* '<S4>/Cast To Single' */
  18000.0F,                            /* '<S4>/Cast To Single3' */
  1000.0F,                             /* '<S5>/Cast To Single4' */
  1000.0F,                             /* '<S5>/Cast To Single5' */
  1000.0F,                             /* '<S5>/Cast To Single6' */
  1000.0F,                             /* '<S5>/Cast To Single7' */
  50.0F,                               /* '<S5>/Gain1' */
  50.0F                                /* '<S5>/Gain4' */
};

/* Constant parameters (default storage) */
const ConstP_controller_autogen_T controller_autogen_ConstP = {
  /* Pooled Parameter (Expression: [0 5 10 15 20 25 30 35 40 45 50 55 60 65 70 75 80 85 90 95 100])
   * Referenced by: '<S2>/AccelPedalPos1 LUT'
   */
  { 0.0F, 5.0F, 10.0F, 15.0F, 20.0F, 25.0F, 30.0F, 35.0F, 40.0F, 45.0F, 50.0F,
    55.0F, 60.0F, 65.0F, 70.0F, 75.0F, 80.0F, 85.0F, 90.0F, 95.0F, 100.0F }
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */