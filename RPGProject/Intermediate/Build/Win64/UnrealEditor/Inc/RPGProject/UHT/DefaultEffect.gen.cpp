// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Effect/DefaultEffect.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultEffect() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_ADefaultEffect();
	RPGPROJECT_API UClass* Z_Construct_UClass_ADefaultEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	DEFINE_FUNCTION(ADefaultEffect::execParticleFinish)
	{
		P_GET_OBJECT(UParticleSystemComponent,Z_Param_System);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ParticleFinish(Z_Param_System);
		P_NATIVE_END;
	}
	void ADefaultEffect::StaticRegisterNativesADefaultEffect()
	{
		UClass* Class = ADefaultEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ParticleFinish", &ADefaultEffect::execParticleFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics
	{
		struct DefaultEffect_eventParticleFinish_Parms
		{
			UParticleSystemComponent* System;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_System_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_System;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::NewProp_System_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::NewProp_System = { "System", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DefaultEffect_eventParticleFinish_Parms, System), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::NewProp_System_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::NewProp_System_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::NewProp_System,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Effect/DefaultEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADefaultEffect, nullptr, "ParticleFinish", nullptr, nullptr, sizeof(Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::DefaultEffect_eventParticleFinish_Parms), Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADefaultEffect_ParticleFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADefaultEffect_ParticleFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultEffect);
	UClass* Z_Construct_UClass_ADefaultEffect_NoRegister()
	{
		return ADefaultEffect::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Particle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_Particle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADefaultEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADefaultEffect_ParticleFinish, "ParticleFinish" }, // 1446487240
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Effect/DefaultEffect.h" },
		{ "ModuleRelativePath", "Effect/DefaultEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultEffect_Statics::NewProp_m_Particle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Effect/DefaultEffect.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultEffect_Statics::NewProp_m_Particle = { "m_Particle", nullptr, (EPropertyFlags)0x00240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultEffect, m_Particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultEffect_Statics::NewProp_m_Particle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEffect_Statics::NewProp_m_Particle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultEffect_Statics::NewProp_m_Particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultEffect_Statics::ClassParams = {
		&ADefaultEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADefaultEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEffect_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultEffect()
	{
		if (!Z_Registration_Info_UClass_ADefaultEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultEffect.OuterSingleton, Z_Construct_UClass_ADefaultEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultEffect.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<ADefaultEffect>()
	{
		return ADefaultEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultEffect);
	ADefaultEffect::~ADefaultEffect() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Effect_DefaultEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Effect_DefaultEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultEffect, ADefaultEffect::StaticClass, TEXT("ADefaultEffect"), &Z_Registration_Info_UClass_ADefaultEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultEffect), 3584992915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Effect_DefaultEffect_h_3138533541(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Effect_DefaultEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Effect_DefaultEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
