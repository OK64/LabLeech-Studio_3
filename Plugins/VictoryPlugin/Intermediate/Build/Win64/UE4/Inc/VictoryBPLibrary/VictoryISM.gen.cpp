// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/VictoryISM.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryISM() {}
// Cross Module References
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryISM_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryISM();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
// End Cross Module References
	void AVictoryISM::StaticRegisterNativesAVictoryISM()
	{
	}
	UClass* Z_Construct_UClass_AVictoryISM_NoRegister()
	{
		return AVictoryISM::StaticClass();
	}
	UClass* Z_Construct_UClass_AVictoryISM()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_VictoryBPLibrary();
			OuterClass = AVictoryISM::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20800080u;


				UProperty* NewProp_Mesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Mesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Mesh, AVictoryISM), 0x00100000000a001d, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<AVictoryISM> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VictoryISM.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VictoryISM.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_Mesh, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("Category"), TEXT("Joy ISM"));
				MetaData->SetValue(NewProp_Mesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Mesh, TEXT("ModuleRelativePath"), TEXT("Public/VictoryISM.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVictoryISM, 826963637);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVictoryISM(Z_Construct_UClass_AVictoryISM, &AVictoryISM::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("AVictoryISM"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryISM);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
