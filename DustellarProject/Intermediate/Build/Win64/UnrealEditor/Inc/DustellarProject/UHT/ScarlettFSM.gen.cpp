// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScarlettFSM.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScarlettFSM() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_ADustellarProjectCharacter_NoRegister();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlett_NoRegister();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettAnim_NoRegister();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettFSM();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettFSM_NoRegister();
DUSTELLARPROJECT_API UEnum* Z_Construct_UEnum_DustellarProject_EScarlettState();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EScarlettState ************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScarlettState;
static UEnum* EScarlettState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EScarlettState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EScarlettState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DustellarProject_EScarlettState, (UObject*)Z_Construct_UPackage__Script_DustellarProject(), TEXT("EScarlettState"));
	}
	return Z_Registration_Info_UEnum_EScarlettState.OuterSingleton;
}
template<> DUSTELLARPROJECT_API UEnum* StaticEnum<EScarlettState>()
{
	return EScarlettState_StaticEnum();
}
struct Z_Construct_UEnum_DustellarProject_EScarlettState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Attack.Name", "EScarlettState::Attack" },
		{ "AttackDelay.Name", "EScarlettState::AttackDelay" },
		{ "BlueprintType", "true" },
		{ "Die.Name", "EScarlettState::Die" },
		{ "Hit.Name", "EScarlettState::Hit" },
		{ "Idle.Name", "EScarlettState::Idle" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
		{ "Move.Name", "EScarlettState::Move" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EScarlettState::Idle", (int64)EScarlettState::Idle },
		{ "EScarlettState::Move", (int64)EScarlettState::Move },
		{ "EScarlettState::Attack", (int64)EScarlettState::Attack },
		{ "EScarlettState::AttackDelay", (int64)EScarlettState::AttackDelay },
		{ "EScarlettState::Hit", (int64)EScarlettState::Hit },
		{ "EScarlettState::Die", (int64)EScarlettState::Die },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DustellarProject_EScarlettState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DustellarProject,
	nullptr,
	"EScarlettState",
	"EScarlettState",
	Z_Construct_UEnum_DustellarProject_EScarlettState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DustellarProject_EScarlettState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DustellarProject_EScarlettState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DustellarProject_EScarlettState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DustellarProject_EScarlettState()
{
	if (!Z_Registration_Info_UEnum_EScarlettState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScarlettState.InnerSingleton, Z_Construct_UEnum_DustellarProject_EScarlettState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EScarlettState.InnerSingleton;
}
// ********** End Enum EScarlettState **************************************************************

// ********** Begin Class UScarlettFSM *************************************************************
void UScarlettFSM::StaticRegisterNativesUScarlettFSM()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UScarlettFSM;
UClass* UScarlettFSM::GetPrivateStaticClass()
{
	using TClass = UScarlettFSM;
	if (!Z_Registration_Info_UClass_UScarlettFSM.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScarlettFSM"),
			Z_Registration_Info_UClass_UScarlettFSM.InnerSingleton,
			StaticRegisterNativesUScarlettFSM,
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
	return Z_Registration_Info_UClass_UScarlettFSM.InnerSingleton;
}
UClass* Z_Construct_UClass_UScarlettFSM_NoRegister()
{
	return UScarlettFSM::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UScarlettFSM_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ScarlettFSM.h" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScarlettState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hp_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_detectRange_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_attackRange_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_anim_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd : \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_me_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/ScarlettFSM.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xce\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScarlettState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScarlettState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_hp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_detectRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_attackRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_anim;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_me;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScarlettFSM>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_ScarlettState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_ScarlettState = { "ScarlettState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, ScarlettState), Z_Construct_UEnum_DustellarProject_EScarlettState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScarlettState_MetaData), NewProp_ScarlettState_MetaData) }; // 994416103
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_hp = { "hp", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, hp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hp_MetaData), NewProp_hp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_detectRange = { "detectRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, detectRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_detectRange_MetaData), NewProp_detectRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_attackRange = { "attackRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, attackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_attackRange_MetaData), NewProp_attackRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, target), Z_Construct_UClass_ADustellarProjectCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_anim = { "anim", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, anim), Z_Construct_UClass_UScarlettAnim_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_anim_MetaData), NewProp_anim_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UScarlettFSM_Statics::NewProp_me = { "me", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UScarlettFSM, me), Z_Construct_UClass_AScarlett_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_me_MetaData), NewProp_me_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScarlettFSM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_ScarlettState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_ScarlettState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_hp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_detectRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_attackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_anim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScarlettFSM_Statics::NewProp_me,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettFSM_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UScarlettFSM_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettFSM_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScarlettFSM_Statics::ClassParams = {
	&UScarlettFSM::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UScarlettFSM_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettFSM_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScarlettFSM_Statics::Class_MetaDataParams), Z_Construct_UClass_UScarlettFSM_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScarlettFSM()
{
	if (!Z_Registration_Info_UClass_UScarlettFSM.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScarlettFSM.OuterSingleton, Z_Construct_UClass_UScarlettFSM_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScarlettFSM.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScarlettFSM);
UScarlettFSM::~UScarlettFSM() {}
// ********** End Class UScarlettFSM ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h__Script_DustellarProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EScarlettState_StaticEnum, TEXT("EScarlettState"), &Z_Registration_Info_UEnum_EScarlettState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 994416103U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScarlettFSM, UScarlettFSM::StaticClass, TEXT("UScarlettFSM"), &Z_Registration_Info_UClass_UScarlettFSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScarlettFSM), 1931670894U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h__Script_DustellarProject_2277127517(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h__Script_DustellarProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettFSM_h__Script_DustellarProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
