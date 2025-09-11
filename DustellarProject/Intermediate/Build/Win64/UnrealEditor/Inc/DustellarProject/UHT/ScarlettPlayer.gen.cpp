// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ScarlettPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeScarlettPlayer() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlettPlayer();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_AScarlettPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AScarlettPlayer **********************************************************
void AScarlettPlayer::StaticRegisterNativesAScarlettPlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AScarlettPlayer;
UClass* AScarlettPlayer::GetPrivateStaticClass()
{
	using TClass = AScarlettPlayer;
	if (!Z_Registration_Info_UClass_AScarlettPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ScarlettPlayer"),
			Z_Registration_Info_UClass_AScarlettPlayer.InnerSingleton,
			StaticRegisterNativesAScarlettPlayer,
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
	return Z_Registration_Info_UClass_AScarlettPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_AScarlettPlayer_NoRegister()
{
	return AScarlettPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AScarlettPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ScarlettPlayer.h" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_springArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tpsCamComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UCameraComponent\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCameraComponent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_imc_Player_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_PlayerMove_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_PlayerTurn_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_PlayerLookUp_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_PlayerJump_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ia_PlayerAttack_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/ScarlettPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_springArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_tpsCamComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_imc_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_PlayerMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_PlayerTurn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_PlayerLookUp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_PlayerJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ia_PlayerAttack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScarlettPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_springArmComp = { "springArmComp", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, springArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_springArmComp_MetaData), NewProp_springArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_tpsCamComp = { "tpsCamComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, tpsCamComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tpsCamComp_MetaData), NewProp_tpsCamComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_imc_Player = { "imc_Player", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, imc_Player), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_imc_Player_MetaData), NewProp_imc_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerMove = { "ia_PlayerMove", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, ia_PlayerMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_PlayerMove_MetaData), NewProp_ia_PlayerMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerTurn = { "ia_PlayerTurn", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, ia_PlayerTurn), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_PlayerTurn_MetaData), NewProp_ia_PlayerTurn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerLookUp = { "ia_PlayerLookUp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, ia_PlayerLookUp), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_PlayerLookUp_MetaData), NewProp_ia_PlayerLookUp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerJump = { "ia_PlayerJump", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, ia_PlayerJump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_PlayerJump_MetaData), NewProp_ia_PlayerJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerAttack = { "ia_PlayerAttack", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScarlettPlayer, ia_PlayerAttack), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ia_PlayerAttack_MetaData), NewProp_ia_PlayerAttack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScarlettPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_springArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_tpsCamComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_imc_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerLookUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScarlettPlayer_Statics::NewProp_ia_PlayerAttack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlettPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AScarlettPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlettPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AScarlettPlayer_Statics::ClassParams = {
	&AScarlettPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AScarlettPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AScarlettPlayer_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScarlettPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AScarlettPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AScarlettPlayer()
{
	if (!Z_Registration_Info_UClass_AScarlettPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScarlettPlayer.OuterSingleton, Z_Construct_UClass_AScarlettPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AScarlettPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AScarlettPlayer);
AScarlettPlayer::~AScarlettPlayer() {}
// ********** End Class AScarlettPlayer ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettPlayer_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AScarlettPlayer, AScarlettPlayer::StaticClass, TEXT("AScarlettPlayer"), &Z_Registration_Info_UClass_AScarlettPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScarlettPlayer), 1064099002U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettPlayer_h__Script_DustellarProject_1265412052(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettPlayer_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_ScarlettPlayer_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
