// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RPGProject/AI/DefaultAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAIController() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
	RPGPROJECT_API UClass* Z_Construct_UClass_ADefaultAIController();
	RPGPROJECT_API UClass* Z_Construct_UClass_ADefaultAIController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RPGProject();
// End Cross Module References
	void ADefaultAIController::StaticRegisterNativesADefaultAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADefaultAIController);
	UClass* Z_Construct_UClass_ADefaultAIController_NoRegister()
	{
		return ADefaultAIController::StaticClass();
	}
	struct Z_Construct_UClass_ADefaultAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AITree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_AITree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_AIBlackboard_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_m_AIBlackboard;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADefaultAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_RPGProject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/DefaultAIController.h" },
		{ "ModuleRelativePath", "AI/DefaultAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AITree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/DefaultAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AITree = { "m_AITree", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultAIController, m_AITree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AITree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AITree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AIBlackboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "AI/DefaultAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AIBlackboard = { "m_AIBlackboard", nullptr, (EPropertyFlags)0x0044000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADefaultAIController, m_AIBlackboard), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AIBlackboard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AIBlackboard_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADefaultAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AITree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADefaultAIController_Statics::NewProp_m_AIBlackboard,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADefaultAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADefaultAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADefaultAIController_Statics::ClassParams = {
		&ADefaultAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADefaultAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADefaultAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADefaultAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADefaultAIController()
	{
		if (!Z_Registration_Info_UClass_ADefaultAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADefaultAIController.OuterSingleton, Z_Construct_UClass_ADefaultAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADefaultAIController.OuterSingleton;
	}
	template<> RPGPROJECT_API UClass* StaticClass<ADefaultAIController>()
	{
		return ADefaultAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADefaultAIController);
	ADefaultAIController::~ADefaultAIController() {}
	struct Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADefaultAIController, ADefaultAIController::StaticClass, TEXT("ADefaultAIController"), &Z_Registration_Info_UClass_ADefaultAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADefaultAIController), 3951011400U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIController_h_3865048795(TEXT("/Script/RPGProject"),
		Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_RPGProject_RPGProject_Source_RPGProject_AI_DefaultAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
