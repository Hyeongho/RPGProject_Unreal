// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/SevarogAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSevarogAnimInstance() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_UDefaultAIAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_USevarogAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_USevarogAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	DEFINE_FUNCTION(USevarogAnimInstance::execAnimNotify_PlayParticleEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_PlayParticleEffect();
		P_NATIVE_END;
	}
	void USevarogAnimInstance::StaticRegisterNativesUSevarogAnimInstance()
	{
		UClass* Class = USevarogAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_PlayParticleEffect", &USevarogAnimInstance::execAnimNotify_PlayParticleEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/SevarogAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USevarogAnimInstance, nullptr, "AnimNotify_PlayParticleEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USevarogAnimInstance);
	UClass* Z_Construct_UClass_USevarogAnimInstance_NoRegister()
	{
		return USevarogAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USevarogAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USevarogAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultAIAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USevarogAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect, "AnimNotify_PlayParticleEffect" }, // 2135962906
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USevarogAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/SevarogAnimInstance.h" },
		{ "ModuleRelativePath", "AI/SevarogAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USevarogAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USevarogAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USevarogAnimInstance_Statics::ClassParams = {
		&USevarogAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USevarogAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USevarogAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USevarogAnimInstance()
	{
		if (!Z_Registration_Info_UClass_USevarogAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USevarogAnimInstance.OuterSingleton, Z_Construct_UClass_USevarogAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USevarogAnimInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<USevarogAnimInstance>()
	{
		return USevarogAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USevarogAnimInstance);
	USevarogAnimInstance::~USevarogAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USevarogAnimInstance, USevarogAnimInstance::StaticClass, TEXT("USevarogAnimInstance"), &Z_Registration_Info_UClass_USevarogAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USevarogAnimInstance), 2580658738U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_132365247(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
