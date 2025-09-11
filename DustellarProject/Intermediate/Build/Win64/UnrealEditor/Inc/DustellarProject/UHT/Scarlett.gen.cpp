// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scarlett.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScarlett() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlett();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlett_NoRegister();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UScarlettFSM_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AScarlett ****************************************************************
void AScarlett::StaticRegisterNativesAScarlett()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AScarlett;
UClass* AScarlett::GetPrivateStaticClass()
{
	using TClass = AScarlett;
	if (!Z_Registration_Info_UClass_AScarlett.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Scarlett"),
			Z_Registration_Info_UClass_AScarlett.InnerSingleton,
			StaticRegisterNativesAScarlett,
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
	return Z_Registration_Info_UClass_AScarlett.InnerSingleton;
}
UClass* Z_Construct_UClass_AScarlett_NoRegister()
{
	return AScarlett::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AScarlett_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Scarlett.h" },
		{ "ModuleRelativePath", "Public/Scarlett.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_fsm_MetaData[] = {
		{ "Category", "FSMComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Scarlett.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_fsm;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScarlett>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlett_Statics::NewProp_fsm = { "fsm", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlett, fsm), Z_Construct_UClass_UScarlettFSM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_fsm_MetaData), NewProp_fsm_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScarlett_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlett_Statics::NewProp_fsm,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlett_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScarlett_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlett_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScarlett_Statics::ClassParams = {
	&AScarlett::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AScarlett_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AScarlett_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlett_Statics::Class_MetaDataParams), Z_Construct_UClass_AScarlett_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScarlett()
{
	if (!Z_Registration_Info_UClass_AScarlett.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScarlett.OuterSingleton, Z_Construct_UClass_AScarlett_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScarlett.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScarlett);
AScarlett::~AScarlett() {}
// ********** End Class AScarlett ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Scarlett_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScarlett, AScarlett::StaticClass, TEXT("AScarlett"), &Z_Registration_Info_UClass_AScarlett, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScarlett), 3083401046U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Scarlett_h__Script_DustellarProject_4292439991(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Scarlett_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Scarlett_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
