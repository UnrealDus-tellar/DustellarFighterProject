// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScarlettAnim.h"

#ifdef DUSTELLARPROJECT_ScarlettAnim_generated_h
#error "ScarlettAnim.generated.h already included, missing '#pragma once' in ScarlettAnim.h"
#endif
#define DUSTELLARPROJECT_ScarlettAnim_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScarlettAnim ************************************************************
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAnimNotify_DieEnd); \
	DECLARE_FUNCTION(execAnimNotify_EndAttack); \
	DECLARE_FUNCTION(execStopCurrentMontage); \
	DECLARE_FUNCTION(execPauseCurrentMontage);


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_CALLBACK_WRAPPERS
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettAnim_NoRegister();

#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScarlettAnim(); \
	friend struct Z_Construct_UClass_UScarlettAnim_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettAnim_NoRegister(); \
public: \
	DECLARE_CLASS2(UScarlettAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_UScarlettAnim_NoRegister) \
	DECLARE_SERIALIZER(UScarlettAnim)


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UScarlettAnim(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScarlettAnim(UScarlettAnim&&) = delete; \
	UScarlettAnim(const UScarlettAnim&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScarlettAnim); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScarlettAnim); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UScarlettAnim) \
	NO_API virtual ~UScarlettAnim();


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_14_PROLOG
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_CALLBACK_WRAPPERS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScarlettAnim;

// ********** End Class UScarlettAnim **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
