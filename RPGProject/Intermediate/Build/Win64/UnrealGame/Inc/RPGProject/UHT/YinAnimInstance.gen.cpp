// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/Yin/YinAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYinAnimInstance() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UYinAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UYinAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UYinAnimInstance::StaticRegisterNativesUYinAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UYinAnimInstance);
	UClass* Z_Construct_UClass_UYinAnimInstance_NoRegister()
	{
		return UYinAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UYinAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UYinAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYinAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/Yin/YinAnimInstance.h" },
		{ "ModuleRelativePath", "Player/Yin/YinAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYinAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYinAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UYinAnimInstance_Statics::ClassParams = {
		&UYinAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UYinAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYinAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYinAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UYinAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UYinAnimInstance.OuterSingleton, Z_Construct_UClass_UYinAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UYinAnimInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UYinAnimInstance>()
	{
		return UYinAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYinAnimInstance);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UYinAnimInstance, UYinAnimInstance::StaticClass, TEXT("UYinAnimInstance"), &Z_Registration_Info_UClass_UYinAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UYinAnimInstance), 2522210408U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinAnimInstance_h_1967430912(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Yin_YinAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
