// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Trigger/Trigger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrigger() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RPGPROJECT_API UClass* Z_Construct_UClass_ATrigger();
	RPGPROJECT_API UClass* Z_Construct_UClass_ATrigger_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void ATrigger::StaticRegisterNativesATrigger()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATrigger);
	UClass* Z_Construct_UClass_ATrigger_NoRegister()
	{
		return ATrigger::StaticClass();
	}
	struct Z_Construct_UClass_ATrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrigger_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Trigger/Trigger.h" },
		{ "ModuleRelativePath", "Trigger/Trigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrigger>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATrigger_Statics::ClassParams = {
		&ATrigger::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ATrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrigger()
	{
		if (!Z_Registration_Info_UClass_ATrigger.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATrigger.OuterSingleton, Z_Construct_UClass_ATrigger_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATrigger.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<ATrigger>()
	{
		return ATrigger::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrigger);
	ATrigger::~ATrigger() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Trigger_Trigger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Trigger_Trigger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATrigger, ATrigger::StaticClass, TEXT("ATrigger"), &Z_Registration_Info_UClass_ATrigger, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATrigger), 4160688846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Trigger_Trigger_h_1444687188(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Trigger_Trigger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Trigger_Trigger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
