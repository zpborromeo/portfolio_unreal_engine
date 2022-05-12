// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASSIGNMENT02_CharacterBase_generated_h
#error "CharacterBase.generated.h already included, missing '#pragma once' in CharacterBase.h"
#endif
#define ASSIGNMENT02_CharacterBase_generated_h

#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_SPARSE_DATA
#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_RPC_WRAPPERS \
	virtual void TraceForward_Implementation(); \
 \
	DECLARE_FUNCTION(execTraceForward);


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTraceForward);


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_EVENT_PARMS
#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_CALLBACK_WRAPPERS
#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesACharacterBase(); \
	friend struct Z_Construct_UClass_ACharacterBase_Statics; \
public: \
	DECLARE_CLASS(ACharacterBase, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ACharacterBase)


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACharacterBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACharacterBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public:


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACharacterBase(ACharacterBase&&); \
	NO_API ACharacterBase(const ACharacterBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterBase)


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_PRIVATE_PROPERTY_OFFSET
#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_15_PROLOG \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_EVENT_PARMS


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_INCLASS \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class ACharacterBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_Public_character_stuff_CharacterBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
