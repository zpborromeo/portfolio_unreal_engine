// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT02_FP_FirstPersonCharacter_generated_h
#error "FP_FirstPersonCharacter.generated.h already included, missing '#pragma once' in FP_FirstPersonCharacter.h"
#endif
#define ASSIGNMENT02_FP_FirstPersonCharacter_generated_h

#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_SPARSE_DATA
#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_RPC_WRAPPERS \
	virtual void TraceForward_Implementation(); \
 \
	DECLARE_FUNCTION(execTraceForward);


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceForward);


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_EVENT_PARMS
#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_CALLBACK_WRAPPERS
#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFP_FirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFP_FirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFP_FirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(AFP_FirstPersonCharacter)


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAFP_FirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFP_FirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFP_FirstPersonCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(AFP_FirstPersonCharacter)


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFP_FirstPersonCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFP_FirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFP_FirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFP_FirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFP_FirstPersonCharacter(AFP_FirstPersonCharacter&&); \
	NO_API AFP_FirstPersonCharacter(const AFP_FirstPersonCharacter&); \
public:


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFP_FirstPersonCharacter(AFP_FirstPersonCharacter&&); \
	NO_API AFP_FirstPersonCharacter(const AFP_FirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFP_FirstPersonCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFP_FirstPersonCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFP_FirstPersonCharacter)


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFP_FirstPersonCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFP_FirstPersonCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFP_FirstPersonCharacter, FirstPersonCameraComponent); }


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_15_PROLOG \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_EVENT_PARMS


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_SPARSE_DATA \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_INCLASS \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_SPARSE_DATA \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class AFP_FirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_FP_FirstPerson_FP_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
