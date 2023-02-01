// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PowerIKRuntime/Public/PowerIK_UnrealCore.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerIK_UnrealCore() {}
// Cross Module References
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit();
	UPackage* Z_Construct_UPackage__Script_PowerIKRuntime();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone();
	POWERIKRUNTIME_API UEnum* Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKPoleVector();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKSmoothing();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia();
	POWERIKRUNTIME_API UEnum* Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffectorData();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneData();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKRootData();
	POWERIKRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKBoneLimit;
class UScriptStruct* FPowerIKBoneLimit::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKBoneLimit.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKBoneLimit.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneLimit, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneLimit"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKBoneLimit.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBoneLimit>()
{
	return FPowerIKBoneLimit::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneLimit>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneLimit, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneLimit, Stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewProp_Stiffness,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBoneLimit",
		sizeof(FPowerIKBoneLimit),
		alignof(FPowerIKBoneLimit),
		Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneLimit()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKBoneLimit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKBoneLimit.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKBoneLimit.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection;
class UScriptStruct* FPowerIKBoneBendDirection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneBendDirection"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBoneBendDirection>()
{
	return FPowerIKBoneBendDirection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BendDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BendDirection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneBendDirection>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneBendDirection, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection_MetaData[] = {
		{ "Category", "Joint" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection = { "BendDirection", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBoneBendDirection, BendDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewProp_BendDirection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBoneBendDirection",
		sizeof(FPowerIKBoneBendDirection),
		alignof(FPowerIKBoneBendDirection),
		Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneBendDirection()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKExcludedBone;
class UScriptStruct* FPowerIKExcludedBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKExcludedBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKExcludedBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKExcludedBone, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKExcludedBone"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKExcludedBone.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKExcludedBone>()
{
	return FPowerIKExcludedBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKExcludedBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Joint" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKExcludedBone, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewProp_BoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKExcludedBone",
		sizeof(FPowerIKExcludedBone),
		alignof(FPowerIKExcludedBone),
		Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKExcludedBone()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKExcludedBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKExcludedBone.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKExcludedBone.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPoleVectorModeEnum;
	static UEnum* EPoleVectorModeEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoleVectorModeEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPoleVectorModeEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("EPoleVectorModeEnum"));
		}
		return Z_Registration_Info_UEnum_EPoleVectorModeEnum.OuterSingleton;
	}
	template<> POWERIKRUNTIME_API UEnum* StaticEnum<EPoleVectorModeEnum>()
	{
		return EPoleVectorModeEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enumerators[] = {
		{ "PV_None", (int64)PV_None },
		{ "PV_Position", (int64)PV_Position },
		{ "PV_Bone", (int64)PV_Bone },
		{ "PV_AngleOffset", (int64)PV_AngleOffset },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "PV_AngleOffset.DisplayName", "Float Angle Offset" },
		{ "PV_AngleOffset.Name", "PV_AngleOffset" },
		{ "PV_Bone.DisplayName", "Bone" },
		{ "PV_Bone.Name", "PV_Bone" },
		{ "PV_None.DisplayName", "None" },
		{ "PV_None.Name", "PV_None" },
		{ "PV_Position.DisplayName", "Character Space Position" },
		{ "PV_Position.Name", "PV_Position" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		"EPoleVectorModeEnum",
		"EPoleVectorModeEnum",
		Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum()
	{
		if (!Z_Registration_Info_UEnum_EPoleVectorModeEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPoleVectorModeEnum.InnerSingleton, Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPoleVectorModeEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKPoleVector;
class UScriptStruct* FPowerIKPoleVector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKPoleVector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKPoleVector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKPoleVector, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKPoleVector"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKPoleVector.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKPoleVector>()
{
	return FPowerIKPoleVector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKPoleVector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Comment", "/** Type of Pole Vector. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Type of Pole Vector." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, Mode), Z_Construct_UEnum_PowerIKRuntime_EPoleVectorModeEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode_MetaData)) }; // 349597638
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset = { "AngleOffset", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKPoleVector, AngleOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewProp_AngleOffset,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKPoleVector",
		sizeof(FPowerIKPoleVector),
		alignof(FPowerIKPoleVector),
		Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKPoleVector()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKPoleVector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKPoleVector.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKPoleVector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKSmoothing;
class UScriptStruct* FPowerIKSmoothing::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKSmoothing.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKSmoothing.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKSmoothing, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKSmoothing"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKSmoothing.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKSmoothing>()
{
	return FPowerIKSmoothing::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothPositionOverTime_MetaData[];
#endif
		static void NewProp_SmoothPositionOverTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothPositionOverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPositionSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPositionSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPositionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPositionDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothRotationOverTime_MetaData[];
#endif
		static void NewProp_SmoothRotationOverTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SmoothRotationOverTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDegreesDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDegreesDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKSmoothing>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Apply temporal smoothing to effector location. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Apply temporal smoothing to effector location." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_SetBit(void* Obj)
	{
		((FPowerIKSmoothing*)Obj)->SmoothPositionOverTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime = { "SmoothPositionOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKSmoothing), &Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum speed effector can react to input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum speed effector can react to input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed = { "MaxPositionSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxPositionSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "2000" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance effector can be from input position when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum distance effector can be from input position when smoothing." },
		{ "UIMax", "2000" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance = { "MaxPositionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxPositionDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Apply temporal smoothing to effector location. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Apply temporal smoothing to effector location." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_SetBit(void* Obj)
	{
		((FPowerIKSmoothing*)Obj)->SmoothRotationOverTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime = { "SmoothRotationOverTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKSmoothing), &Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum speed, in degrees/second, effector can react to input rotation when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum speed, in degrees/second, effector can react to input rotation when smoothing." },
		{ "UIMax", "360" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed = { "MaxDegreesSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxDegreesSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance_MetaData[] = {
		{ "Category", "Grounding" },
		{ "ClampMax", "360" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Maximum distance, in degrees, effector can be from input rotation when smoothing. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Maximum distance, in degrees, effector can be from input rotation when smoothing." },
		{ "UIMax", "360" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance = { "MaxDegreesDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKSmoothing, MaxDegreesDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothPositionOverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxPositionDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_SmoothRotationOverTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewProp_MaxDegreesDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKSmoothing",
		sizeof(FPowerIKSmoothing),
		alignof(FPowerIKSmoothing),
		Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKSmoothing()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKSmoothing.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKSmoothing.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKSmoothing.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity;
class UScriptStruct* FPowerIKCenterOfGravity::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKCenterOfGravity"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKCenterOfGravity>()
{
	return FPowerIKCenterOfGravity::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HorizAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VertAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullBodyAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullBodyAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKCenterOfGravity>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Smoothly blend effect of this constraint on/off. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Smoothly blend effect of this constraint on/off." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull character root towards feet in horiz direction. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull character root towards feet in horiz direction." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount = { "HorizAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, HorizAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull character root downwards when root pulled away from feet. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull character root downwards when root pulled away from feet." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount = { "VertAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, VertAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount_MetaData[] = {
		{ "Category", "Constraint" },
		{ "ClampMax", "10" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much to pull the root with the rest of the body. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much to pull the root with the rest of the body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount = { "PullBodyAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKCenterOfGravity, PullBodyAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_Alpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_HorizAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_VertAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewProp_PullBodyAmount,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKCenterOfGravity",
		sizeof(FPowerIKCenterOfGravity),
		alignof(FPowerIKCenterOfGravity),
		Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCenterOfGravity()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKBodyInertia;
class UScriptStruct* FPowerIKBodyInertia::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKBodyInertia.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKBodyInertia.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBodyInertia, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBodyInertia"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKBodyInertia.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBodyInertia>()
{
	return FPowerIKBodyInertia::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyInertiaToBody_MetaData[];
#endif
		static void NewProp_ApplyInertiaToBody_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyInertiaToBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothFactor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSpring_MetaData[];
#endif
		static void NewProp_UseSpring_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSpring;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringStrength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStrength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBodyInertia>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_MetaData[] = {
		{ "Category", "Inertia" },
		{ "Comment", "/** Whether to use inertia to smooth root motion. Default is false.*/" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Whether to use inertia to smooth root motion. Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_SetBit(void* Obj)
	{
		((FPowerIKBodyInertia*)Obj)->ApplyInertiaToBody = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody = { "ApplyInertiaToBody", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKBodyInertia), &Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The strength of the spring attached the root to the solved position. */" },
		{ "EditCondition", "!UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The strength of the spring attached the root to the solved position." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor = { "SmoothFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SmoothFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_MetaData[] = {
		{ "Category", "Inertia" },
		{ "Comment", "/** Use a spring instead of smooth motion (can overshoot). Default is false.*/" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Use a spring instead of smooth motion (can overshoot). Default is false." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_SetBit(void* Obj)
	{
		((FPowerIKBodyInertia*)Obj)->UseSpring = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring = { "UseSpring", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKBodyInertia), &Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The strength of the spring attached the root to the solved position. */" },
		{ "EditCondition", "UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The strength of the spring attached the root to the solved position." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SpringStrength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Inertia" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Dampen the motion over time. Range is 0-1. Default is 0.2. )*/" },
		{ "EditCondition", "UseSpring" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Dampen the motion over time. Range is 0-1. Default is 0.2. )" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKBodyInertia, SpringDamping), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_ApplyInertiaToBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SmoothFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_UseSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringStrength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewProp_SpringDamping,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBodyInertia",
		sizeof(FPowerIKBodyInertia),
		alignof(FPowerIKBodyInertia),
		Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBodyInertia()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKBodyInertia.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKBodyInertia.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKBodyInertia.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectorSpaceEnum;
	static UEnum* EEffectorSpaceEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectorSpaceEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEffectorSpaceEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("EEffectorSpaceEnum"));
		}
		return Z_Registration_Info_UEnum_EEffectorSpaceEnum.OuterSingleton;
	}
	template<> POWERIKRUNTIME_API UEnum* StaticEnum<EEffectorSpaceEnum>()
	{
		return EEffectorSpaceEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enumerators[] = {
		{ "ES_Additive", (int64)ES_Additive },
		{ "ES_World", (int64)ES_World },
		{ "ES_Component", (int64)ES_Component },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ES_Additive.DisplayName", "Relative to Input Pose" },
		{ "ES_Additive.Name", "ES_Additive" },
		{ "ES_Component.DisplayName", "Component Space" },
		{ "ES_Component.Name", "ES_Component" },
		{ "ES_World.DisplayName", "World Space" },
		{ "ES_World.Name", "ES_World" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		"EEffectorSpaceEnum",
		"EEffectorSpaceEnum",
		Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum()
	{
		if (!Z_Registration_Info_UEnum_EEffectorSpaceEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectorSpaceEnum.InnerSingleton, Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEffectorSpaceEnum.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKEffector;
class UScriptStruct* FPowerIKEffector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKEffector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKEffector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKEffector, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKEffector"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKEffector.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKEffector>()
{
	return FPowerIKEffector::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKEffector_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PositionSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PullWeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PullWeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalizePulling_MetaData[];
#endif
		static void NewProp_NormalizePulling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_NormalizePulling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositivePullFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PositivePullFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NegativePullFactor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NegativePullFactor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateBone_MetaData[];
#endif
		static void NewProp_RotateBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateLimb_MetaData[];
#endif
		static void NewProp_RotateLimb_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RotateLimb;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaSmoothSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSmoothSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AngularDeltaSmoothSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularDeltaSmoothSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Smoothing_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Smoothing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoleVector_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PoleVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectsCenterOfGravity_MetaData[];
#endif
		static void NewProp_AffectsCenterOfGravity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectsCenterOfGravity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKEffector>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The bone to affect. */" },
		{ "Constant", "" },
		{ "CustomWidget", "BoneName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The bone to affect." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Where to move this effector. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Where to move this effector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The space to consider the position in. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The space to consider the position in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace = { "PositionSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PositionSpace), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace_MetaData)) }; // 1990646720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Rotation used by RotateBone and RotateLimb. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Rotation used by RotateBone and RotateLimb." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** The space to consider the rotation in. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "The space to consider the rotation in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, RotationSpace), Z_Construct_UEnum_PowerIKRuntime_EEffectorSpaceEnum, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace_MetaData)) }; // 1990646720
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** How much this effector pulls un-affected parts of body. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "How much this effector pulls un-affected parts of body." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight = { "PullWeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PullWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Use normalized PullWeight values in solver. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Use normalized PullWeight values in solver." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->NormalizePulling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling = { "NormalizePulling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Positive direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Positive direction scale factor for effector weights." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor = { "PositivePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PositivePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Negative direction scale factor for effector weights. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Negative direction scale factor for effector weights." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor = { "NegativePullFactor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, NegativePullFactor), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Does this effector rotate the bone it affects? */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector rotate the bone it affects?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->RotateBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone = { "RotateBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_MetaData[] = {
		{ "Category", "Effector" },
		{ "Comment", "/** Does this effector rotate the limb surrounding it? */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector rotate the limb surrounding it?" },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->RotateLimb = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb = { "RotateLimb", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in centimeters per second that this effector adjusts to changing positions. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Speed in centimeters per second that this effector adjusts to changing positions. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed = { "DeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, DeltaSmoothSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed_MetaData[] = {
		{ "Category", "Effector" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Speed in degrees per second that this effector adjusts to changing rotations. Ignored if <= 0.0. */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Speed in degrees per second that this effector adjusts to changing rotations. Ignored if <= 0.0." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed = { "AngularDeltaSmoothSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, AngularDeltaSmoothSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing_MetaData[] = {
		{ "Category", "Smoothing" },
		{ "Comment", "/** Analytic, simple velocity clamping on effector position, rotation and distance to input.*/" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Analytic, simple velocity clamping on effector position, rotation and distance to input." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing = { "Smoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Smoothing), Z_Construct_UScriptStruct_FPowerIKSmoothing, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing_MetaData)) }; // 856689747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector_MetaData[] = {
		{ "Category", "PoleVector" },
		{ "Comment", "/** Optional, explicit control over the direction of the limb controlled by this effector.*/" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Optional, explicit control over the direction of the limb controlled by this effector." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector = { "PoleVector", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, PoleVector), Z_Construct_UScriptStruct_FPowerIKPoleVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector_MetaData)) }; // 1226557986
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_MetaData[] = {
		{ "Category", "COG" },
		{ "Comment", "/** Does this effector pull the center of gravity? (usually only feet). */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Does this effector pull the center of gravity? (usually only feet)." },
	};
#endif
	void Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_SetBit(void* Obj)
	{
		((FPowerIKEffector*)Obj)->AffectsCenterOfGravity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity = { "AffectsCenterOfGravity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPowerIKEffector), &Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Blend" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Blend entire effector on/off */" },
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
		{ "ToolTip", "Blend entire effector on/off" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerIKEffector, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositionSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PullWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NormalizePulling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PositivePullFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_NegativePullFactor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_RotateLimb,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_DeltaSmoothSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AngularDeltaSmoothSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Smoothing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_PoleVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_AffectsCenterOfGravity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewProp_Alpha,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKEffector_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKEffector",
		sizeof(FPowerIKEffector),
		alignof(FPowerIKEffector),
		Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffector_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffector()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKEffector.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKEffector.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKEffector_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKEffector.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKEffectorData;
class UScriptStruct* FPowerIKEffectorData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKEffectorData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKEffectorData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKEffectorData, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKEffectorData"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKEffectorData.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKEffectorData>()
{
	return FPowerIKEffectorData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKEffectorData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKEffectorData",
		sizeof(FPowerIKEffectorData),
		alignof(FPowerIKEffectorData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKEffectorData()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKEffectorData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKEffectorData.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKEffectorData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKBoneData;
class UScriptStruct* FPowerIKBoneData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKBoneData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKBoneData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKBoneData, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKBoneData"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKBoneData.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKBoneData>()
{
	return FPowerIKBoneData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKBoneData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKBoneData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKBoneData",
		sizeof(FPowerIKBoneData),
		alignof(FPowerIKBoneData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKBoneData()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKBoneData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKBoneData.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKBoneData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKRootData;
class UScriptStruct* FPowerIKRootData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKRootData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKRootData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKRootData, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKRootData"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKRootData.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKRootData>()
{
	return FPowerIKRootData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKRootData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKRootData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKRootData>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKRootData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKRootData",
		sizeof(FPowerIKRootData),
		alignof(FPowerIKRootData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKRootData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKRootData()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKRootData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKRootData.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKRootData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKRootData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PowerIKCore;
class UScriptStruct* FPowerIKCore::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PowerIKCore.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PowerIKCore.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerIKCore, Z_Construct_UPackage__Script_PowerIKRuntime(), TEXT("PowerIKCore"));
	}
	return Z_Registration_Info_UScriptStruct_PowerIKCore.OuterSingleton;
}
template<> POWERIKRUNTIME_API UScriptStruct* StaticStruct<FPowerIKCore>()
{
	return FPowerIKCore::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPowerIKCore_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PowerIK_UnrealCore.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerIKCore_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerIKCore>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerIKCore_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PowerIKRuntime,
		nullptr,
		&NewStructOps,
		"PowerIKCore",
		sizeof(FPowerIKCore),
		alignof(FPowerIKCore),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerIKCore_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerIKCore()
	{
		if (!Z_Registration_Info_UScriptStruct_PowerIKCore.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PowerIKCore.InnerSingleton, Z_Construct_UScriptStruct_FPowerIKCore_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PowerIKCore.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics::EnumInfo[] = {
		{ EPoleVectorModeEnum_StaticEnum, TEXT("EPoleVectorModeEnum"), &Z_Registration_Info_UEnum_EPoleVectorModeEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 349597638U) },
		{ EEffectorSpaceEnum_StaticEnum, TEXT("EEffectorSpaceEnum"), &Z_Registration_Info_UEnum_EEffectorSpaceEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1990646720U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics::ScriptStructInfo[] = {
		{ FPowerIKBoneLimit::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBoneLimit_Statics::NewStructOps, TEXT("PowerIKBoneLimit"), &Z_Registration_Info_UScriptStruct_PowerIKBoneLimit, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBoneLimit), 4216292480U) },
		{ FPowerIKBoneBendDirection::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBoneBendDirection_Statics::NewStructOps, TEXT("PowerIKBoneBendDirection"), &Z_Registration_Info_UScriptStruct_PowerIKBoneBendDirection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBoneBendDirection), 2907123495U) },
		{ FPowerIKExcludedBone::StaticStruct, Z_Construct_UScriptStruct_FPowerIKExcludedBone_Statics::NewStructOps, TEXT("PowerIKExcludedBone"), &Z_Registration_Info_UScriptStruct_PowerIKExcludedBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKExcludedBone), 2098140672U) },
		{ FPowerIKPoleVector::StaticStruct, Z_Construct_UScriptStruct_FPowerIKPoleVector_Statics::NewStructOps, TEXT("PowerIKPoleVector"), &Z_Registration_Info_UScriptStruct_PowerIKPoleVector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKPoleVector), 1226557986U) },
		{ FPowerIKSmoothing::StaticStruct, Z_Construct_UScriptStruct_FPowerIKSmoothing_Statics::NewStructOps, TEXT("PowerIKSmoothing"), &Z_Registration_Info_UScriptStruct_PowerIKSmoothing, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKSmoothing), 856689747U) },
		{ FPowerIKCenterOfGravity::StaticStruct, Z_Construct_UScriptStruct_FPowerIKCenterOfGravity_Statics::NewStructOps, TEXT("PowerIKCenterOfGravity"), &Z_Registration_Info_UScriptStruct_PowerIKCenterOfGravity, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKCenterOfGravity), 1016899945U) },
		{ FPowerIKBodyInertia::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBodyInertia_Statics::NewStructOps, TEXT("PowerIKBodyInertia"), &Z_Registration_Info_UScriptStruct_PowerIKBodyInertia, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBodyInertia), 2483073127U) },
		{ FPowerIKEffector::StaticStruct, Z_Construct_UScriptStruct_FPowerIKEffector_Statics::NewStructOps, TEXT("PowerIKEffector"), &Z_Registration_Info_UScriptStruct_PowerIKEffector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKEffector), 2773766776U) },
		{ FPowerIKEffectorData::StaticStruct, Z_Construct_UScriptStruct_FPowerIKEffectorData_Statics::NewStructOps, TEXT("PowerIKEffectorData"), &Z_Registration_Info_UScriptStruct_PowerIKEffectorData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKEffectorData), 2309977215U) },
		{ FPowerIKBoneData::StaticStruct, Z_Construct_UScriptStruct_FPowerIKBoneData_Statics::NewStructOps, TEXT("PowerIKBoneData"), &Z_Registration_Info_UScriptStruct_PowerIKBoneData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKBoneData), 3934008605U) },
		{ FPowerIKRootData::StaticStruct, Z_Construct_UScriptStruct_FPowerIKRootData_Statics::NewStructOps, TEXT("PowerIKRootData"), &Z_Registration_Info_UScriptStruct_PowerIKRootData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKRootData), 1983011134U) },
		{ FPowerIKCore::StaticStruct, Z_Construct_UScriptStruct_FPowerIKCore_Statics::NewStructOps, TEXT("PowerIKCore"), &Z_Registration_Info_UScriptStruct_PowerIKCore, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPowerIKCore), 153437361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_2626797799(TEXT("/Script/PowerIKRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_IWALS__NAPRAWA__5_0___2_Plugins_PowerIK_Source_PowerIKRuntime_Public_PowerIK_UnrealCore_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
