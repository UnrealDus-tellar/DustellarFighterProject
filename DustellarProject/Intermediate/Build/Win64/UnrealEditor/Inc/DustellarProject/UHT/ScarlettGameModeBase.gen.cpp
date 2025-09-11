// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScarlettGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScarlettGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlettGameModeBase();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlettGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AScarlettGameModeBase ****************************************************
void AScarlettGameModeBase::StaticRegisterNativesAScarlettGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AScarlettGameModeBase;
UClass* AScarlettGameModeBase::GetPrivateStaticClass()
{
	using TClass = AScarlettGameModeBase;
	if (!Z_Registration_Info_UClass_AScarlettGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScarlettGameModeBase"),
			Z_Registration_Info_UClass_AScarlettGameModeBase.InnerSingleton,
			StaticRegisterNativesAScarlettGameModeBase,
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
	return Z_Registration_Info_UClass_AScarlettGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AScarlettGameModeBase_NoRegister()
{
	return AScarlettGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AScarlettGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ScarlettGameModeBase.h" },
		{ "ModuleRelativePath", "Public/ScarlettGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScarlettGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AScarlettGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlettGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScarlettGameModeBase_Statics::ClassParams = {
	&AScarlettGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlettGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AScarlettGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScarlettGameModeBase()
{
	if (!Z_Registration_Info_UClass_AScarlettGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScarlettGameModeBase.OuterSingleton, Z_Construct_UClass_AScarlettGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScarlettGameModeBase.OuterSingleton;
}
AScarlettGameModeBase::AScarlettGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScarlettGameModeBase);
AScarlettGameModeBase::~AScarlettGameModeBase() {}
// ********** End Class AScarlettGameModeBase ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettGameModeBase_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScarlettGameModeBase, AScarlettGameModeBase::StaticClass, TEXT("AScarlettGameModeBase"), &Z_Registration_Info_UClass_AScarlettGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScarlettGameModeBase), 1912684036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettGameModeBase_h__Script_DustellarProject_2771619996(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettGameModeBase_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettGameModeBase_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
