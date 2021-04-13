// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_2D_PROJECT_Grenade_generated_h
#error "Grenade.generated.h already included, missing '#pragma once' in Grenade.h"
#endif
#define TEST_2D_PROJECT_Grenade_generated_h

#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_SPARSE_DATA
#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode(); \
		P_NATIVE_END; \
	}


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnExplode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnExplode(); \
		P_NATIVE_END; \
	}


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test_2d_project"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGrenade(); \
	friend struct Z_Construct_UClass_AGrenade_Statics; \
public: \
	DECLARE_CLASS(AGrenade, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test_2d_project"), NO_API) \
	DECLARE_SERIALIZER(AGrenade)


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGrenade(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGrenade) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public:


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGrenade(AGrenade&&); \
	NO_API AGrenade(const AGrenade&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGrenade); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGrenade); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGrenade)


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Explosion() { return STRUCT_OFFSET(AGrenade, Explosion); } \
	FORCEINLINE static uint32 __PPO__Sprite() { return STRUCT_OFFSET(AGrenade, Sprite); } \
	FORCEINLINE static uint32 __PPO__IdleAnimation() { return STRUCT_OFFSET(AGrenade, IdleAnimation); } \
	FORCEINLINE static uint32 __PPO__GrenadeMovement() { return STRUCT_OFFSET(AGrenade, GrenadeMovement); }


#define Test_2d_project_Source_Test_2d_project_Grenade_h_9_PROLOG
#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_SPARSE_DATA \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_RPC_WRAPPERS \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_INCLASS \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_2d_project_Source_Test_2d_project_Grenade_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_PRIVATE_PROPERTY_OFFSET \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_SPARSE_DATA \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_INCLASS_NO_PURE_DECLS \
	Test_2d_project_Source_Test_2d_project_Grenade_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_2D_PROJECT_API UClass* StaticClass<class AGrenade>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_2d_project_Source_Test_2d_project_Grenade_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
