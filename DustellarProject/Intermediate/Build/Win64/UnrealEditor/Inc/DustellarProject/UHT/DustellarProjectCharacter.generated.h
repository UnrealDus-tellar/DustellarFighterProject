// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DustellarProjectCharacter.h"

#ifdef DUSTELLARPROJECT_DustellarProjectCharacter_generated_h
#error "DustellarProjectCharacter.generated.h already included, missing '#pragma once' in DustellarProjectCharacter.h"
#endif
#define DUSTELLARPROJECT_DustellarProjectCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ADustellarProjectCharacter ***********************************************
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHandOverlap); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


DUSTELLARPROJECT_API UClass* Z_Construct_UClass_ADustellarProjectCharacter_NoRegister();

#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADustellarProjectCharacter(); \
	friend struct Z_Construct_UClass_ADustellarProjectCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend DUSTELLARPROJECT_API UClass* Z_Construct_UClass_ADustellarProjectCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ADustellarProjectCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DustellarProject"), Z_Construct_UClass_ADustellarProjectCharacter_NoRegister) \
	DECLARE_SERIALIZER(ADustellarProjectCharacter)


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ADustellarProjectCharacter(ADustellarProjectCharacter&&) = delete; \
	ADustellarProjectCharacter(const ADustellarProjectCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADustellarProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADustellarProjectCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ADustellarProjectCharacter) \
	NO_API virtual ~ADustellarProjectCharacter();


#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_22_PROLOG
#define FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_INCLASS_NO_PURE_DECLS \
	FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ADustellarProjectCharacter;

// ********** End Class ADustellarProjectCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_DustellarProjectCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
