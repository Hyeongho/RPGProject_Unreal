// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/RPGProjectGameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRPGProjectGameInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_URPGProjectGameInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_URPGProjectGameInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void URPGProjectGameInstance::StaticRegisterNativesURPGProjectGameInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URPGProjectGameInstance);
	UClass* Z_Construct_UClass_URPGProjectGameInstance_NoRegister()
	{
		return URPGProjectGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_URPGProjectGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URPGProjectGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URPGProjectGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "RPGProjectGameInstance.h" },
		{ "ModuleRelativePath", "RPGProjectGameInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URPGProjectGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URPGProjectGameInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URPGProjectGameInstance_Statics::ClassParams = {
		&URPGProjectGameInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URPGProjectGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URPGProjectGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URPGProjectGameInstance()
	{
		if (!Z_Registration_Info_UClass_URPGProjectGameInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URPGProjectGameInstance.OuterSingleton, Z_Construct_UClass_URPGProjectGameInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URPGProjectGameInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<URPGProjectGameInstance>()
	{
		return URPGProjectGameInstance::StaticClass();
	}
	URPGProjectGameInstance::URPGProjectGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URPGProjectGameInstance);
	URPGProjectGameInstance::~URPGProjectGameInstance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_RPGProjectGameInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_RPGProjectGameInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URPGProjectGameInstance, URPGProjectGameInstance::StaticClass, TEXT("URPGProjectGameInstance"), &Z_Registration_Info_UClass_URPGProjectGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URPGProjectGameInstance), 618086826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_RPGProjectGameInstance_h_3795598698(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_RPGProjectGameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_RPGProjectGameInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
