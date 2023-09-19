// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIModule/BTTask_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_Death() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTTask_Death();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTTask_Death_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UBTTask_Death::StaticRegisterNativesUBTTask_Death()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_Death);
	UClass* Z_Construct_UClass_UBTTask_Death_NoRegister()
	{
		return UBTTask_Death::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_Death_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_Death_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_Death_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AIModule/BTTask_Death.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTTask_Death.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_Death_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_Death>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_Death_Statics::ClassParams = {
		&UBTTask_Death::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_Death_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_Death_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_Death()
	{
		if (!Z_Registration_Info_UClass_UBTTask_Death.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_Death.OuterSingleton, Z_Construct_UClass_UBTTask_Death_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_Death.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UBTTask_Death>()
	{
		return UBTTask_Death::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_Death);
	UBTTask_Death::~UBTTask_Death() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTTask_Death_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTTask_Death_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_Death, UBTTask_Death::StaticClass, TEXT("UBTTask_Death"), &Z_Registration_Info_UClass_UBTTask_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_Death), 4122311581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTTask_Death_h_3572816324(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTTask_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTTask_Death_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
