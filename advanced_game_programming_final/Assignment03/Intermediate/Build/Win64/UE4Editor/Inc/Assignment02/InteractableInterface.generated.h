// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ASSIGNMENT02_InteractableInterface_generated_h
#error "InteractableInterface.generated.h already included, missing '#pragma once' in InteractableInterface.h"
#endif
#define ASSIGNMENT02_InteractableInterface_generated_h

#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_SPARSE_DATA
#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_RPC_WRAPPERS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void EndFocus_Implementation() {}; \
	virtual void StartFocus_Implementation() {}; \
	virtual void OnInteract_Implementation(AActor* Caller) {}; \
 \
	DECLARE_FUNCTION(execEndFocus); \
	DECLARE_FUNCTION(execStartFocus); \
	DECLARE_FUNCTION(execOnInteract);


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_EVENT_PARMS \
	struct InteractableInterface_eventOnInteract_Parms \
	{ \
		AActor* Caller; \
	};


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_CALLBACK_WRAPPERS
#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSIGNMENT02_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSIGNMENT02_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSIGNMENT02_API UInteractableInterface(UInteractableInterface&&); \
	ASSIGNMENT02_API UInteractableInterface(const UInteractableInterface&); \
public:


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ASSIGNMENT02_API UInteractableInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASSIGNMENT02_API UInteractableInterface(UInteractableInterface&&); \
	ASSIGNMENT02_API UInteractableInterface(const UInteractableInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ASSIGNMENT02_API, UInteractableInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractableInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractableInterface)


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractableInterface(); \
	friend struct Z_Construct_UClass_UInteractableInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractableInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Assignment02"), ASSIGNMENT02_API) \
	DECLARE_SERIALIZER(UInteractableInterface)


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractableInterface() {} \
public: \
	typedef UInteractableInterface UClassType; \
	typedef IInteractableInterface ThisClass; \
	static void Execute_EndFocus(UObject* O); \
	static void Execute_OnInteract(UObject* O, AActor* Caller); \
	static void Execute_StartFocus(UObject* O); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_10_PROLOG \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_EVENT_PARMS


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_RPC_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_SPARSE_DATA \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_CALLBACK_WRAPPERS \
	Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASSIGNMENT02_API UClass* StaticClass<class UInteractableInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Assignment03_Source_Assignment02_Public_Interact_InteractableInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
