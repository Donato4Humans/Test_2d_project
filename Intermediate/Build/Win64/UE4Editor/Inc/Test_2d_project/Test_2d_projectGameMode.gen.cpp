// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test_2d_project/Test_2d_projectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_2d_projectGameMode() {}
// Cross Module References
	TEST_2D_PROJECT_API UClass* Z_Construct_UClass_ATest_2d_projectGameMode_NoRegister();
	TEST_2D_PROJECT_API UClass* Z_Construct_UClass_ATest_2d_projectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Test_2d_project();
// End Cross Module References
	void ATest_2d_projectGameMode::StaticRegisterNativesATest_2d_projectGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATest_2d_projectGameMode_NoRegister()
	{
		return ATest_2d_projectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATest_2d_projectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_2d_projectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test_2d_project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_2d_projectGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of Test_2d_projectCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Test_2d_projectGameMode.h" },
		{ "ModuleRelativePath", "Test_2d_projectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of Test_2d_projectCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_2d_projectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_2d_projectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_2d_projectGameMode_Statics::ClassParams = {
		&ATest_2d_projectGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATest_2d_projectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest_2d_projectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest_2d_projectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_2d_projectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest_2d_projectGameMode, 3937337282);
	template<> TEST_2D_PROJECT_API UClass* StaticClass<ATest_2d_projectGameMode>()
	{
		return ATest_2d_projectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest_2d_projectGameMode(Z_Construct_UClass_ATest_2d_projectGameMode, &ATest_2d_projectGameMode::StaticClass, TEXT("/Script/Test_2d_project"), TEXT("ATest_2d_projectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_2d_projectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
