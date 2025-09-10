// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Component/AttackComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttackComponent() {}

// ********** Begin Cross Module References ********************************************************
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UAttackComponent();
DUSTELLARPROJECT_API UClass* Z_Construct_UClass_UAttackComponent_NoRegister();
DUSTELLARPROJECT_API UEnum* Z_Construct_UEnum_DustellarProject_EAttackInput();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_DustellarProject();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EAttackInput **************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAttackInput;
static UEnum* EAttackInput_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAttackInput.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAttackInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DustellarProject_EAttackInput, (UObject*)Z_Construct_UPackage__Script_DustellarProject(), TEXT("EAttackInput"));
	}
	return Z_Registration_Info_UEnum_EAttackInput.OuterSingleton;
}
template<> DUSTELLARPROJECT_API UEnum* StaticEnum<EAttackInput>()
{
	return EAttackInput_StaticEnum();
}
struct Z_Construct_UEnum_DustellarProject_EAttackInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@EENUM \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xeb\xb0\xa1\xef\xbf\xbd\xef\xbf\xbd FSM \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n//@@unit8 \xef\xbf\xbd\xef\xbf\xbd enum\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xe2\xb8\xa6 1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xd9\xb4\xc2\xb6\xef\xbf\xbd\n" },
#endif
		{ "LeftClick.Name", "EAttackInput::LeftClick" },
		{ "LeftHold.Name", "EAttackInput::LeftHold" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
		{ "None.Name", "EAttackInput::None" },
		{ "RightClick.Name", "EAttackInput::RightClick" },
		{ "RightHold.Name", "EAttackInput::RightHold" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@EENUM \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xeb\xb0\xa1\xef\xbf\xbd\xef\xbf\xbd FSM \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\n@@unit8 \xef\xbf\xbd\xef\xbf\xbd enum\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xa9\xef\xbf\xbd\xe2\xb8\xa6 1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd1\xb4\xd9\xb4\xc2\xb6\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAttackInput::None", (int64)EAttackInput::None },
		{ "EAttackInput::LeftClick", (int64)EAttackInput::LeftClick },
		{ "EAttackInput::RightClick", (int64)EAttackInput::RightClick },
		{ "EAttackInput::LeftHold", (int64)EAttackInput::LeftHold },
		{ "EAttackInput::RightHold", (int64)EAttackInput::RightHold },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DustellarProject_EAttackInput_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_DustellarProject,
	nullptr,
	"EAttackInput",
	"EAttackInput",
	Z_Construct_UEnum_DustellarProject_EAttackInput_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_DustellarProject_EAttackInput_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_DustellarProject_EAttackInput_Statics::Enum_MetaDataParams), Z_Construct_UEnum_DustellarProject_EAttackInput_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_DustellarProject_EAttackInput()
{
	if (!Z_Registration_Info_UEnum_EAttackInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAttackInput.InnerSingleton, Z_Construct_UEnum_DustellarProject_EAttackInput_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAttackInput.InnerSingleton;
}
// ********** End Enum EAttackInput ****************************************************************

// ********** Begin Class UAttackComponent Function ResetCombo *************************************
struct Z_Construct_UFunction_UAttackComponent_ResetCombo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad \n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xde\xba\xef\xbf\xbd \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackComponent_ResetCombo_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAttackComponent, nullptr, "ResetCombo", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackComponent_ResetCombo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttackComponent_ResetCombo_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAttackComponent_ResetCombo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttackComponent_ResetCombo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttackComponent::execResetCombo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetCombo();
	P_NATIVE_END;
}
// ********** End Class UAttackComponent Function ResetCombo ***************************************

// ********** Begin Class UAttackComponent Function UseSkill ***************************************
struct Z_Construct_UFunction_UAttackComponent_UseSkill_Statics
{
	struct AttackComponent_eventUseSkill_Parms
	{
		int32 SkillIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::NewProp_SkillIndex = { "SkillIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AttackComponent_eventUseSkill_Parms, SkillIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::NewProp_SkillIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAttackComponent, nullptr, "UseSkill", Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::AttackComponent_eventUseSkill_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::AttackComponent_eventUseSkill_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAttackComponent_UseSkill()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAttackComponent_UseSkill_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAttackComponent::execUseSkill)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_SkillIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseSkill(Z_Param_SkillIndex);
	P_NATIVE_END;
}
// ********** End Class UAttackComponent Function UseSkill *****************************************

// ********** Begin Class UAttackComponent *********************************************************
void UAttackComponent::StaticRegisterNativesUAttackComponent()
{
	UClass* Class = UAttackComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ResetCombo", &UAttackComponent::execResetCombo },
		{ "UseSkill", &UAttackComponent::execUseSkill },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttackComponent;
UClass* UAttackComponent::GetPrivateStaticClass()
{
	using TClass = UAttackComponent;
	if (!Z_Registration_Info_UClass_UAttackComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttackComponent"),
			Z_Registration_Info_UClass_UAttackComponent.InnerSingleton,
			StaticRegisterNativesUAttackComponent,
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
	return Z_Registration_Info_UClass_UAttackComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttackComponent_NoRegister()
{
	return UAttackComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttackComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Component/AttackComponent.h" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboCount_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@---------------------------------------\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n//@@ \xef\xbf\xbd\xde\xba\xef\xbf\xbd\xc8\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@---------------------------------------\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n@@ \xef\xbf\xbd\xde\xba\xef\xbf\xbd\xc8\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCombo_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd\xc8\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xde\xba\xef\xbf\xbd\xc8\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevAttack_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd (Left/Right/Special) \n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ \xef\xbf\xbd\xd6\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd (Left/Right/Special)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMontage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd\xcc\xbc\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L1_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ --- 1\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ --- 1\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R1_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_LHold1_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_RHold1_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ 1\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa6\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ 1\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa6\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L2_LPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ --- 2\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---\n//@@ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xc2\xba\xef\xbf\xbd/\xc8\xa6\xef\xbf\xbd\xe5\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ --- 2\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---\n@@ \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xb7\xc2\xba\xef\xbf\xbd/\xc8\xa6\xef\xbf\xbd\xe5\xba\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L2_RPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L2_LPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L2_RPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa6\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa6\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R2_LPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa6\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ 2\xc5\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa6\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R2_RPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R2_LPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R2_RPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L3_LPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ --- 3\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ --- 3\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L3_RPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L3_LPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L3_RPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R3_LPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R3_RPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R3_LPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R3_RPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L4_LPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ --- 4\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ --- 4\xc5\xb8 \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd ---" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L4_RPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L4_LPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_L4_RPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R4_LPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R4_RPrev_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R4_LPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Punch_R4_RPrev_Hold_Montage_MetaData[] = {
		{ "Category", "AttackMontage" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillList_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@ \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@ \xef\xbf\xbd\xef\xbf\xbd\xc5\xb3 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftAttackDamage_MetaData[] = {
		{ "Category", "Attack" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//@@\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@@\xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightAttackDamage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/Component/AttackComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCombo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PrevAttack_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PrevAttack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L1_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R1_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_LHold1_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_RHold1_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L2_LPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L2_RPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L2_LPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L2_RPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R2_LPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R2_RPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R2_LPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R2_RPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L3_LPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L3_RPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L3_LPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L3_RPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R3_LPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R3_RPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R3_LPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R3_RPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L4_LPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L4_RPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L4_LPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_L4_RPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R4_LPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R4_RPrev_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R4_LPrev_Hold_Montage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Punch_R4_RPrev_Hold_Montage;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SkillList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkillList;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftAttackDamage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightAttackDamage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAttackComponent_ResetCombo, "ResetCombo" }, // 1779173371
		{ &Z_Construct_UFunction_UAttackComponent_UseSkill, "UseSkill" }, // 1015916258
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttackComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_ComboCount = { "ComboCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, ComboCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboCount_MetaData), NewProp_ComboCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_MaxCombo = { "MaxCombo", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, MaxCombo), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCombo_MetaData), NewProp_MaxCombo_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_PrevAttack_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_PrevAttack = { "PrevAttack", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, PrevAttack), Z_Construct_UEnum_DustellarProject_EAttackInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevAttack_MetaData), NewProp_PrevAttack_MetaData) }; // 2988773491
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_CurrentMontage = { "CurrentMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, CurrentMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMontage_MetaData), NewProp_CurrentMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L1_Montage = { "Punch_L1_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L1_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L1_Montage_MetaData), NewProp_Punch_L1_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R1_Montage = { "Punch_R1_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R1_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R1_Montage_MetaData), NewProp_Punch_R1_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_LHold1_Montage = { "Punch_LHold1_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_LHold1_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_LHold1_Montage_MetaData), NewProp_Punch_LHold1_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_RHold1_Montage = { "Punch_RHold1_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_RHold1_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_RHold1_Montage_MetaData), NewProp_Punch_RHold1_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_LPrev_Montage = { "Punch_L2_LPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L2_LPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L2_LPrev_Montage_MetaData), NewProp_Punch_L2_LPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_RPrev_Montage = { "Punch_L2_RPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L2_RPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L2_RPrev_Montage_MetaData), NewProp_Punch_L2_RPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_LPrev_Hold_Montage = { "Punch_L2_LPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L2_LPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L2_LPrev_Hold_Montage_MetaData), NewProp_Punch_L2_LPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_RPrev_Hold_Montage = { "Punch_L2_RPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L2_RPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L2_RPrev_Hold_Montage_MetaData), NewProp_Punch_L2_RPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_LPrev_Montage = { "Punch_R2_LPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R2_LPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R2_LPrev_Montage_MetaData), NewProp_Punch_R2_LPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_RPrev_Montage = { "Punch_R2_RPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R2_RPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R2_RPrev_Montage_MetaData), NewProp_Punch_R2_RPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_LPrev_Hold_Montage = { "Punch_R2_LPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R2_LPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R2_LPrev_Hold_Montage_MetaData), NewProp_Punch_R2_LPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_RPrev_Hold_Montage = { "Punch_R2_RPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R2_RPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R2_RPrev_Hold_Montage_MetaData), NewProp_Punch_R2_RPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_LPrev_Montage = { "Punch_L3_LPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L3_LPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L3_LPrev_Montage_MetaData), NewProp_Punch_L3_LPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_RPrev_Montage = { "Punch_L3_RPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L3_RPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L3_RPrev_Montage_MetaData), NewProp_Punch_L3_RPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_LPrev_Hold_Montage = { "Punch_L3_LPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L3_LPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L3_LPrev_Hold_Montage_MetaData), NewProp_Punch_L3_LPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_RPrev_Hold_Montage = { "Punch_L3_RPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L3_RPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L3_RPrev_Hold_Montage_MetaData), NewProp_Punch_L3_RPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_LPrev_Montage = { "Punch_R3_LPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R3_LPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R3_LPrev_Montage_MetaData), NewProp_Punch_R3_LPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_RPrev_Montage = { "Punch_R3_RPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R3_RPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R3_RPrev_Montage_MetaData), NewProp_Punch_R3_RPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_LPrev_Hold_Montage = { "Punch_R3_LPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R3_LPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R3_LPrev_Hold_Montage_MetaData), NewProp_Punch_R3_LPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_RPrev_Hold_Montage = { "Punch_R3_RPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R3_RPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R3_RPrev_Hold_Montage_MetaData), NewProp_Punch_R3_RPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_LPrev_Montage = { "Punch_L4_LPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L4_LPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L4_LPrev_Montage_MetaData), NewProp_Punch_L4_LPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_RPrev_Montage = { "Punch_L4_RPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L4_RPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L4_RPrev_Montage_MetaData), NewProp_Punch_L4_RPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_LPrev_Hold_Montage = { "Punch_L4_LPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L4_LPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L4_LPrev_Hold_Montage_MetaData), NewProp_Punch_L4_LPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_RPrev_Hold_Montage = { "Punch_L4_RPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_L4_RPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_L4_RPrev_Hold_Montage_MetaData), NewProp_Punch_L4_RPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_LPrev_Montage = { "Punch_R4_LPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R4_LPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R4_LPrev_Montage_MetaData), NewProp_Punch_R4_LPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_RPrev_Montage = { "Punch_R4_RPrev_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R4_RPrev_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R4_RPrev_Montage_MetaData), NewProp_Punch_R4_RPrev_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_LPrev_Hold_Montage = { "Punch_R4_LPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R4_LPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R4_LPrev_Hold_Montage_MetaData), NewProp_Punch_R4_LPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_RPrev_Hold_Montage = { "Punch_R4_RPrev_Hold_Montage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, Punch_R4_RPrev_Hold_Montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Punch_R4_RPrev_Hold_Montage_MetaData), NewProp_Punch_R4_RPrev_Hold_Montage_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_SkillList_Inner = { "SkillList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_SkillList = { "SkillList", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, SkillList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillList_MetaData), NewProp_SkillList_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_LeftAttackDamage = { "LeftAttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, LeftAttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftAttackDamage_MetaData), NewProp_LeftAttackDamage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttackComponent_Statics::NewProp_RightAttackDamage = { "RightAttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttackComponent, RightAttackDamage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightAttackDamage_MetaData), NewProp_RightAttackDamage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttackComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_ComboCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_MaxCombo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_PrevAttack_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_PrevAttack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_CurrentMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L1_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R1_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_LHold1_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_RHold1_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_LPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_RPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_LPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L2_RPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_LPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_RPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_LPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R2_RPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_LPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_RPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_LPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L3_RPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_LPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_RPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_LPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R3_RPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_LPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_RPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_LPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_L4_RPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_LPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_RPrev_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_LPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_Punch_R4_RPrev_Hold_Montage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_SkillList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_SkillList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_LeftAttackDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttackComponent_Statics::NewProp_RightAttackDamage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_DustellarProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttackComponent_Statics::ClassParams = {
	&UAttackComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAttackComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttackComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttackComponent()
{
	if (!Z_Registration_Info_UClass_UAttackComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttackComponent.OuterSingleton, Z_Construct_UClass_UAttackComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttackComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttackComponent);
UAttackComponent::~UAttackComponent() {}
// ********** End Class UAttackComponent ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h__Script_DustellarProject_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAttackInput_StaticEnum, TEXT("EAttackInput"), &Z_Registration_Info_UEnum_EAttackInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2988773491U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttackComponent, UAttackComponent::StaticClass, TEXT("UAttackComponent"), &Z_Registration_Info_UClass_UAttackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttackComponent), 3870718713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h__Script_DustellarProject_3357958644(TEXT("/Script/DustellarProject"),
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h__Script_DustellarProject_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h__Script_DustellarProject_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h__Script_DustellarProject_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_user_Documents_Unreal5_6_DustellarFighterProject_DustellarProject_Source_DustellarProject_Public_Component_AttackComponent_h__Script_DustellarProject_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
