// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Component/AttackComponent.h"

#ifdef DUSTELLARPROJECT_AttackComponent_generated_h
#error "AttackComponent.generated.h already included, missing '#pragma once' in AttackComponent.h"
#endif
#define DUSTELLARPROJECT_AttackComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UAttackComponent *********************************************************
#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUseSkill); \
	DECLARE_FUNCTION(execResetCombo);


DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();

#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttackComponent(); \
	friend struct Z_Construct_UClass_UAttackComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttackComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_UAttackComponent_NoRegister) \
	DECLARE_SERIALIZER(UAttackComponent)


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttackComponent(UAttackComponent&&) = delete; \
	UAttackComponent(const UAttackComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttackComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttackComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAttackComponent) \
	NO_API virtual ~UAttackComponent();


#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_27_PROLOG
#define FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttackComponent;

// ********** End Class UAttackComponent ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h

// ********** Begin Enum EAttackInput **************************************************************
#define FOREACH_ENUM_EATTACKINPUT(op) \
	op(EAttackInput::None) \
	op(EAttackInput::LeftClick) \
	op(EAttackInput::RightClick) \
	op(EAttackInput::LeftHold) \
	op(EAttackInput::RightHold) 

enum class EAttackInput : uint8;
template<> struct TIsUEnumClass<EAttackInput> { enum { Value = true }; };
template<> DUSTELLARPROJECT_API UEnum* StaticEnum<EAttackInput>();
// ********** End Enum EAttackInput ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
