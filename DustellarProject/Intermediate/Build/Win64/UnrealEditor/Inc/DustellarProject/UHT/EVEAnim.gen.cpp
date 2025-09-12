// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EVEAnim.h"
#include "Components/SkeletalMeshComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEVEAnim() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UEVEAnim();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UEVEAnim_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UEVEAnim *****************************************************************
void UEVEAnim::StaticRegisterNativesUEVEAnim()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UEVEAnim;
UClass* UEVEAnim::GetPrivateStaticClass()
{
	using TClass = UEVEAnim;
	if (!Z_Registration_Info_UClass_UEVEAnim.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EVEAnim"),
			Z_Registration_Info_UClass_UEVEAnim.InnerSingleton,
			StaticRegisterNativesUEVEAnim,
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
	return Z_Registration_Info_UClass_UEVEAnim.InnerSingleton;
}
UClass* Z_Construct_UClass_UEVEAnim_NoRegister()
{
	return UEVEAnim::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UEVEAnim_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "EVEAnim.h" },
		{ "ModuleRelativePath", "Public/EVEAnim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[] = {
		{ "Category", "EVEAnim" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EVEAnim.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEVEAnim>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UEVEAnim_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEVEAnim, speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speed_MetaData), NewProp_speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEVEAnim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEVEAnim_Statics::NewProp_speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEVEAnim_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEVEAnim_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEVEAnim_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEVEAnim_Statics::ClassParams = {
	&UEVEAnim::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEVEAnim_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEVEAnim_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEVEAnim_Statics::Class_MetaDataParams), Z_Construct_UClass_UEVEAnim_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEVEAnim()
{
	if (!Z_Registration_Info_UClass_UEVEAnim.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEVEAnim.OuterSingleton, Z_Construct_UClass_UEVEAnim_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEVEAnim.OuterSingleton;
}
UEVEAnim::UEVEAnim(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEVEAnim);
UEVEAnim::~UEVEAnim() {}
// ********** End Class UEVEAnim *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEVEAnim, UEVEAnim::StaticClass, TEXT("UEVEAnim"), &Z_Registration_Info_UClass_UEVEAnim, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEVEAnim), 74109602U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h__Script_DustellarProject_261433897(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEAnim_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
