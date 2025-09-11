// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDustellarProject_init() {}
	DUSTELLARPROJECT_API UFunction* Z_Construct_UDelegateFunction_DustellarProject_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_DustellarProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_DustellarProject()
	{
		if (!Z_Registration_Info_UPackage__Script_DustellarProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_DustellarProject_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/DustellarProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC49888BA,
				0x8DFFEDB2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_DustellarProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_DustellarProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_DustellarProject(Z_Construct_UPackage__Script_DustellarProject, TEXT("/Script/DustellarProject"), Z_Registration_Info_UPackage__Script_DustellarProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC49888BA, 0x8DFFEDB2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
