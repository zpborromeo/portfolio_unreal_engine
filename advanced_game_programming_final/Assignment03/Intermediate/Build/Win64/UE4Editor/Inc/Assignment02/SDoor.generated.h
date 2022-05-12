// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASSIGNMENT02_SDoor_generated_h
#error "SDoor.generated.h already included, missing '#pragma once' in SDoor.h"
#endif
#define ASSIGNMENT02_SDoor_generated_h

#define Assignment03_Source_Assignment02_SDoor_h_14_SPARSE_DATA
#define Assignment03_Source_Assignment02_SDoor_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define Assignment03_Source_Assignment02_SDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define Assignment03_Source_Assignment02_SDoor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDoor(); \
	friend struct Z_Construct_UClass_ASDoor_Statics; \
public: \
	DECLARE_CLASS(ASDoor, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ASDoor)


#define Assignment03_Source_Assignment02_SDoor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesASDoor(); \
	friend struct Z_Construct_UClass_ASDoor_Statics; \
public: \
	DECLARE_CLASS(ASDoor, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ASDoor)


#define Assignment03_Source_Assignment02_SDoor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDoor(ASDoor&&); \
	NO_API ASDoor(const ASDoor&); \
public:


#define Assignment03_Source_Assignment02_SDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDoor(ASDoor&&); \
	NO_API ASDoor(const ASDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASDoor)


#define Assignment03_Source_Assignment02_SDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__doorMesh() { return STRUCT_OFFSET(ASDoor, doorMesh); } \
	FORCEINLINE static uint32 __PPO__doorFrameMesh() { return STRUCT_OFFSET(ASDoor, doorFrameMesh); } \
	FORCEINLINE static uint32 __PPO__maxDegree() { return STRUCT_OFFSET(ASDoor, maxDegree); } \
	FORCEINLINE static uint32 __PPO__doorSpeed() { return STRUCT_OFFSET(ASDoor, doorSpeed); }


#define Assignment03_Source_Assignment02_SDoor_h_11_PROLOG
#define Assignment03_Source_Assignment02_SDoor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_SDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_SDoor_h_14_SPARSE_DATA \
	Assignment03_Source_Assignment02_SDoor_h_14_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_SDoor_h_14_INCLASS \
	Assignment03_Source_Assignment02_SDoor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_SDoor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_SDoor_h_14_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_SDoor_h_14_SPARSE_DATA \
	Assignment03_Source_Assignment02_SDoor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_SDoor_h_14_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_SDoor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class ASDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_SDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
