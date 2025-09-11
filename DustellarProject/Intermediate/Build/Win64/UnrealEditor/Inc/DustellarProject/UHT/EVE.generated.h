// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EVE.h"

#ifdef DUSTELLARPROJECT_EVE_generated_h
#error "EVE.generated.h already included, missing '#pragma once' in EVE.h"
#endif
#define DUSTELLARPROJECT_EVE_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AEVE *********************************************************************
#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHandOverlap);


DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVE_NoRegister();

#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEVE(); \
	friend struct Z_Construct_UClass_AEVE_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVE_NoRegister(); \
public: \
	DECLARE_CLASS2(AEVE, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_AEVE_NoRegister) \
	DECLARE_SERIALIZER(AEVE)


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEVE(AEVE&&) = delete; \
	AEVE(const AEVE&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEVE); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEVE); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEVE) \
	NO_API virtual ~AEVE();


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_18_PROLOG
#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_INCLASS_NO_PURE_DECLS \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEVE;

// ********** End Class AEVE ***********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
