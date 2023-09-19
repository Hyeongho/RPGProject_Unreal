// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIModule/BTService_IsAlive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_IsAlive() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTService_IsAlive();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTService_IsAlive_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UBTService_IsAlive::StaticRegisterNativesUBTService_IsAlive()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_IsAlive);
	UClass* Z_Construct_UClass_UBTService_IsAlive_NoRegister()
	{
		return UBTService_IsAlive::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_IsAlive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_IsAlive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_IsAlive_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AIModule/BTService_IsAlive.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTService_IsAlive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_IsAlive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_IsAlive>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_IsAlive_Statics::ClassParams = {
		&UBTService_IsAlive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_IsAlive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_IsAlive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_IsAlive()
	{
		if (!Z_Registration_Info_UClass_UBTService_IsAlive.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_IsAlive.OuterSingleton, Z_Construct_UClass_UBTService_IsAlive_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_IsAlive.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UBTService_IsAlive>()
	{
		return UBTService_IsAlive::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_IsAlive);
	UBTService_IsAlive::~UBTService_IsAlive() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_IsAlive_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_IsAlive_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_IsAlive, UBTService_IsAlive::StaticClass, TEXT("UBTService_IsAlive"), &Z_Registration_Info_UClass_UBTService_IsAlive, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_IsAlive), 3215936852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_IsAlive_h_2513516587(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_IsAlive_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_IsAlive_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
