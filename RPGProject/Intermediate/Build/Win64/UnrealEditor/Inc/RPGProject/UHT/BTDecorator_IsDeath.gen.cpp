// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIModule/BTDecorator_IsDeath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsDeath() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTDecorator_IsDeath();
	RPGPROJECT_API UClass* Z_Construct_UClass_UBTDecorator_IsDeath_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UBTDecorator_IsDeath::StaticRegisterNativesUBTDecorator_IsDeath()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTDecorator_IsDeath);
	UClass* Z_Construct_UClass_UBTDecorator_IsDeath_NoRegister()
	{
		return UBTDecorator_IsDeath::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsDeath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsDeath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsDeath_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/AIModule/BTDecorator_IsDeath.h" },
		{ "ModuleRelativePath", "AI/AIModule/BTDecorator_IsDeath.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsDeath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsDeath>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsDeath_Statics::ClassParams = {
		&UBTDecorator_IsDeath::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsDeath_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsDeath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsDeath()
	{
		if (!Z_Registration_Info_UClass_UBTDecorator_IsDeath.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTDecorator_IsDeath.OuterSingleton, Z_Construct_UClass_UBTDecorator_IsDeath_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTDecorator_IsDeath.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UBTDecorator_IsDeath>()
	{
		return UBTDecorator_IsDeath::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsDeath);
	UBTDecorator_IsDeath::~UBTDecorator_IsDeath() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_IsDeath_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_IsDeath_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTDecorator_IsDeath, UBTDecorator_IsDeath::StaticClass, TEXT("UBTDecorator_IsDeath"), &Z_Registration_Info_UClass_UBTDecorator_IsDeath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTDecorator_IsDeath), 3290908845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_IsDeath_h_1762188193(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_IsDeath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIModule_BTDecorator_IsDeath_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
