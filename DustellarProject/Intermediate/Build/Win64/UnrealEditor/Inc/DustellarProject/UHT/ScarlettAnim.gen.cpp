// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScarlettAnim.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScarlettAnim() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettAnim();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettAnim_NoRegister();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettFSM_NoRegister();
DUSTELLARPROJECT_API UEnum* Z_Construct_UEnum_DustellarProject_EScarlettState();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UScarlettAnim Function AnimNotify_DieEnd *********************************
struct Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScarlettAnim, nullptr, "AnimNotify_DieEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScarlettAnim::execAnimNotify_DieEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_DieEnd();
	P_NATIVE_END;
}
// ********** End Class UScarlettAnim Function AnimNotify_DieEnd ***********************************

// ********** Begin Class UScarlettAnim Function AnimNotify_EndAttack ******************************
struct Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScarlettAnim, nullptr, "AnimNotify_EndAttack", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScarlettAnim::execAnimNotify_EndAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AnimNotify_EndAttack();
	P_NATIVE_END;
}
// ********** End Class UScarlettAnim Function AnimNotify_EndAttack ********************************

// ********** Begin Class UScarlettAnim Function PauseCurrentMontage *******************************
struct Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScarlettAnim, nullptr, "PauseCurrentMontage", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScarlettAnim::execPauseCurrentMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PauseCurrentMontage();
	P_NATIVE_END;
}
// ********** End Class UScarlettAnim Function PauseCurrentMontage *********************************

