/*
 * TX_Transmission_types.h
 *
 * Code generation for model "TX_Transmission".
 *
 * Model version              : 1.210
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C++ source code generated on : Wed Dec  6 16:43:43 2023
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_TX_Transmission_types_h_
#define RTW_HEADER_TX_Transmission_types_h_
#include "rtwtypes.h"
#ifndef DEFINED_TYPEDEF_FOR_driveline_in_
#  define DEFINED_TYPEDEF_FOR_driveline_in_

struct driveline_in {
  real_T acc_cmd;
  real_T brake_cmd_0_1;
  real_T wheel_spd_rad_s[4];
  real_T abs_flag;
  real_T engine_trq_Nm;
  real_T gear_cmd_driver;
  boolean_T diff_prs_cmd[4];
  real_T mot_front_trq_Nm;
  real_T mot_rear_trq_Nm;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_powecu_out_
#  define DEFINED_TYPEDEF_FOR_powecu_out_

struct powecu_out {
  real_T pt_trq_cmd_Nm;
  real_T brake_pressure_0_1;
  real_T brake_pressure_Pa[4];
  real_T abs_flag[4];
  real_T throttle_01;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_TdKnmvEBt9bbFNHrBt8OwG_
#  define DEFINED_TYPEDEF_FOR_struct_TdKnmvEBt9bbFNHrBt8OwG_

struct struct_TdKnmvEBt9bbFNHrBt8OwG {
  real_T InputShaftInertia;
  real_T InputShaftDamping;
  real_T FinalDrive;
  real_T GearRatios[9];
  real_T GearNums[9];
  real_T Inertias[9];
  real_T DampingCoeffs[9];
  real_T Efficiencies[9];
  real_T ShiftTau;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_A6Yb21eKNPgaupJlKafAPB_
#  define DEFINED_TYPEDEF_FOR_struct_A6Yb21eKNPgaupJlKafAPB_

struct struct_A6Yb21eKNPgaupJlKafAPB {
  real_T FR;
  real_T FL;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_NtCe3ohFvXuRZXQoDidoXH_
#  define DEFINED_TYPEDEF_FOR_struct_NtCe3ohFvXuRZXQoDidoXH_

struct struct_NtCe3ohFvXuRZXQoDidoXH {
  real_T RR;
  real_T RL;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_struct_WPo6c0btEjgdkiBqVilJ2B_
#  define DEFINED_TYPEDEF_FOR_struct_WPo6c0btEjgdkiBqVilJ2B_

struct struct_WPo6c0btEjgdkiBqVilJ2B {
  real_T Mass;
  struct_A6Yb21eKNPgaupJlKafAPB StaticNormalFrontLoad;
  struct_NtCe3ohFvXuRZXQoDidoXH StaticNormalRearLoad;
  real_T WheelBase;
  real_T FrontAxlePositionfromCG;
  real_T RearAxlePositionfromCG;
  real_T HeightCG;
  real_T FrontalArea;
  real_T DragCoefficient;
  real_T NumberOfWheelsPerAxle;
  real_T PitchMomentInertia;
  real_T RollMomentInertia;
  real_T YawMomentInertia;
  real_T SteeringRatio;
  real_T SprungMass;
  real_T InitialLongPosition;
  real_T InitialLatPosition;
  real_T InitialVertPosition;
  real_T InitialRollAngle;
  real_T InitialPitchAngle;
  real_T InitialYawAngle;
  real_T InitialLongVel;
  real_T InitialLatVel;
  real_T InitialVertVel;
  real_T InitialRollRate;
  real_T InitialPitchRate;
  real_T InitialYawRate;
  real_T UnsprungMassRearAxle;
  real_T UnsprungMassFrontAxle;
  real_T TrackWidthFront;
  real_T TrackWidthRear;
};

#endif

/* Parameters (default storage) */
typedef struct P_TX_Transmission_T_ P_TX_Transmission_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_TX_Transmission_T RT_MODEL_TX_Transmission_T;

#endif /* RTW_HEADER_TX_Transmission_types_h_ */