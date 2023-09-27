// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/Gideon/GideonAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGideonAnimInstance() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_UGideonAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UGideonAnimInstance_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UGideonAnimInstance::StaticRegisterNativesUGideonAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGideonAnimInstance);
	UClass* Z_Construct_UClass_UGideonAnimInstance_NoRegister()
	{
		return UGideonAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGideonAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGideonAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGideonAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/Gideon/GideonAnimInstance.h" },
		{ "ModuleRelativePath", "Player/Gideon/GideonAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGideonAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGideonAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGideonAnimInstance_Statics::ClassParams = {
		&UGideonAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGideonAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGideonAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGideonAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UGideonAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGideonAnimInstance.OuterSingleton, Z_Construct_UClass_UGideonAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGideonAnimInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UGideonAnimInstance>()
	{
		return UGideonAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGideonAnimInstance);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGideonAnimInstance, UGideonAnimInstance::StaticClass, TEXT("UGideonAnimInstance"), &Z_Registration_Info_UClass_UGideonAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGideonAnimInstance), 83986099U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonAnimInstance_h_2363342028(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Gideon_GideonAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
