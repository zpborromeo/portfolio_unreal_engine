// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Assignment02/Public/Interact/InteractableInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableInterface() {}
// Cross Module References
	ASSIGNMENT02_API UClass* Z_Construct_UClass_UInteractableInterface_NoRegister();
	ASSIGNMENT02_API UClass* Z_Construct_UClass_UInteractableInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Assignment02();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IInteractableInterface::execEndFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execStartFocus)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFocus_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IInteractableInterface::execOnInteract)
	{
		P_GET_OBJECT(AActor,Z_Param_Caller);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInteract_Implementation(Z_Param_Caller);
		P_NATIVE_END;
	}
	void IInteractableInterface::EndFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EndFocus instead.");
	}
	void IInteractableInterface::OnInteract(AActor* Caller)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnInteract instead.");
	}
	void IInteractableInterface::StartFocus()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartFocus instead.");
	}
	void UInteractableInterface::StaticRegisterNativesUInteractableInterface()
	{
		UClass* Class = UInteractableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndFocus", &IInteractableInterface::execEndFocus },
			{ "OnInteract", &IInteractableInterface::execOnInteract },
			{ "StartFocus", &IInteractableInterface::execStartFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractableInterface_EndFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_EndFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/InteractableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_EndFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "EndFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_EndFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_EndFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_EndFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableInterface_EndFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Caller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::NewProp_Caller = { "Caller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractableInterface_eventOnInteract_Parms, Caller), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::NewProp_Caller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/InteractableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "OnInteract", nullptr, nullptr, sizeof(InteractableInterface_eventOnInteract_Parms), Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_OnInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableInterface_OnInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractableInterface_StartFocus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractableInterface_StartFocus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "Public/Interact/InteractableInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractableInterface_StartFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractableInterface, nullptr, "StartFocus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractableInterface_StartFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractableInterface_StartFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractableInterface_StartFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractableInterface_StartFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractableInterface_NoRegister()
	{
		return UInteractableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UInteractableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Assignment02,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractableInterface_EndFocus, "EndFocus" }, // 1504769491
		{ &Z_Construct_UFunction_UInteractableInterface_OnInteract, "OnInteract" }, // 307620426
		{ &Z_Construct_UFunction_UInteractableInterface_StartFocus, "StartFocus" }, // 3660963544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interact/InteractableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractableInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractableInterface_Statics::ClassParams = {
		&UInteractableInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractableInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractableInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractableInterface, 82797366);
	template<> ASSIGNMENT02_API UClass* StaticClass<UInteractableInterface>()
	{
		return UInteractableInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractableInterface(Z_Construct_UClass_UInteractableInterface, &UInteractableInterface::StaticClass, TEXT("/Script/Assignment02"), TEXT("UInteractableInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractableInterface);
	static FName NAME_UInteractableInterface_EndFocus = FName(TEXT("EndFocus"));
	void IInteractableInterface::Execute_EndFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_EndFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->EndFocus_Implementation();
		}
	}
	static FName NAME_UInteractableInterface_OnInteract = FName(TEXT("OnInteract"));
	void IInteractableInterface::Execute_OnInteract(UObject* O, AActor* Caller)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		InteractableInterface_eventOnInteract_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_OnInteract);
		if (Func)
		{
			Parms.Caller=Caller;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->OnInteract_Implementation(Caller);
		}
	}
	static FName NAME_UInteractableInterface_StartFocus = FName(TEXT("StartFocus"));
	void IInteractableInterface::Execute_StartFocus(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UInteractableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UInteractableInterface_StartFocus);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IInteractableInterface*)(O->GetNativeInterfaceAddress(UInteractableInterface::StaticClass())))
		{
			I->StartFocus_Implementation();
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
