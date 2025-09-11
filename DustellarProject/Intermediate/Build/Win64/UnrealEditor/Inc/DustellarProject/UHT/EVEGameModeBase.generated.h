// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EVEGameModeBase.h"

#ifdef DUSTELLARPROJECT_EVEGameModeBase_generated_h
#error "EVEGameModeBase.generated.h already included, missing '#pragma once' in EVEGameModeBase.h"
#endif
#define DUSTELLARPROJECT_EVEGameModeBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEVEGameModeBase *********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVEGameModeBase_NoRegister();

#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEVEGameModeBase(); \
	friend struct Z_Construct_UClass_AEVEGameModeBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVEGameModeBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AEVEGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_AEVEGameModeBase_NoRegister) \
	DECLARE_SERIALIZER(AEVEGameModeBase)


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEVEGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEVEGameModeBase(AEVEGameModeBase&&) = delete; \
	AEVEGameModeBase(const AEVEGameModeBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEVEGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEVEGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEVEGameModeBase) \
	NO_API virtual ~AEVEGameModeBase();


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h_12_PROLOG
#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEVEGameModeBase;

// ********** End Class AEVEGameModeBase ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
