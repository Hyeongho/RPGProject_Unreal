// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGProject_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_RPGProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_RPGProject()
	{
		if (!Z_Registration_Info_UPackage__Script_RPGProject.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/RPGProject",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xEA39439E,
				0x27CC39E4,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_RPGProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_RPGProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_RPGProject(Z_Construct_UPackage__Script_RPGProject, TEXT("/Script/RPGProject"), Z_Registration_Info_UPackage__Script_RPGProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xEA39439E, 0x27CC39E4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
