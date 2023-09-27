// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/Gideon/GideonCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGideonCharacter() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_AGideonCharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AGideonCharacter_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AGideonCharacter::StaticRegisterNativesAGideonCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGideonCharacter);
	UClass* Z_Construct_UClass_AGideonCharacter_NoRegister()
	{
		return AGideonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGideonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGideonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGideonCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Gideon/GideonCharacter.h" },
		{ "ModuleRelativePath", "Player/Gideon/GideonCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGideonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGideonCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGideonCharacter_Statics::ClassParams = {
		&AGideonCharacter::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGideonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGideonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGideonCharacter()
	{
		if (!Z_Registration_Info_UClass_AGideonCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGideonCharacter.OuterSingleton, Z_Construct_UClass_AGideonCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGideonCharacter.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AGideonCharacter>()
	{
		return AGideonCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGideonCharacter);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGideonCharacter, AGideonCharacter::StaticClass, TEXT("AGideonCharacter"), &Z_Registration_Info_UClass_AGideonCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGideonCharacter), 3048990019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonCharacter_h_4222134482(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
