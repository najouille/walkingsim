// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef POWERIKRUNTIME_RigUnit_PowerIK_generated_h
#error "RigUnit_PowerIK.generated.h already included, missing '#pragma once' in RigUnit_PowerIK.h"
#endif
#define POWERIKRUNTIME_RigUnit_PowerIK_generated_h


#define FRigUnit_PowerIK_Execute() \
	void FRigUnit_PowerIK::StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& CharacterRoot, \
		const float RootRotationMultiplier, \
		const TArrayView<const FPowerIKEffector>& Effectors, \
		const TArrayView<const FPowerIKBoneBendDirection>& BendDirections, \
		const TArrayView<const FPowerIKExcludedBone>& ExcludedBones, \
		const TArrayView<const FPowerIKBoneLimit>& JointLimits, \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint, \
		const FPowerIKBodyInertia& Inertia, \
		const int32 MaxSquashIterations, \
		const int32 MaxStretchIterations, \
		const int32 MaxFinalIterations, \
		const bool AllowBoneTranslation, \
		const float SolverAlpha, \
		FPowerIKCore& Core, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	)

#define FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics; \
	POWERIKRUNTIME_API static class UScriptStruct* StaticStruct(); \
	static void StaticExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		const FName& CharacterRoot, \
		const float RootRotationMultiplier, \
		const TArrayView<const FPowerIKEffector>& Effectors, \
		const TArrayView<const FPowerIKBoneBendDirection>& BendDirections, \
		const TArrayView<const FPowerIKExcludedBone>& ExcludedBones, \
		const TArrayView<const FPowerIKBoneLimit>& JointLimits, \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint, \
		const FPowerIKBodyInertia& Inertia, \
		const int32 MaxSquashIterations, \
		const int32 MaxStretchIterations, \
		const int32 MaxFinalIterations, \
		const bool AllowBoneTranslation, \
		const float SolverAlpha, \
		FPowerIKCore& Core, \
		FControlRigExecuteContext& ExecuteContext, \
		const FRigUnitContext & Context \
	); \
	FORCEINLINE_DEBUGGABLE static void RigVMExecute( \
		FRigVMExecuteContext& RigVMExecuteContext, \
		FRigVMMemoryHandleArray RigVMMemoryHandles \
	) \
	{ \
		const FRigUnitContext & Context = *(const FRigUnitContext *)RigVMExecuteContext.OpaqueArguments[0]; \
		 \
		const FName& CharacterRoot = *(FName*)RigVMMemoryHandles[0].GetData(false); \
		const float RootRotationMultiplier = *(float*)RigVMMemoryHandles[1].GetData(false); \
		TArray<FPowerIKEffector>& Effectors = *(TArray<FPowerIKEffector>*)RigVMMemoryHandles[2].GetData(false); \
		TArray<FPowerIKBoneBendDirection>& BendDirections = *(TArray<FPowerIKBoneBendDirection>*)RigVMMemoryHandles[3].GetData(false); \
		TArray<FPowerIKExcludedBone>& ExcludedBones = *(TArray<FPowerIKExcludedBone>*)RigVMMemoryHandles[4].GetData(false); \
		TArray<FPowerIKBoneLimit>& JointLimits = *(TArray<FPowerIKBoneLimit>*)RigVMMemoryHandles[5].GetData(false); \
		const FPowerIKCenterOfGravity& CenterOfGravityConstraint = *(FPowerIKCenterOfGravity*)RigVMMemoryHandles[6].GetData(false); \
		const FPowerIKBodyInertia& Inertia = *(FPowerIKBodyInertia*)RigVMMemoryHandles[7].GetData(false); \
		const int32 MaxSquashIterations = *(int32*)RigVMMemoryHandles[8].GetData(false); \
		const int32 MaxStretchIterations = *(int32*)RigVMMemoryHandles[9].GetData(false); \
		const int32 MaxFinalIterations = *(int32*)RigVMMemoryHandles[10].GetData(false); \
		const bool AllowBoneTranslation = *(bool*)RigVMMemoryHandles[11].GetData(false); \
		const float SolverAlpha = *(float*)RigVMMemoryHandles[12].GetData(false); \
		FPowerIKCore& Core = *(FPowerIKCore*)RigVMMemoryHandles[13].GetData(false, RigVMExecuteContext.GetSlice().GetIndex()); \
		FControlRigExecuteContext& ExecuteContext = *(FControlRigExecuteContext*)RigVMMemoryHandles[14].GetData(false); \
		 \
		StaticExecute( \
			RigVMExecuteContext, \
			CharacterRoot, \
			RootRotationMultiplier, \
			Effectors, \
			BendDirections, \
			ExcludedBones, \
			JointLimits, \
			CenterOfGravityConstraint, \
			Inertia, \
			MaxSquashIterations, \
			MaxStretchIterations, \
			MaxFinalIterations, \
			AllowBoneTranslation, \
			SolverAlpha, \
			Core, \
			ExecuteContext, \
			Context \
		); \
	} \
	typedef FRigUnitMutable Super;


template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<struct FRigUnit_PowerIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
