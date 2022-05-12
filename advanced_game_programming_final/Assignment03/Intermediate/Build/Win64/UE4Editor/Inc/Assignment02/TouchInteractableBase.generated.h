// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ASSIGNMENT02_TouchInteractableBase_generated_h
#error "TouchInteractableBase.generated.h already included, missing '#pragma once' in TouchInteractableBase.h"
#endif
#define ASSIGNMENT02_TouchInteractableBase_generated_h

#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_SPARSE_DATA
#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnInteract_Implementation); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnInteract_Implementation); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATouchInteractableBase(); \
	friend struct Z_Construct_UClass_ATouchInteractableBase_Statics; \
public: \
	DECLARE_CLASS(ATouchInteractableBase, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ATouchInteractableBase)


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATouchInteractableBase(); \
	friend struct Z_Construct_UClass_ATouchInteractableBase_Statics; \
public: \
	DECLARE_CLASS(ATouchInteractableBase, AInteractableBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(ATouchInteractableBase)


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATouchInteractableBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATouchInteractableBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchInteractableBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchInteractableBase(ATouchInteractableBase&&); \
	NO_API ATouchInteractableBase(const ATouchInteractableBase&); \
public:


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATouchInteractableBase(ATouchInteractableBase&&); \
	NO_API ATouchInteractableBase(const ATouchInteractableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATouchInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATouchInteractableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATouchInteractableBase)


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_12_PROLOG
#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_INCLASS \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class ATouchInteractableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_Public_Interact_TouchInteractableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