// ********** Begin Class UScarlettAnim Function PlayAttackAnim ************************************
struct ScarlettAnim_eventPlayAttackAnim_Parms
{
	FName sectionName;
};
static FName NAME_UScarlettAnim_PlayAttackAnim = FName(TEXT("PlayAttackAnim"));
void UScarlettAnim::PlayAttackAnim(FName sectionName)
{
	ScarlettAnim_eventPlayAttackAnim_Parms Parms;
	Parms.sectionName=sectionName;
	UFunction* Func = FindFunctionChecked(NAME_UScarlettAnim_PlayAttackAnim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_sectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScarlettAnim_eventPlayAttackAnim_Parms, sectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::NewProp_sectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScarlettAnim, nullptr, "PlayAttackAnim", Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::PropPointers), sizeof(ScarlettAnim_eventPlayAttackAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ScarlettAnim_eventPlayAttackAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UScarlettAnim Function PlayAttackAnim **************************************

// ********** Begin Class UScarlettAnim Function PlayHitAnim ***************************************
struct ScarlettAnim_eventPlayHitAnim_Parms
{
	FName sectionName;
};
static FName NAME_UScarlettAnim_PlayHitAnim = FName(TEXT("PlayHitAnim"));
void UScarlettAnim::PlayHitAnim(FName sectionName)
{
	ScarlettAnim_eventPlayHitAnim_Parms Parms;
	Parms.sectionName=sectionName;
	UFunction* Func = FindFunctionChecked(NAME_UScarlettAnim_PlayHitAnim);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_sectionName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::NewProp_sectionName = { "sectionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScarlettAnim_eventPlayHitAnim_Parms, sectionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::NewProp_sectionName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScarlettAnim, nullptr, "PlayHitAnim", Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::PropPointers), sizeof(ScarlettAnim_eventPlayHitAnim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(ScarlettAnim_eventPlayHitAnim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScarlettAnim_PlayHitAnim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScarlettAnim_PlayHitAnim_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UScarlettAnim Function PlayHitAnim *****************************************

// ********** Begin Class UScarlettAnim Function StopCurrentMontage ********************************
struct Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics
{
	struct ScarlettAnim_eventStopCurrentMontage_Parms
	{
		float BlendOutTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "FSMEvent" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "CPP_Default_BlendOutTime", "0.100000" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ScarlettAnim_eventStopCurrentMontage_Parms, BlendOutTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::NewProp_BlendOutTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UScarlettAnim, nullptr, "StopCurrentMontage", Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::ScarlettAnim_eventStopCurrentMontage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::ScarlettAnim_eventStopCurrentMontage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UScarlettAnim::execStopCurrentMontage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCurrentMontage(Z_Param_BlendOutTime);
	P_NATIVE_END;
}
// ********** End Class UScarlettAnim Function StopCurrentMontage **********************************

// ********** Begin Class UScarlettAnim ************************************************************
void UScarlettAnim::StaticRegisterNativesUScarlettAnim()
{
	UClass* Class = UScarlettAnim::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AnimNotify_DieEnd", &UScarlettAnim::execAnimNotify_DieEnd },
		{ "AnimNotify_EndAttack", &UScarlettAnim::execAnimNotify_EndAttack },
		{ "PauseCurrentMontage", &UScarlettAnim::execPauseCurrentMontage },
		{ "StopCurrentMontage", &UScarlettAnim::execStopCurrentMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UScarlettAnim;
UClass* UScarlettAnim::GetPrivateStaticClass()
{
	using TClass = UScarlettAnim;
	if (!Z_Registration_Info_UClass_UScarlettAnim.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScarlettAnim"),
			Z_Registration_Info_UClass_UScarlettAnim.InnerSingleton,
			StaticRegisterNativesUScarlettAnim,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UScarlettAnim.InnerSingleton;
}
UClass* Z_Construct_UClass_UScarlettAnim_NoRegister()
{
	return UScarlettAnim::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScarlettAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ScarlettAnim.h" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_animState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScarlettFSMRef_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAttackPlay_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDieDone_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettAnim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_animState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_animState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ScarlettFSMRef;
	static void NewProp_bAttackPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAttackPlay;
	static void NewProp_bDieDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDieDone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UScarlettAnim_AnimNotify_DieEnd, "AnimNotify_DieEnd" }, // 3924574113
		{ &Z_Construct_UFunction_UScarlettAnim_AnimNotify_EndAttack, "AnimNotify_EndAttack" }, // 3675296015
		{ &Z_Construct_UFunction_UScarlettAnim_PauseCurrentMontage, "PauseCurrentMontage" }, // 848050772
		{ &Z_Construct_UFunction_UScarlettAnim_PlayAttackAnim, "PlayAttackAnim" }, // 323834064
		{ &Z_Construct_UFunction_UScarlettAnim_PlayHitAnim, "PlayHitAnim" }, // 1230322519
		{ &Z_Construct_UFunction_UScarlettAnim_StopCurrentMontage, "StopCurrentMontage" }, // 378317404
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScarlettAnim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScarlettAnim_Statics::NewProp_animState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScarlettAnim_Statics::NewProp_animState = { "animState", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettAnim, animState), Z_Construct_UEnum_DustellarProject_EScarlettState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_animState_MetaData), NewProp_animState_MetaData) }; // 994416103
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScarlettAnim_Statics::NewProp_ScarlettFSMRef = { "ScarlettFSMRef", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettAnim, ScarlettFSMRef), Z_Construct_UClass_UScarlettFSM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScarlettFSMRef_MetaData), NewProp_ScarlettFSMRef_MetaData) };
void Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bAttackPlay_SetBit(void* Obj)
{
	((UScarlettAnim*)Obj)->bAttackPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bAttackPlay = { "bAttackPlay", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScarlettAnim), &Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bAttackPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAttackPlay_MetaData), NewProp_bAttackPlay_MetaData) };
void Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bDieDone_SetBit(void* Obj)
{
	((UScarlettAnim*)Obj)->bDieDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bDieDone = { "bDieDone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UScarlettAnim), &Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bDieDone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDieDone_MetaData), NewProp_bDieDone_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScarlettAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettAnim_Statics::NewProp_animState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettAnim_Statics::NewProp_animState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettAnim_Statics::NewProp_ScarlettFSMRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bAttackPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettAnim_Statics::NewProp_bDieDone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettAnim_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScarlettAnim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettAnim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScarlettAnim_Statics::ClassParams = {
	&UScarlettAnim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UScarlettAnim_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettAnim_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UScarlettAnim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScarlettAnim()
{
	if (!Z_Registration_Info_UClass_UScarlettAnim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScarlettAnim.OuterSingleton, Z_Construct_UClass_UScarlettAnim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScarlettAnim.OuterSingleton;
}
UScarlettAnim::UScarlettAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScarlettAnim);
UScarlettAnim::~UScarlettAnim() {}
// ********** End Class UScarlettAnim **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScarlettAnim, UScarlettAnim::StaticClass, TEXT("UScarlettAnim"), &Z_Registration_Info_UClass_UScarlettAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScarlettAnim), 795362904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h__Script_DustellarProject_2541010226(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettAnim_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
