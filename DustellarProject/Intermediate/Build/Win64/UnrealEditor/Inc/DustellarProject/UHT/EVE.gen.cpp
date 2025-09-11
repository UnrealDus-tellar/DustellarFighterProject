// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EVE.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEVE() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVE();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AEVE_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AEVE *********************************************************************
void AEVE::StaticRegisterNativesAEVE()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEVE;
UClass* AEVE::GetPrivateStaticClass()
{
	using TClass = AEVE;
	if (!Z_Registration_Info_UClass_AEVE.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("EVE"),
			Z_Registration_Info_UClass_AEVE.InnerSingleton,
			StaticRegisterNativesAEVE,
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
	return Z_Registration_Info_UClass_AEVE.InnerSingleton;
}
UClass* Z_Construct_UClass_AEVE_NoRegister()
{
	return AEVE::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEVE_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ \xef\xbf\xbd\xe2\xba\xbb########################################################################################\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EVE.h" },
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ \xef\xbf\xbd\xe2\xba\xbb########################################################################################" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[] = {
		{ "Category", "Caemera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd  \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb0\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xba\xef\xbf\xbd\xef\xbf\xbd\xe7\xb9\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xc7\xbe\xee\xb5\xb5 \xef\xbf\xbd\xc3\xbe\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xe5\xb7\xb4\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc4\xab\xef\xbf\xbd\xde\xb6\xef\xbf\xbd  \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb0\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xd6\xba\xef\xbf\xbd\xef\xbf\xbd\xe7\xb9\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xe6\xb5\xb9\xef\xbf\xbd\xc7\xbe\xee\xb5\xb5 \xef\xbf\xbd\xc3\xbe\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xe5\xb7\xb4\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tpsCamComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@tpscamera \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd 3\xef\xbf\xbd\xef\xbf\xbd\xc4\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@tpscamera \xc4\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb8\xef\xbf\xbd 3\xef\xbf\xbd\xef\xbf\xbd\xc4\xaa\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_imc_EVE_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EVE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_LookUp_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EVE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_Turn_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EVE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_Move_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EVE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_Jump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/EVE.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_walkSpeed_MetaData[] = {
		{ "Category", "PlayerSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xc8\xb1\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xc8\xb1\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_runSpeed_MetaData[] = {
		{ "Category", "PlayerSetting" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_Run_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb7\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xde\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb7\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RHandCollision_MetaData[] = {
		{ "Category", "HandCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xd5\xbf\xef\xbf\xbd \xc4\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb6\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd######################################################\n//@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xd5\xbf\xef\xbf\xbd \xc4\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb6\xef\xbf\xbd\xef\xbf\xbd\xcc\xb4\xef\xbf\xbd######################################################\n@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LHandCollision_MetaData[] = {
		{ "Category", "HandCollision" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xde\xbc\xef\xbf\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/EVE.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xde\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_tpsCamComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_imc_EVE;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_LookUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_Turn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_Move;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_Jump;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_walkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_runSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_Run;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RHandCollision;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LHandCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEVE>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_springArmComp_MetaData), NewProp_springArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_tpsCamComp = { "tpsCamComp", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, tpsCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tpsCamComp_MetaData), NewProp_tpsCamComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_imc_EVE = { "imc_EVE", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, imc_EVE), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_imc_EVE_MetaData), NewProp_imc_EVE_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_ia_LookUp = { "ia_LookUp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, ia_LookUp), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_LookUp_MetaData), NewProp_ia_LookUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_ia_Turn = { "ia_Turn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, ia_Turn), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_Turn_MetaData), NewProp_ia_Turn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_ia_Move = { "ia_Move", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, ia_Move), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_Move_MetaData), NewProp_ia_Move_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_ia_Jump = { "ia_Jump", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, ia_Jump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_Jump_MetaData), NewProp_ia_Jump_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_walkSpeed = { "walkSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, walkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_walkSpeed_MetaData), NewProp_walkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_runSpeed = { "runSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, runSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_runSpeed_MetaData), NewProp_runSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_ia_Run = { "ia_Run", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, ia_Run), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_Run_MetaData), NewProp_ia_Run_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_RHandCollision = { "RHandCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, RHandCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RHandCollision_MetaData), NewProp_RHandCollision_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEVE_Statics::NewProp_LHandCollision = { "LHandCollision", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEVE, LHandCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LHandCollision_MetaData), NewProp_LHandCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEVE_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_springArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_tpsCamComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_imc_EVE,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_ia_LookUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_ia_Turn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_ia_Move,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_ia_Jump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_walkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_runSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_ia_Run,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_RHandCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEVE_Statics::NewProp_LHandCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEVE_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEVE_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEVE_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEVE_Statics::ClassParams = {
	&AEVE::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEVE_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEVE_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEVE_Statics::Class_MetaDataParams), Z_Construct_UClass_AEVE_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEVE()
{
	if (!Z_Registration_Info_UClass_AEVE.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEVE.OuterSingleton, Z_Construct_UClass_AEVE_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEVE.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEVE);
AEVE::~AEVE() {}
// ********** End Class AEVE ***********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEVE, AEVE::StaticClass, TEXT("AEVE"), &Z_Registration_Info_UClass_AEVE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEVE), 592836342U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h__Script_DustellarProject_2784450960(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_EVE_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
