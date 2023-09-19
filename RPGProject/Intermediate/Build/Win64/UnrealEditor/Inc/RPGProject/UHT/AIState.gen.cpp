// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/AIState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	RPGPROJECT_API UClass* Z_Construct_UClass_UAIState();
	RPGPROJECT_API UClass* Z_Construct_UClass_UAIState_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void UAIState::StaticRegisterNativesUAIState()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIState);
	UClass* Z_Construct_UClass_UAIState_NoRegister()
	{
		return UAIState::StaticClass();
	}
	struct Z_Construct_UClass_UAIState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_m_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AttackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_AttackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_ArmorPoint_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_ArmorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_HP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_HP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_HPMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_HPMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_MP_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_MP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_MPMax_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_MPMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Level_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_Level;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Exp_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_Exp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_Gold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_Gold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AttackDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_AttackDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_InteractionDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_m_InteractionDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AI/AIState.h" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_Name = { "m_Name", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_Name), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackPoint = { "m_AttackPoint", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_AttackPoint), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_ArmorPoint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_ArmorPoint = { "m_ArmorPoint", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_ArmorPoint), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_ArmorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_ArmorPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_HP = { "m_HP", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_HP), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_HP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_HPMax = { "m_HPMax", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_HPMax), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_HPMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_MP = { "m_MP", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_MP), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_MP_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_MPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_MPMax = { "m_MPMax", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_MPMax), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_MPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_MPMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_Level = { "m_Level", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_Level), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_Level_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_Exp = { "m_Exp", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_Exp), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_Exp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_Gold_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_Gold = { "m_Gold", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_Gold), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_Gold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_MoveSpeed = { "m_MoveSpeed", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackDistance = { "m_AttackDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_AttackDistance), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIState_Statics::NewProp_m_InteractionDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AIState" },
		{ "ModuleRelativePath", "AI/AIState.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAIState_Statics::NewProp_m_InteractionDistance = { "m_InteractionDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAIState, m_InteractionDistance), METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::NewProp_m_InteractionDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::NewProp_m_InteractionDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAIState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_ArmorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_HP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_HPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_MP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_MPMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_Level,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_Exp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_Gold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_AttackDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAIState_Statics::NewProp_m_InteractionDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIState>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIState_Statics::ClassParams = {
		&UAIState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAIState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAIState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIState()
	{
		if (!Z_Registration_Info_UClass_UAIState.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIState.OuterSingleton, Z_Construct_UClass_UAIState_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIState.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<UAIState>()
	{
		return UAIState::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIState);
	UAIState::~UAIState() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIState_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIState_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIState, UAIState::StaticClass, TEXT("UAIState"), &Z_Registration_Info_UClass_UAIState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIState), 4252704626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIState_h_2639290363(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_AIState_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
