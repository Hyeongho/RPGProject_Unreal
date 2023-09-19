// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/Kwang/KwangCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKwangCharacter() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_AKwangCharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AKwangCharacter_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_APlayerCharacter();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AKwangCharacter::StaticRegisterNativesAKwangCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AKwangCharacter);
	UClass* Z_Construct_UClass_AKwangCharacter_NoRegister()
	{
		return AKwangCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AKwangCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKwangCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKwangCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/Kwang/KwangCharacter.h" },
		{ "ModuleRelativePath", "Player/Kwang/KwangCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKwangCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKwangCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AKwangCharacter_Statics::ClassParams = {
		&AKwangCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AKwangCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKwangCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKwangCharacter()
	{
		if (!Z_Registration_Info_UClass_AKwangCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AKwangCharacter.OuterSingleton, Z_Construct_UClass_AKwangCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AKwangCharacter.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AKwangCharacter>()
	{
		return AKwangCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKwangCharacter);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AKwangCharacter, AKwangCharacter::StaticClass, TEXT("AKwangCharacter"), &Z_Registration_Info_UClass_AKwangCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AKwangCharacter), 3086181973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangCharacter_h_1445647617(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
