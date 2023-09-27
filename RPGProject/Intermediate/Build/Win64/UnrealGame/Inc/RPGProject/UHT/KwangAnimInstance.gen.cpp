// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/Player/Kwang/KwangAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKwangAnimInstance() {}
// Cross Module References
	RPGPROJECT_API UClass* Z_Construct_UClass_UKwangAnimInstance();
	RPGPROJECT_API UClass* Z_Construct_UClass_UKwangAnimInstance_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_UPlayerAnimInstance();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	DEFINE_FUNCTION(UKwangAnimInstance::execAnimNotify_KwangAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_KwangAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKwangAnimInstance::execAnimNotify_KwangAttackEnable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_KwangAttackEnable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKwangAnimInstance::execAnimNotify_Attack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack();
		P_NATIVE_END;
	}
	void UKwangAnimInstance::StaticRegisterNativesUKwangAnimInstance()
	{
		UClass* Class = UKwangAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Attack", &UKwangAnimInstance::execAnimNotify_Attack },
			{ "AnimNotify_KwangAttackEnable", &UKwangAnimInstance::execAnimNotify_KwangAttackEnable },
			{ "AnimNotify_KwangAttackEnd", &UKwangAnimInstance::execAnimNotify_KwangAttackEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Kwang/KwangAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKwangAnimInstance, nullptr, "AnimNotify_Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Kwang/KwangAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKwangAnimInstance, nullptr, "AnimNotify_KwangAttackEnable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/Kwang/KwangAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKwangAnimInstance, nullptr, "AnimNotify_KwangAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UKwangAnimInstance);
	UClass* Z_Construct_UClass_UKwangAnimInstance_NoRegister()
	{
		return UKwangAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UKwangAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKwangAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKwangAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_Attack, "AnimNotify_Attack" }, // 2939690848
		{ &Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnable, "AnimNotify_KwangAttackEnable" }, // 960866336
		{ &Z_Construct_UFunction_UKwangAnimInstance_AnimNotify_KwangAttackEnd, "AnimNotify_KwangAttackEnd" }, // 2369904182
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKwangAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/Kwang/KwangAnimInstance.h" },
		{ "ModuleRelativePath", "Player/Kwang/KwangAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKwangAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKwangAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UKwangAnimInstance_Statics::ClassParams = {
		&UKwangAnimInstance::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UKwangAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKwangAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKwangAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UKwangAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UKwangAnimInstance.OuterSingleton, Z_Construct_UClass_UKwangAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UKwangAnimInstance.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UKwangAnimInstance>()
	{
		return UKwangAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKwangAnimInstance);
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UKwangAnimInstance, UKwangAnimInstance::StaticClass, TEXT("UKwangAnimInstance"), &Z_Registration_Info_UClass_UKwangAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UKwangAnimInstance), 3516027263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangAnimInstance_h_1383497742(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_Player_Kwang_KwangAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
