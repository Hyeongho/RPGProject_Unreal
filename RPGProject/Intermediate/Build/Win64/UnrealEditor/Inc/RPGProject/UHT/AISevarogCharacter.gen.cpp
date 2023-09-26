// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AISevarogCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISevarogCharacter() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_AAICharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAISevarogCharacter();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAISevarogCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AAISevarogCharacter::StaticRegisterNativesAAISevarogCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAISevarogCharacter);
	UClass* Z_Construct_UClass_AAISevarogCharacter_NoRegister()
	{
		return AAISevarogCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAISevarogCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAISevarogCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAICharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAISevarogCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AISevarogCharacter.h" },
		{ "ModuleRelativePath", "AI/AISevarogCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAISevarogCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAISevarogCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAISevarogCharacter_Statics::ClassParams = {
		&AAISevarogCharacter::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAISevarogCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAISevarogCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAISevarogCharacter()
	{
		if (!Z_Registration_Info_UClass_AAISevarogCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAISevarogCharacter.OuterSingleton, Z_Construct_UClass_AAISevarogCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAISevarogCharacter.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AAISevarogCharacter>()
	{
		return AAISevarogCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAISevarogCharacter);
	AAISevarogCharacter::~AAISevarogCharacter() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AISevarogCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AISevarogCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAISevarogCharacter, AAISevarogCharacter::StaticClass, TEXT("AAISevarogCharacter"), &Z_Registration_Info_UClass_AAISevarogCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAISevarogCharacter), 1296469732U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AISevarogCharacter_h_3210383314(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AISevarogCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AISevarogCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
