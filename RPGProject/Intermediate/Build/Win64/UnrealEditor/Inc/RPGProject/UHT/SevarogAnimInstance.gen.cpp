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
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_UDefaultAIAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_USevarogAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_USevarogAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	DEFINE_FUNCTION(USevarogAnimInstance::execAnimNotify_StartEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_StartEnd();
		P_NATIVE_END;
	}
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
			{ "AnimNotify_StartEnd", &USevarogAnimInstance::execAnimNotify_StartEnd },
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
	struct Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/SevarogAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USevarogAnimInstance, nullptr, "AnimNotify_StartEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_StartMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_StartMontage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USevarogAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDefaultAIAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USevarogAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_PlayParticleEffect, "AnimNotify_PlayParticleEffect" }, // 2135962906
		{ &Z_Construct_UFunction_USevarogAnimInstance_AnimNotify_StartEnd, "AnimNotify_StartEnd" }, // 731328198
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USevarogAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AI/SevarogAnimInstance.h" },
		{ "ModuleRelativePath", "AI/SevarogAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USevarogAnimInstance_Statics::NewProp_m_StartMontage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Data" },
		{ "ModuleRelativePath", "AI/SevarogAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USevarogAnimInstance_Statics::NewProp_m_StartMontage = { "m_StartMontage", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USevarogAnimInstance, m_StartMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USevarogAnimInstance_Statics::NewProp_m_StartMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USevarogAnimInstance_Statics::NewProp_m_StartMontage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USevarogAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USevarogAnimInstance_Statics::NewProp_m_StartMontage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USevarogAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USevarogAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USevarogAnimInstance_Statics::ClassParams = {
		&USevarogAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USevarogAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USevarogAnimInstance_Statics::PropPointers),
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
		{ Z_Construct_UClass_USevarogAnimInstance, USevarogAnimInstance::StaticClass, TEXT("USevarogAnimInstance"), &Z_Registration_Info_UClass_USevarogAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USevarogAnimInstance), 2393948822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_1483680366(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_SevarogAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
