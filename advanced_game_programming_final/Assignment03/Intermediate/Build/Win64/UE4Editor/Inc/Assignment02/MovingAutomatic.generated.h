// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT02_MovingAutomatic_generated_h
#error "MovingAutomatic.generated.h already included, missing '#pragma once' in MovingAutomatic.h"
#endif
#define ASSIGNMENT02_MovingAutomatic_generated_h

#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_SPARSE_DATA
#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_RPC_WRAPPERS
#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingAutomatic(); \
	friend struct Z_Construct_UClass_AMovingAutomatic_Statics; \
public: \
	DECLARE_CLASS(AMovingAutomatic, ATouchInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(AMovingAutomatic)


#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAMovingAutomatic(); \
	friend struct Z_Construct_UClass_AMovingAutomatic_Statics; \
public: \
	DECLARE_CLASS(AMovingAutomatic, ATouchInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(AMovingAutomatic)


#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingAutomatic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingAutomatic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingAutomatic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingAutomatic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingAutomatic(AMovingAutomatic&&); \
	NO_API AMovingAutomatic(const AMovingAutomatic&); \
public:


#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingAutomatic(AMovingAutomatic&&); \
	NO_API AMovingAutomatic(const AMovingAutomatic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingAutomatic); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingAutomatic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingAutomatic)


#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__endPoint() { return STRUCT_OFFSET(AMovingAutomatic, endPoint); } \
	FORCEINLINE static uint32 __PPO__mesh() { return STRUCT_OFFSET(AMovingAutomatic, mesh); } \
	FORCEINLINE static uint32 __PPO__startPos() { return STRUCT_OFFSET(AMovingAutomatic, startPos); } \
	FORCEINLINE static uint32 __PPO__endPos() { return STRUCT_OFFSET(AMovingAutomatic, endPos); } \
	FORCEINLINE static uint32 __PPO__movingSound() { return STRUCT_OFFSET(AMovingAutomatic, movingSound); } \
	FORCEINLINE static uint32 __PPO__moveDuration() { return STRUCT_OFFSET(AMovingAutomatic, moveDuration); } \
	FORCEINLINE static uint32 __PPO__waitTime() { return STRUCT_OFFSET(AMovingAutomatic, waitTime); }


#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_10_PROLOG
#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_INCLASS \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_MovingAutomatic_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class AMovingAutomatic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_Public_MovingAutomatic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
