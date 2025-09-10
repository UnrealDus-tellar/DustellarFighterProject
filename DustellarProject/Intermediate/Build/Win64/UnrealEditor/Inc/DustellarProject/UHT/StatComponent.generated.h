// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/StatComponent.h"

#ifdef DUSTELLARPROJECT_StatComponent_generated_h
#error "StatComponent.generated.h already included, missing '#pragma once' in StatComponent.h"
#endif
#define DUSTELLARPROJECT_StatComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UStatComponent ***********************************************************
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRestoreHP); \
	DECLARE_FUNCTION(execApplyDamage);


DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();

#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStatComponent(); \
	friend struct Z_Construct_UClass_UStatComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UStatComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UStatComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_UStatComponent_NoRegister) \
	DECLARE_SERIALIZER(UStatComponent)


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UStatComponent(UStatComponent&&) = delete; \
	UStatComponent(const UStatComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStatComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStatComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStatComponent) \
	NO_API virtual ~UStatComponent();


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_10_PROLOG
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UStatComponent;

// ********** End Class UStatComponent *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
