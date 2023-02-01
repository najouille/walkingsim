// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKRuntime/Public/AnimNode_PowerIK_Walk.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_PowerIK_Walk() {}
// Cross Module References
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraint();
	UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKWalkingLimb();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlaneConstraint;
class UScriptStruct* FPlaneConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlaneConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlaneConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlaneConstraint, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PlaneConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_PlaneConstraint.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPlaneConstraint>()
{
	return FPlaneConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPlaneConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/* TODO\n// do second raycast to snap corrected foot position to ground height\n// clamp max stride length (record root transform at last planted location)\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "TODO\n// do second raycast to snap corrected foot position to ground height\n// clamp max stride length (record root transform at last planted location)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlaneConstraint>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlaneConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PlaneConstraint",
		sizeof(FPlaneConstraint),
		alignof(FPlaneConstraint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlaneConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlaneConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_PlaneConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlaneConstraint.InnerSingleton, Z_Construct_UScriptStruct_FPlaneConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PlaneConstraint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb;
class UScriptStruct* FPowerIKWalkingLimb::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKWalkingLimb, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKWalkingLimb"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKWalkingLimb>()
{
	return FPowerIKWalkingLimb::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EndBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LimbMaxLengthMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LimbMaxLengthMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepLengthMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepLengthMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeight;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RelatedLimbs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelatedLimbs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RelatedLimbs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateFootToGround_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateFootToGround;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FootCollisionRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FootCollisionRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKWalkingLimb>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Name of the bone at the start of this limb. This is the origin of the raycast. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Name of the bone at the start of this limb. This is the origin of the raycast." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone = { "StartBone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StartBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Name of foot bone at end of the limb. This will be tip of IK effect. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Name of foot bone at end of the limb. This will be tip of IK effect." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone = { "EndBone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, EndBone), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Percentage of maximum length to extend limb to reach new foot position. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Percentage of maximum length to extend limb to reach new foot position." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier = { "LimbMaxLengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, LimbMaxLengthMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Squash / stretch the stride of the feet. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Squash / stretch the stride of the feet." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier = { "StepLengthMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StepLengthMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Time in seconds to take a single step from un-planting to planted. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Time in seconds to take a single step from un-planting to planted." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration = { "StepDuration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StepDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Maximum height in centimeters of foot at center of stride.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Maximum height in centimeters of foot at center of stride." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight = { "StepHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, StepHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_Inner = { "RelatedLimbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_MetaData[] = {
		{ "Category", "Limb" },
		{ "Comment", "/** Specify the index of limbs that must be planted before this one can be UN-planted.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Specify the index of limbs that must be planted before this one can be UN-planted." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs = { "RelatedLimbs", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, RelatedLimbs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround_MetaData[] = {
		{ "Category", "Limb" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to orient the foot bone to the ground normal. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "How much to orient the foot bone to the ground normal." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround = { "RotateFootToGround", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, RotateFootToGround), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius_MetaData[] = {
		{ "Category", "Limb" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Prevent other feet from colliding with this one.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Prevent other feet from colliding with this one." },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius = { "FootCollisionRadius", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKWalkingLimb, FootCollisionRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StartBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_EndBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_LimbMaxLengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepLengthMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_StepHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RelatedLimbs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_RotateFootToGround,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewProp_FootCollisionRadius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKWalkingLimb",
		sizeof(FPowerIKWalkingLimb),
		alignof(FPowerIKWalkingLimb),
		Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKWalkingLimb()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_PowerIK_Walk>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_PowerIK_Walk cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk;
class UScriptStruct* FAnimNode_PowerIK_Walk::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("AnimNode_PowerIK_Walk"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FAnimNode_PowerIK_Walk>()
{
	return FAnimNode_PowerIK_Walk::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyInertia_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInertia;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Limbs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Limbs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Limbs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepMaxReachDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepMaxReachDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepDurationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepDurationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeightMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StepHeightMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepHeightCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StepHeightCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StepSpeedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StepSpeedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeleportDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeleportDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrintTeleportWarning_MetaData[];
#endif
		static void NewProp_PrintTeleportWarning_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PrintTeleportWarning;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceComplex_MetaData[];
#endif
		static void NewProp_TraceComplex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TraceComplex;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugDrawSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_PowerIK_Walk>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Name of joint that acts as the root of the solve. All effectors must be on children of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of joint that acts as the root of the solve. All effectors must be on children of this bone." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot = { "CharacterRoot", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, CharacterRoot), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** How much to rotate root towards neighboring effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "How much to rotate root towards neighboring effectors." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier = { "RootRotationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, RootRotationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia_MetaData[] = {
		{ "Category", "Rig" },
		{ "Comment", "/** Apply inertial damping to Character Root bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Apply inertial damping to Character Root bone." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia = { "BodyInertia", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, BodyInertia), Z_Construct_UScriptStruct_FPowerIKBodyInertia, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia_MetaData)) }; // 2483073127
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_Inner = { "Limbs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKWalkingLimb, METADATA_PARAMS(nullptr, 0) }; // 3960309492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_MetaData[] = {
		{ "Category", "Limbs" },
		{ "Comment", "/** List of feet that are grounded. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "List of feet that are grounded." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs = { "Limbs", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, Limbs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_MetaData)) }; // 3960309492
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance_MetaData[] = {
		{ "Category", "Stepping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance that character root can move from previous planted location before being clamped. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Maximum distance that character root can move from previous planted location before being clamped." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance = { "StepMaxReachDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepMaxReachDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier_MetaData[] = {
		{ "Category", "Stepping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Speed up or slow down stepping speed for all limbs. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Speed up or slow down stepping speed for all limbs." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier = { "StepDurationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepDurationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier_MetaData[] = {
		{ "Category", "Stepping" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Raise or lower step height for all limbs. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "Raise or lower step height for all limbs." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier = { "StepHeightMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepHeightMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Foot height multiplier normalized over the duration of a single step.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Foot height multiplier normalized over the duration of a single step." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve = { "StepHeightCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepHeightCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Foot speed multiplier normalized over the duration of a single step.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Foot speed multiplier normalized over the duration of a single step." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve = { "StepSpeedCurve", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, StepSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Maximum distance in centimeters that feet can get from capsule before character is forcibly teleported. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Maximum distance in centimeters that feet can get from capsule before character is forcibly teleported." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance = { "TeleportDistance", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, TeleportDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_MetaData[] = {
		{ "Category", "Stepping" },
		{ "Comment", "/** Print warning to log when limbs are teleported (debugging). */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Print warning to log when limbs are teleported (debugging)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_SetBit(void* Obj)
	{
		((FAnimNode_PowerIK_Walk*)Obj)->PrintTeleportWarning = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning = { "PrintTeleportWarning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Walk), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** The collision channel used for \"Grounded\" effectors. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "The collision channel used for \"Grounded\" effectors." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/** Do you want to cast against complex collision geometry (if mesh has it). */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Do you want to cast against complex collision geometry (if mesh has it)." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_SetBit(void* Obj)
	{
		((FAnimNode_PowerIK_Walk*)Obj)->TraceComplex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex = { "TraceComplex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Walk), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_Inner = { "BendDirections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, METADATA_PARAMS(nullptr, 0) }; // 2907123495
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of custom directions for bones to bend in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "List of custom directions for bones to bend in." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections = { "BendDirections", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, BendDirections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_MetaData)) }; // 2907123495
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_Inner = { "ExcludedBones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKExcludedBone, METADATA_PARAMS(nullptr, 0) }; // 2098140672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of excluded bones. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "List of excluded bones." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones = { "ExcludedBones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, ExcludedBones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_MetaData)) }; // 2098140672
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_Inner = { "JointLimits", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPowerIKBoneLimit, METADATA_PARAMS(nullptr, 0) }; // 4216292480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_MetaData[] = {
		{ "Category", "Constraints" },
		{ "Comment", "/** List of rotation limits for joints. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "List of rotation limits for joints." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits = { "JointLimits", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, JointLimits), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_MetaData)) }; // 4216292480
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve squashing poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Number of iterations to improve squashing poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations = { "MaxSquashIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, MaxSquashIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to improve stretching poses. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Number of iterations to improve stretching poses." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations = { "MaxStretchIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, MaxStretchIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of iterations to cleanup final pose. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Number of iterations to cleanup final pose." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations = { "MaxFinalIterations", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, MaxFinalIterations), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_MetaData[] = {
		{ "Category", "Solver" },
		{ "Comment", "/** If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support.*/" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "If true, bone lengths will be updated each frame based on the input pose. This allows bone chains to 'stretch' but has a small additional cost to support." },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_SetBit(void* Obj)
	{
		((FAnimNode_PowerIK_Walk*)Obj)->AllowBoneTranslation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation = { "AllowBoneTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_PowerIK_Walk), &Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha_MetaData[] = {
		{ "Category", "Solver" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Global alpha to blend effector of solver on/off from 0 to 1. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Global alpha to blend effector of solver on/off from 0 to 1." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha = { "SolverAlpha", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, SolverAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Adjust size of debug gizmos. */" },
		{ "ModuleRelativePath", "Public/AnimNode_PowerIK_Walk.h" },
		{ "ToolTip", "Adjust size of debug gizmos." },
		{ "UIMax", "100" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize = { "DebugDrawSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_PowerIK_Walk, DebugDrawSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CharacterRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_RootRotationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BodyInertia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_Limbs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepMaxReachDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepDurationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepHeightCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_StepSpeedCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TeleportDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_PrintTeleportWarning,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_TraceComplex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_BendDirections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_ExcludedBones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_JointLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxSquashIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxStretchIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_MaxFinalIterations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_AllowBoneTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_SolverAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewProp_DebugDrawSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_PowerIK_Walk",
		sizeof(FAnimNode_PowerIK_Walk),
		alignof(FAnimNode_PowerIK_Walk),
		Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h_Statics::ScriptStructInfo[] = {
		{ FPlaneConstraint::StaticStruct, Z_Construct_UScriptStruct_FPlaneConstraint_Statics::NewStructOps, TEXT("PlaneConstraint"), &Z_Registration_Info_UScriptStruct_PlaneConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlaneConstraint), 517646797U) },
		{ FPowerIKWalkingLimb::StaticStruct, Z_Construct_UScriptStruct_FPowerIKWalkingLimb_Statics::NewStructOps, TEXT("PowerIKWalkingLimb"), &Z_Registration_Info_UScriptStruct_PowerIKWalkingLimb, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKWalkingLimb), 3960309492U) },
		{ FAnimNode_PowerIK_Walk::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_PowerIK_Walk_Statics::NewStructOps, TEXT("AnimNode_PowerIK_Walk"), &Z_Registration_Info_UScriptStruct_AnimNode_PowerIK_Walk, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_PowerIK_Walk), 1458710028U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h_2882370562(TEXT("/Script/PowerIKRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_AnimNode_PowerIK_Walk_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
