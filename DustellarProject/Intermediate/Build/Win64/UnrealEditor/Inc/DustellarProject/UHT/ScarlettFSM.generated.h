// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScarlettFSM.h"

#ifdef DUSTELLARPROJECT_ScarlettFSM_generated_h
#error "ScarlettFSM.generated.h already included, missing '#pragma once' in ScarlettFSM.h"
#endif
#define DUSTELLARPROJECT_ScarlettFSM_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UScarlettFSM *************************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettFSM_NoRegister();

#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUScarlettFSM(); \
	friend struct Z_Construct_UClass_UScarlettFSM_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettFSM_NoRegister(); \
public: \
	DECLARE_CLASS2(UScarlettFSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_UScarlettFSM_NoRegister) \
	DECLARE_SERIALIZER(UScarlettFSM)


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UScarlettFSM(UScarlettFSM&&) = delete; \
	UScarlettFSM(const UScarlettFSM&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UScarlettFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UScarlettFSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UScarlettFSM) \
	NO_API virtual ~UScarlettFSM();


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h_20_PROLOG
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UScarlettFSM;

// ********** End Class UScarlettFSM ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h

// ********** Begin Enum EScarlettState ************************************************************
#define FOREACH_ENUM_ESCARLETTSTATE(op) \
	op(EScarlettState::Idle) \
	op(EScarlettState::Move) \
	op(EScarlettState::Attack) \
	op(EScarlettState::AttackDelay) \
	op(EScarlettState::Hit) \
	op(EScarlettState::Die) 

enum class EScarlettState : uint8;
template<> struct TIsUEnumClass<EScarlettState> { enum { Value = true }; };
template<> DUSTELLARPROJECT_API UEnum* StaticEnum<EScarlettState>();
// ********** End Enum EScarlettState **************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
