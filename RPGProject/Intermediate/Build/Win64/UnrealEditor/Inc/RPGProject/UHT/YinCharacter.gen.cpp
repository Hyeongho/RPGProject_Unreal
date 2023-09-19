// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/Yin/YinCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYinCharacter() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AYinCharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AYinCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AYinCharacter::StaticRegisterNativesAYinCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AYinCharacter);
	UClass* Z_Construct_UClass_AYinCharacter_NoRegister()
	{
		return AYinCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AYinCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AYinCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AYinCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Yin/YinCharacter.h" },
		{ "ModuleRelativePath", "Player/Yin/YinCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AYinCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AYinCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AYinCharacter_Statics::ClassParams = {
		&AYinCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AYinCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AYinCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AYinCharacter()
	{
		if (!Z_Registration_Info_UClass_AYinCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AYinCharacter.OuterSingleton, Z_Construct_UClass_AYinCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AYinCharacter.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AYinCharacter>()
	{
		return AYinCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AYinCharacter);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AYinCharacter, AYinCharacter::StaticClass, TEXT("AYinCharacter"), &Z_Registration_Info_UClass_AYinCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AYinCharacter), 2148446208U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinCharacter_h_1577239179(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
