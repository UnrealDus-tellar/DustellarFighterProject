// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EVEAnim.h"

#ifdef DUSTELLARPROJECT_EVEAnim_generated_h
#error "EVEAnim.generated.h already included, missing '#pragma once' in EVEAnim.h"
#endif
#define DUSTELLARPROJECT_EVEAnim_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UEVEAnim *****************************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UEVEAnim_NoRegister();

#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEVEAnim(); \
	friend struct Z_Construct_UClass_UEVEAnim_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UEVEAnim_NoRegister(); \
public: \
	DECLARE_CLASS2(UEVEAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_UEVEAnim_NoRegister) \
	DECLARE_SERIALIZER(UEVEAnim)


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEVEAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UEVEAnim(UEVEAnim&&) = delete; \
	UEVEAnim(const UEVEAnim&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEVEAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEVEAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEVEAnim) \
	NO_API virtual ~UEVEAnim();


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h_12_PROLOG
#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UEVEAnim;

// ********** End Class UEVEAnim *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
