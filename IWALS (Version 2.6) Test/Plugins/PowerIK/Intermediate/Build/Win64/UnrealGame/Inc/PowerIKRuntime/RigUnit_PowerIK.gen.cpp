// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKRuntime/Public/RigUnit_PowerIK.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_PowerIK() {}
// Cross Module References
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PowerIK();
	UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnitMutable();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_PowerIK>() == std::is_polymorphic<FRigUnitMutable>(), "USTRUCT FRigUnit_PowerIK cannot be polymorphic unless super FRigUnitMutable is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PowerIK;
class UScriptStruct* FRigUnit_PowerIK::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PowerIK, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("RigUnit_PowerIK"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PowerIK::Execute"), &FRigUnit_PowerIK::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.OuterSingleton);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FRigUnit_PowerIK>()
{
	return FRigUnit_PowerIK::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterRoot_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CharacterRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootRotationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RootRotationMultiplier;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effectors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effectors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effectors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendDirections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendDirections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BendDirections;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedBones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedBones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludedBones;
		static const UECodeGen_Private::FStructPropertyParams NewProp_JointLimits_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointLimits_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_JointLimits;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterOfGravityConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterOfGravityConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inertia_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Inertia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSquashIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSquashIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxStretchIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxStretchIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxFinalIterations_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxFinalIterations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AllowBoneTranslation_MetaData[];
#endif
		static void NewProp_AllowBoneTranslation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowBoneTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverAlpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SolverAlpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Core_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Core;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/**\n * Power IK Solver Control Rig Node\n */" },
		{ "DisplayName", "PowerIK Solver" },
		{ "Keywords", "IK,Solver,Power" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Power IK Solver Control Rig Node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PowerIK>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot_MetaData[] = {
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, CharacterRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, RootRotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_Inner = { "Effectors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKEffector, METADATA_PARAMS(nullptr, 0) }; // 2773766776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_MetaData[] = {
		{ "Comment", "/** List of effectors to pull the rig. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of effectors to pull the rig." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors = { "Effectors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, Effectors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_MetaData)) }; // 2773766776
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(nullptr, 0) }; // 2907123495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_MetaData[] = {
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_MetaData)) }; // 2907123495
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(nullptr, 0) }; // 2098140672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_MetaData[] = {
		{ "Comment", "/** List of excluded bones. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of excluded bones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_MetaData)) }; // 2098140672
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(nullptr, 0) }; // 4216292480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_MetaData[] = {
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_MetaData)) }; // 4216292480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint_MetaData[] = {
		{ "Comment", "/** Center of Gravity Constraint, applied to Character Root bone. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Center of Gravity Constraint, applied to Character Root bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint = { "CenterOfGravityConstraint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, CenterOfGravityConstraint), Z_Construct_UScriptStruct_FPowerIKCenterOfGravity, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint_MetaData)) }; // 1016899945
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia_MetaData[] = {
		{ "Comment", "/** Apply inertial damping to Character body. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Apply inertial damping to Character body." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia = { "Inertia", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, Inertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia_MetaData)) }; // 2483073127
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations_MetaData[] = {
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, MaxSquashIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations_MetaData[] = {
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, MaxStretchIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations_MetaData[] = {
		{ "Comment", "/** Number of iterations to improve final pose. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Number of iterations to improve final pose." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, MaxFinalIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
	{
		((FRigUnit_PowerIK*)Obj)->AllowBoneTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FRigUnit_PowerIK), &Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha_MetaData[] = {
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
		{ "ToolTip", "Global alpha to blend effector of solver on/off from 0 to 1." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, SolverAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigUnit_PowerIK.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core = { "Core", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRigUnit_PowerIK, Core), Z_Construct_UScriptStruct_FPowerIKCore, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core_MetaData)) }; // 153437361
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CharacterRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_RootRotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Effectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_BendDirections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_ExcludedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_JointLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_CenterOfGravityConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Inertia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxSquashIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxStretchIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_MaxFinalIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_AllowBoneTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_SolverAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewProp_Core,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		Z_Construct_UScriptStruct_FRigUnitMutable,
		&NewStructOps,
		"RigUnit_PowerIK",
		sizeof(FRigUnit_PowerIK),
		alignof(FRigUnit_PowerIK),
		Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PowerIK()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PowerIK.InnerSingleton;
	}

void FRigUnit_PowerIK::Execute(const FRigUnitContext & Context)
{
	FRigVMExecuteContext RigVMExecuteContext;
	TArrayView<const FPowerIKEffector> Effectors_2_Array(Effectors);
	TArrayView<const FPowerIKBoneBendDirection> BendDirections_3_Array(BendDirections);
	TArrayView<const FPowerIKExcludedBone> ExcludedBones_4_Array(ExcludedBones);
	TArrayView<const FPowerIKBoneLimit> JointLimits_5_Array(JointLimits);
	
    StaticExecute(
		RigVMExecuteContext,
		CharacterRoot,
		RootRotationMultiplier,
		Effectors_2_Array,
		BendDirections_3_Array,
		ExcludedBones_4_Array,
		JointLimits_5_Array,
		CenterOfGravityConstraint,
		Inertia,
		MaxSquashIterations,
		MaxStretchIterations,
		MaxFinalIterations,
		AllowBoneTranslation,
		SolverAlpha,
		Core,
		ExecuteContext,
		Context
	);
}

	struct Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_PowerIK::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PowerIK_Statics::NewStructOps, TEXT("RigUnit_PowerIK"), &Z_Registration_Info_UScriptStruct_RigUnit_PowerIK, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PowerIK), 2563032983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_4223996289(TEXT("/Script/PowerIKRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_RigUnit_PowerIK_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
