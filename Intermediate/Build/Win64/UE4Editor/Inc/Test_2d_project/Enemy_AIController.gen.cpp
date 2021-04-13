// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_2d_project/Enemy_AIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_AIController() {}
// Cross Module References
	TEST_2D_PROJECT_API UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister();
	TEST_2D_PROJECT_API UClass* Z_Construct_UClass_AEnemy_AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Test_2d_project();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
// End Cross Module References
	void AEnemy_AIController::StaticRegisterNativesAEnemy_AIController()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_AIController_NoRegister()
	{
		return AEnemy_AIController::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_btree_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_btree;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_behavior_tree_component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_behavior_tree_component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_2d_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Enemy_AIController.h" },
		{ "ModuleRelativePath", "Enemy_AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_btree_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Enemy_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_btree = { "btree", nullptr, (EPropertyFlags)0x0040000000000805, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_AIController, btree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_btree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_btree_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_behavior_tree_component_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy_AIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_behavior_tree_component = { "behavior_tree_component", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_AIController, behavior_tree_component), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_behavior_tree_component_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_behavior_tree_component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_btree,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_AIController_Statics::NewProp_behavior_tree_component,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_AIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_AIController_Statics::ClassParams = {
		&AEnemy_AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_AIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_AIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_AIController, 4013386286);
	template<> TEST_2D_PROJECT_API UClass* StaticClass<AEnemy_AIController>()
	{
		return AEnemy_AIController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_AIController(Z_Construct_UClass_AEnemy_AIController, &AEnemy_AIController::StaticClass, TEXT("/Script/Test_2d_project"), TEXT("AEnemy_AIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_AIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
