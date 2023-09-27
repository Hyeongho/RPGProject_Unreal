// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIMinionPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIMinionPawn() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIMinionPawn();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIMinionPawn_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_AAIPawn();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void AAIMinionPawn::StaticRegisterNativesAAIMinionPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIMinionPawn);
	UClass* Z_Construct_UClass_AAIMinionPawn_NoRegister()
	{
		return AAIMinionPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAIMinionPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIMinionPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIMinionPawn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/AIMinionPawn.h" },
		{ "ModuleRelativePath", "AI/AIMinionPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIMinionPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIMinionPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIMinionPawn_Statics::ClassParams = {
		&AAIMinionPawn::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AAIMinionPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIMinionPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIMinionPawn()
	{
		if (!Z_Registration_Info_UClass_AAIMinionPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIMinionPawn.OuterSingleton, Z_Construct_UClass_AAIMinionPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIMinionPawn.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<AAIMinionPawn>()
	{
		return AAIMinionPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIMinionPawn);
	AAIMinionPawn::~AAIMinionPawn() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIMinionPawn, AAIMinionPawn::StaticClass, TEXT("AAIMinionPawn"), &Z_Registration_Info_UClass_AAIMinionPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIMinionPawn), 1504216246U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionPawn_h_1420790484(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIMinionPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
