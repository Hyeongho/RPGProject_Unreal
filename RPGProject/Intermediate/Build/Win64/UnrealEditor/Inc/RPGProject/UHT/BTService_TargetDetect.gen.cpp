// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIModule/BTService_TargetDetect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_TargetDetect() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTService_TargetDetect();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTService_TargetDetect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UBTService_TargetDetect::StaticRegisterNativesUBTService_TargetDetect()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_TargetDetect);
	UClass* Z_Construct_UClass_UBTService_TargetDetect_NoRegister()
	{
		return UBTService_TargetDetect::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_TargetDetect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_TargetDetect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_TargetDetect_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AIModule/BTService_TargetDetect.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTService_TargetDetect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_TargetDetect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_TargetDetect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_TargetDetect_Statics::ClassParams = {
		&UBTService_TargetDetect::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTService_TargetDetect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_TargetDetect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_TargetDetect()
	{
		if (!Z_Registration_Info_UClass_UBTService_TargetDetect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_TargetDetect.OuterSingleton, Z_Construct_UClass_UBTService_TargetDetect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_TargetDetect.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UBTService_TargetDetect>()
	{
		return UBTService_TargetDetect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_TargetDetect);
	UBTService_TargetDetect::~UBTService_TargetDetect() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_TargetDetect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_TargetDetect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_TargetDetect, UBTService_TargetDetect::StaticClass, TEXT("UBTService_TargetDetect"), &Z_Registration_Info_UClass_UBTService_TargetDetect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_TargetDetect), 3995396018U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_TargetDetect_h_1833017005(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_TargetDetect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTService_TargetDetect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
