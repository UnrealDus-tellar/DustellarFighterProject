// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EVEGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEVEGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVEGameModeBase();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVEGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEVEGameModeBase *********************************************************
void AEVEGameModeBase::StaticRegisterNativesAEVEGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEVEGameModeBase;
UClass* AEVEGameModeBase::GetPrivateStaticClass()
{
	using TClass = AEVEGameModeBase;
	if (!Z_Registration_Info_UClass_AEVEGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EVEGameModeBase"),
			Z_Registration_Info_UClass_AEVEGameModeBase.InnerSingleton,
			StaticRegisterNativesAEVEGameModeBase,
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
	return Z_Registration_Info_UClass_AEVEGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AEVEGameModeBase_NoRegister()
{
	return AEVEGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEVEGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EVEGameModeBase.h" },
		{ "ModuleRelativePath", "Public/EVEGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEVEGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AEVEGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEVEGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEVEGameModeBase_Statics::ClassParams = {
	&AEVEGameModeBase::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEVEGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AEVEGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEVEGameModeBase()
{
	if (!Z_Registration_Info_UClass_AEVEGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEVEGameModeBase.OuterSingleton, Z_Construct_UClass_AEVEGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEVEGameModeBase.OuterSingleton;
}
AEVEGameModeBase::AEVEGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEVEGameModeBase);
AEVEGameModeBase::~AEVEGameModeBase() {}
// ********** End Class AEVEGameModeBase ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEVEGameModeBase, AEVEGameModeBase::StaticClass, TEXT("AEVEGameModeBase"), &Z_Registration_Info_UClass_AEVEGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEVEGameModeBase), 1546681031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h__Script_DustellarProject_3594300324(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVEGameModeBase_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
