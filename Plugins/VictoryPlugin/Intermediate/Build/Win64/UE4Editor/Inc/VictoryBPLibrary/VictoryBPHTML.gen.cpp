// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/VictoryBPHTML.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryBPHTML() {}
// Cross Module References
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UVictoryBPHTML_IsHTML();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
// End Cross Module References
	void UVictoryBPHTML::StaticRegisterNativesUVictoryBPHTML()
	{
		UClass* Class = UVictoryBPHTML::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsHTML", (Native)&UVictoryBPHTML::execIsHTML },
			{ "VictoryHTML5_SetCursorVisible", (Native)&UVictoryBPHTML::execVictoryHTML5_SetCursorVisible },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVictoryBPHTML_IsHTML()
	{
		struct VictoryBPHTML_eventIsHTML_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVictoryBPHTML();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsHTML"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VictoryBPHTML_eventIsHTML_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VictoryBPHTML_eventIsHTML_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VictoryBPHTML_eventIsHTML_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VictoryBPHTML_eventIsHTML_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|HTML5"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryBPHTML.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Is the current OS HTML5? This code will only run in games packaged for HTML5, it will not run in Editor builds :) Use this to customize particle FX for HTML5 vs PC builds! Or for any custom HTML5-specific game logic! <3 Rama"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible()
	{
		struct VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms
		{
			bool MakeVisible;
		};
		UObject* Outer = Z_Construct_UClass_UVictoryBPHTML();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VictoryHTML5_SetCursorVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(MakeVisible, VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms);
			UProperty* NewProp_MakeVisible = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("MakeVisible"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(MakeVisible, VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(MakeVisible, VictoryBPHTML_eventVictoryHTML5_SetCursorVisible_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|HTML5"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryBPHTML.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVictoryBPHTML_NoRegister()
	{
		return UVictoryBPHTML::StaticClass();
	}
	UClass* Z_Construct_UClass_UVictoryBPHTML()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_VictoryBPLibrary();
			OuterClass = UVictoryBPHTML::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVictoryBPHTML_IsHTML());
				OuterClass->LinkChild(Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVictoryBPHTML_IsHTML(), "IsHTML"); // 4214402566
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVictoryBPHTML_VictoryHTML5_SetCursorVisible(), "VictoryHTML5_SetCursorVisible"); // 4187223274
				static TCppClassTypeInfo<TCppClassTypeTraits<UVictoryBPHTML> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VictoryBPHTML.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VictoryBPHTML.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("note about UBlueprintFunctionLibrary\n This class is a base class for any function libraries exposed to blueprints.\n Methods in subclasses are expected to be static, and no methods should be added to the base class."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVictoryBPHTML, 2991777016);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVictoryBPHTML(Z_Construct_UClass_UVictoryBPHTML, &UVictoryBPHTML::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UVictoryBPHTML"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVictoryBPHTML);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
