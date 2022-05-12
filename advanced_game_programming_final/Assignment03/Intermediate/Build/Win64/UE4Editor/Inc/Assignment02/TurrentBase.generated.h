// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT02_TurrentBase_generated_h
#error "TurrentBase.generated.h already included, missing '#pragma once' in TurrentBase.h"
#endif
#define ASSIGNMENT02_TurrentBase_generated_h

#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_SPARSE_DATA
#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindTarget);


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindTarget);


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurrentBase(); \
	friend struct Z_Construct_UClass_ATurrentBase_Statics; \
public: \
	DECLARE_CLASS(ATurrentBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ATurrentBase)


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_INCLASS \
private: \
	static void StaticRegisterNativesATurrentBase(); \
	friend struct Z_Construct_UClass_ATurrentBase_Statics; \
public: \
	DECLARE_CLASS(ATurrentBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ATurrentBase)


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurrentBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurrentBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurrentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurrentBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurrentBase(ATurrentBase&&); \
	NO_API ATurrentBase(const ATurrentBase&); \
public:


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurrentBase(ATurrentBase&&); \
	NO_API ATurrentBase(const ATurrentBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurrentBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurrentBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurrentBase)


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorsToIgnore() { return STRUCT_OFFSET(ATurrentBase, ActorsToIgnore); } \
	FORCEINLINE static uint32 __PPO__ActorIgnoreSphereOverlap() { return STRUCT_OFFSET(ATurrentBase, ActorIgnoreSphereOverlap); } \
	FORCEINLINE static uint32 __PPO__TraceObjectTypes() { return STRUCT_OFFSET(ATurrentBase, TraceObjectTypes); } \
	FORCEINLINE static uint32 __PPO__BestTarget() { return STRUCT_OFFSET(ATurrentBase, BestTarget); } \
	FORCEINLINE static uint32 __PPO__RotationAC() { return STRUCT_OFFSET(ATurrentBase, RotationAC); } \
	FORCEINLINE static uint32 __PPO__FireAC() { return STRUCT_OFFSET(ATurrentBase, FireAC); }


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_18_PROLOG
#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_INCLASS \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class ATurrentBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_Public_Projectiles_TurrentBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
