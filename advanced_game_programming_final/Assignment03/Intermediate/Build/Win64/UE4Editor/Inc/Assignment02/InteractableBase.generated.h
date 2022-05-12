// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASSIGNMENT02_InteractableBase_generated_h
#error "InteractableBase.generated.h already included, missing '#pragma once' in InteractableBase.h"
#endif
#define ASSIGNMENT02_InteractableBase_generated_h

#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_SPARSE_DATA
#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation(); \
	virtual void StartFocus_Implementation(); \
	virtual void OnInteract_Implementation(AActor* Caller); \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_EVENT_PARMS \
	struct InteractableBase_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_CALLBACK_WRAPPERS
#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractableBase(); \
	friend struct Z_Construct_UClass_AInteractableBase_Statics; \
public: \
	DECLARE_CLASS(AInteractableBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(AInteractableBase) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableBase*>(this); }


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAInteractableBase(); \
	friend struct Z_Construct_UClass_AInteractableBase_Statics; \
public: \
	DECLARE_CLASS(AInteractableBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Assignment02"), NO_API) \
	DECLARE_SERIALIZER(AInteractableBase) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractableBase*>(this); }


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractableBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractableBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableBase(AInteractableBase&&); \
	NO_API AInteractableBase(const AInteractableBase&); \
public:


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractableBase(AInteractableBase&&); \
	NO_API AInteractableBase(const AInteractableBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractableBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractableBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractableBase)


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_PRIVATE_PROPERTY_OFFSET
#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_10_PROLOG \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_EVENT_PARMS


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_INCLASS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_PRIVATE_PROPERTY_OFFSET \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_INCLASS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class AInteractableBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_Public_Interact_InteractableBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
