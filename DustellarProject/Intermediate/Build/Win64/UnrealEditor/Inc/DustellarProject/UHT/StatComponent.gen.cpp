// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Component/StatComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatComponent() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UStatComponent();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UStatComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatComponent Function ApplyDamage **************************************
struct Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics
{
	struct StatComponent_eventApplyDamage_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatComponent_eventApplyDamage_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatComponent, nullptr, "ApplyDamage", Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::StatComponent_eventApplyDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::StatComponent_eventApplyDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatComponent_ApplyDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatComponent_ApplyDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatComponent::execApplyDamage)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyDamage(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStatComponent Function ApplyDamage ****************************************

// ********** Begin Class UStatComponent Function RestoreHP ****************************************
struct Z_Construct_UFunction_UStatComponent_RestoreHP_Statics
{
	struct StatComponent_eventRestoreHP_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\xc8\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatComponent_eventRestoreHP_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UStatComponent, nullptr, "RestoreHP", Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::StatComponent_eventRestoreHP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::StatComponent_eventRestoreHP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatComponent_RestoreHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatComponent_RestoreHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UStatComponent::execRestoreHP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestoreHP(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UStatComponent Function RestoreHP ******************************************

// ********** Begin Class UStatComponent ***********************************************************
void UStatComponent::StaticRegisterNativesUStatComponent()
{
	UClass* Class = UStatComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyDamage", &UStatComponent::execApplyDamage },
		{ "RestoreHP", &UStatComponent::execRestoreHP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatComponent;
UClass* UStatComponent::GetPrivateStaticClass()
{
	using TClass = UStatComponent;
	if (!Z_Registration_Info_UClass_UStatComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatComponent"),
			Z_Registration_Info_UClass_UStatComponent.InnerSingleton,
			StaticRegisterNativesUStatComponent,
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
	return Z_Registration_Info_UClass_UStatComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatComponent_NoRegister()
{
	return UStatComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/StatComponent.h" },
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//@@\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd stat\xef\xbf\xbd\xef\xbf\xbd \xc7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//@@\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd 100\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n@@\xef\xbf\xbd\xf0\xb8\xae\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd stat\xef\xbf\xbd\xef\xbf\xbd \xc7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n@@\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd 100" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxShield_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xd6\xb4\xeb\xbd\xaf\xef\xbf\xbd\xef\xbf\xbd 100\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xd6\xb4\xeb\xbd\xaf\xef\xbf\xbd\xef\xbf\xbd 100" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentShield_MetaData[] = {
		{ "Category", "Stats" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xbd\xaf\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/StatComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xe7\xbd\xaf\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxShield;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentShield;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatComponent_ApplyDamage, "ApplyDamage" }, // 520172448
		{ &Z_Construct_UFunction_UStatComponent_RestoreHP, "RestoreHP" }, // 1192443125
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_MaxShield = { "MaxShield", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, MaxShield), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxShield_MetaData), NewProp_MaxShield_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentShield = { "CurrentShield", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatComponent, CurrentShield), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentShield_MetaData), NewProp_CurrentShield_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_MaxShield,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatComponent_Statics::NewProp_CurrentShield,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatComponent_Statics::ClassParams = {
	&UStatComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UStatComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatComponent()
{
	if (!Z_Registration_Info_UClass_UStatComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatComponent.OuterSingleton, Z_Construct_UClass_UStatComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatComponent);
UStatComponent::~UStatComponent() {}
// ********** End Class UStatComponent *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h__Script_DustellarProject_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatComponent, UStatComponent::StaticClass, TEXT("UStatComponent"), &Z_Registration_Info_UClass_UStatComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatComponent), 709222375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h__Script_DustellarProject_1985341608(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_StatComponent_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
