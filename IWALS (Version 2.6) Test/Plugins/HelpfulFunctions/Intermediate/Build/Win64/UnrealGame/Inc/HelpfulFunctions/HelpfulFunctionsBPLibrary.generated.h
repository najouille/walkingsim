// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class ACharacter;
class AActor;
struct FHitResult;
struct FLinearColor;
class UCurveVector;
struct FVelocityBlendCpp;
class UCurveFloat;
struct FSingleClimbPoint;
class UPrimitiveComponent;
class UActorComponent;
#ifdef HELPFULFUNCTIONS_HelpfulFunctionsBPLibrary_generated_h
#error "HelpfulFunctionsBPLibrary.generated.h already included, missing '#pragma once' in HelpfulFunctionsBPLibrary.h"
#endif
#define HELPFULFUNCTIONS_HelpfulFunctionsBPLibrary_generated_h

#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSingleClimbPoint_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FSingleClimbPoint>();

#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVelocityBlendCpp_Statics; \
	HELPFULFUNCTIONS_API static class UScriptStruct* StaticStruct();


template<> HELPFULFUNCTIONS_API UScriptStruct* StaticStruct<struct FVelocityBlendCpp>();

#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_SPARSE_DATA
#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetClampedCurveValue); \
	DECLARE_FUNCTION(execBounceOutTimeFunction); \
	DECLARE_FUNCTION(execFindBaseJumpAwayPosition); \
	DECLARE_FUNCTION(execIsNotHidingInFoliage); \
	DECLARE_FUNCTION(execRayCastSphereComplexRoomCheckFast); \
	DECLARE_FUNCTION(execRayCastSphereRoomCheckFast); \
	DECLARE_FUNCTION(execFixMovePointWhenIs); \
	DECLARE_FUNCTION(execClassToActorsArray); \
	DECLARE_FUNCTION(execGetNearFromActorsArray); \
	DECLARE_FUNCTION(execFindNearPointToWallSurface); \
	DECLARE_FUNCTION(execWalkableLineTrace); \
	DECLARE_FUNCTION(execRotatedCapsuleTraceSingle); \
	DECLARE_FUNCTION(execSmoothCharacterRotation); \
	DECLARE_FUNCTION(execCalculateQuadrant); \
	DECLARE_FUNCTION(execAngleInRange); \
	DECLARE_FUNCTION(execUpdateRotationValues); \
	DECLARE_FUNCTION(execUpdateMovementValuesLod); \
	DECLARE_FUNCTION(execUpdateAimingValues); \
	DECLARE_FUNCTION(execUpdateMovementValues); \
	DECLARE_FUNCTION(execCalcVelocityBlendFast); \
	DECLARE_FUNCTION(execCalculateRelativeAcceleration); \
	DECLARE_FUNCTION(execCalculateDiagonalScale); \
	DECLARE_FUNCTION(execCalcFootsOffset); \
	DECLARE_FUNCTION(execClimbingLedgeValidP1); \
	DECLARE_FUNCTION(execTryFindLedgeLine); \
	DECLARE_FUNCTION(execFindLedgePointStructure); \
	DECLARE_FUNCTION(execClassToIgnore); \
	DECLARE_FUNCTION(execNormalToVector); \
	DECLARE_FUNCTION(execFindLedgePoint); \
	DECLARE_FUNCTION(execDistancePointToLine); \
	DECLARE_FUNCTION(execClimbingFootIK); \
	DECLARE_FUNCTION(execCapsuleHaveRoomWithIgnoreTransform); \
	DECLARE_FUNCTION(execCapsuleHaveRoomWithIgnore); \
	DECLARE_FUNCTION(execSlerpToFast); \
	DECLARE_FUNCTION(execSlerpFast); \
	DECLARE_FUNCTION(execGetAngleBetween); \
	DECLARE_FUNCTION(execBouceOutInterpFast); \
	DECLARE_FUNCTION(execElasticOutInterpFast); \
	DECLARE_FUNCTION(execForceDestroyComponent); \
	DECLARE_FUNCTION(execGetPlayerCapsuleStartLocation); \
	DECLARE_FUNCTION(execHelpfulFunctionsSampleFunction);


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetClampedCurveValue); \
	DECLARE_FUNCTION(execBounceOutTimeFunction); \
	DECLARE_FUNCTION(execFindBaseJumpAwayPosition); \
	DECLARE_FUNCTION(execIsNotHidingInFoliage); \
	DECLARE_FUNCTION(execRayCastSphereComplexRoomCheckFast); \
	DECLARE_FUNCTION(execRayCastSphereRoomCheckFast); \
	DECLARE_FUNCTION(execFixMovePointWhenIs); \
	DECLARE_FUNCTION(execClassToActorsArray); \
	DECLARE_FUNCTION(execGetNearFromActorsArray); \
	DECLARE_FUNCTION(execFindNearPointToWallSurface); \
	DECLARE_FUNCTION(execWalkableLineTrace); \
	DECLARE_FUNCTION(execRotatedCapsuleTraceSingle); \
	DECLARE_FUNCTION(execSmoothCharacterRotation); \
	DECLARE_FUNCTION(execCalculateQuadrant); \
	DECLARE_FUNCTION(execAngleInRange); \
	DECLARE_FUNCTION(execUpdateRotationValues); \
	DECLARE_FUNCTION(execUpdateMovementValuesLod); \
	DECLARE_FUNCTION(execUpdateAimingValues); \
	DECLARE_FUNCTION(execUpdateMovementValues); \
	DECLARE_FUNCTION(execCalcVelocityBlendFast); \
	DECLARE_FUNCTION(execCalculateRelativeAcceleration); \
	DECLARE_FUNCTION(execCalculateDiagonalScale); \
	DECLARE_FUNCTION(execCalcFootsOffset); \
	DECLARE_FUNCTION(execClimbingLedgeValidP1); \
	DECLARE_FUNCTION(execTryFindLedgeLine); \
	DECLARE_FUNCTION(execFindLedgePointStructure); \
	DECLARE_FUNCTION(execClassToIgnore); \
	DECLARE_FUNCTION(execNormalToVector); \
	DECLARE_FUNCTION(execFindLedgePoint); \
	DECLARE_FUNCTION(execDistancePointToLine); \
	DECLARE_FUNCTION(execClimbingFootIK); \
	DECLARE_FUNCTION(execCapsuleHaveRoomWithIgnoreTransform); \
	DECLARE_FUNCTION(execCapsuleHaveRoomWithIgnore); \
	DECLARE_FUNCTION(execSlerpToFast); \
	DECLARE_FUNCTION(execSlerpFast); \
	DECLARE_FUNCTION(execGetAngleBetween); \
	DECLARE_FUNCTION(execBouceOutInterpFast); \
	DECLARE_FUNCTION(execElasticOutInterpFast); \
	DECLARE_FUNCTION(execForceDestroyComponent); \
	DECLARE_FUNCTION(execGetPlayerCapsuleStartLocation); \
	DECLARE_FUNCTION(execHelpfulFunctionsSampleFunction);


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHelpfulFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHelpfulFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UHelpfulFunctionsBPLibrary)


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_INCLASS \
private: \
	static void StaticRegisterNativesUHelpfulFunctionsBPLibrary(); \
	friend struct Z_Construct_UClass_UHelpfulFunctionsBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UHelpfulFunctionsBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/HelpfulFunctions"), NO_API) \
	DECLARE_SERIALIZER(UHelpfulFunctionsBPLibrary)


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHelpfulFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHelpfulFunctionsBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHelpfulFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHelpfulFunctionsBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHelpfulFunctionsBPLibrary(UHelpfulFunctionsBPLibrary&&); \
	NO_API UHelpfulFunctionsBPLibrary(const UHelpfulFunctionsBPLibrary&); \
public:


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHelpfulFunctionsBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHelpfulFunctionsBPLibrary(UHelpfulFunctionsBPLibrary&&); \
	NO_API UHelpfulFunctionsBPLibrary(const UHelpfulFunctionsBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHelpfulFunctionsBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHelpfulFunctionsBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHelpfulFunctionsBPLibrary)


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_66_PROLOG
#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_SPARSE_DATA \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_RPC_WRAPPERS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_INCLASS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_SPARSE_DATA \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_INCLASS_NO_PURE_DECLS \
	FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h_69_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class HelpfulFunctionsBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HELPFULFUNCTIONS_API UClass* StaticClass<class UHelpfulFunctionsBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestDoArmour_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_HelpfulFunctionsBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
