// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/VictoryPC.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVictoryPC() {}
// Cross Module References
	VICTORYBPLIBRARY_API UScriptStruct* Z_Construct_UScriptStruct_FVictorySubtitleCue();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryPC();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitleCue();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_AVictoryPC_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
// End Cross Module References
class UScriptStruct* FVictorySubtitleCue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VICTORYBPLIBRARY_API uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVictorySubtitleCue, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("VictorySubtitleCue"), sizeof(FVictorySubtitleCue), Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVictorySubtitleCue(FVictorySubtitleCue::StaticStruct, TEXT("/Script/VictoryBPLibrary"), TEXT("VictorySubtitleCue"), false, nullptr, nullptr);
static struct FScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue
{
	FScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("VictorySubtitleCue")),new UScriptStruct::TCppStructOps<FVictorySubtitleCue>);
	}
} ScriptStruct_VictoryBPLibrary_StaticRegisterNativesFVictorySubtitleCue;
	UScriptStruct* Z_Construct_UScriptStruct_FVictorySubtitleCue()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		extern uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VictorySubtitleCue"), sizeof(FVictorySubtitleCue), Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VictorySubtitleCue"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FVictorySubtitleCue>, EStructFlags(0x00000001));
			UProperty* NewProp_Time = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Time"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Time, FVictorySubtitleCue), 0x0010000000000005);
			UProperty* NewProp_SubtitleText = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SubtitleText"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(SubtitleText, FVictorySubtitleCue), 0x0010000000000005);
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("BlueprintType"), TEXT("true"));
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(ReturnStruct, TEXT("ToolTip"), TEXT("Exposing the UE4 Subtitle system for Solus\n <3 Rama"));
			MetaData->SetValue(NewProp_Time, TEXT("Category"), TEXT("SubtitleCue"));
			MetaData->SetValue(NewProp_Time, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(NewProp_Time, TEXT("ToolTip"), TEXT("The time at which the subtitle is to be displayed, in seconds relative to the beginning of the line."));
			MetaData->SetValue(NewProp_SubtitleText, TEXT("Category"), TEXT("SubtitleCue"));
			MetaData->SetValue(NewProp_SubtitleText, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(NewProp_SubtitleText, TEXT("ToolTip"), TEXT("The text to appear in the subtitle."));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVictorySubtitleCue_CRC() { return 41595051U; }
	static FName NAME_AVictoryPC_OnVictorySubtitlesQueued = FName(TEXT("OnVictorySubtitlesQueued"));
	void AVictoryPC::OnVictorySubtitlesQueued(TArray<FVictorySubtitleCue> const& VictorySubtitles, float CueDuration)
	{
		VictoryPC_eventOnVictorySubtitlesQueued_Parms Parms;
		Parms.VictorySubtitles=VictorySubtitles;
		Parms.CueDuration=CueDuration;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryPC_OnVictorySubtitlesQueued),&Parms);
	}
	static FName NAME_AVictoryPC_VictoryPC_GetMyIP_DataReceived = FName(TEXT("VictoryPC_GetMyIP_DataReceived"));
	void AVictoryPC::VictoryPC_GetMyIP_DataReceived(const FString& YourIP)
	{
		VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms Parms;
		Parms.YourIP=YourIP;
		ProcessEvent(FindFunctionChecked(NAME_AVictoryPC_VictoryPC_GetMyIP_DataReceived),&Parms);
	}
	void AVictoryPC::StaticRegisterNativesAVictoryPC()
	{
		UClass* Class = AVictoryPC::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Subtitles_CPPDelegate", (Native)&AVictoryPC::execSubtitles_CPPDelegate },
			{ "VictoryPC_GetMyIP_SendRequest", (Native)&AVictoryPC::execVictoryPC_GetMyIP_SendRequest },
			{ "VictoryPlaySpeechSound", (Native)&AVictoryPC::execVictoryPlaySpeechSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued()
	{
		UObject* Outer = Z_Construct_UClass_AVictoryPC();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnVictorySubtitlesQueued"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08420800, 65535, sizeof(VictoryPC_eventOnVictorySubtitlesQueued_Parms));
			UProperty* NewProp_CueDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CueDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CueDuration, VictoryPC_eventOnVictorySubtitlesQueued_Parms), 0x0010000000000080);
			UProperty* NewProp_VictorySubtitles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VictorySubtitles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VictorySubtitles, VictoryPC_eventOnVictorySubtitlesQueued_Parms), 0x0010000008000182);
			UProperty* NewProp_VictorySubtitles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VictorySubtitles, TEXT("VictorySubtitles"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FVictorySubtitleCue());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory Subtitles"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(NewProp_VictorySubtitles, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate()
	{
		struct VictoryPC_eventSubtitles_CPPDelegate_Parms
		{
			TArray<FSubtitleCue> VictorySubtitles;
			float CueDuration;
		};
		UObject* Outer = Z_Construct_UClass_AVictoryPC();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Subtitles_CPPDelegate"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x00420401, 65535, sizeof(VictoryPC_eventSubtitles_CPPDelegate_Parms));
			UProperty* NewProp_CueDuration = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CueDuration"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CueDuration, VictoryPC_eventSubtitles_CPPDelegate_Parms), 0x0010000000000080);
			UProperty* NewProp_VictorySubtitles = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VictorySubtitles"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(VictorySubtitles, VictoryPC_eventSubtitles_CPPDelegate_Parms), 0x0010000008000182);
			UProperty* NewProp_VictorySubtitles_Inner = new(EC_InternalUseOnlyConstructor, NewProp_VictorySubtitles, TEXT("VictorySubtitles"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FSubtitleCue());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(NewProp_VictorySubtitles, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived()
	{
		UObject* Outer = Z_Construct_UClass_AVictoryPC();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VictoryPC_GetMyIP_DataReceived"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x08020800, 65535, sizeof(VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms));
			UProperty* NewProp_YourIP = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("YourIP"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(YourIP, VictoryPC_eventVictoryPC_GetMyIP_DataReceived_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory PC"));
			MetaData->SetValue(ReturnFunction, TEXT("DisplayName"), TEXT("Victory PC ~ GetMyIP ~ Data Received!"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Implement this event to receive your IP once the request is processed! This requires that your computer has a live internet connection"));
			MetaData->SetValue(NewProp_YourIP, TEXT("NativeConst"), TEXT(""));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest()
	{
		struct VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVictoryPC();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VictoryPC_GetMyIP_SendRequest"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020401, 65535, sizeof(VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VictoryPC_eventVictoryPC_GetMyIP_SendRequest_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory PC"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("This node relies on http://api.ipify.org, so if this node ever stops working, check out http://api.ipify.org.  Returns false if the operation could not occur because HTTP module was not loaded or unable to process request."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound()
	{
		struct VictoryPC_eventVictoryPlaySpeechSound_Parms
		{
			USoundBase* Sound;
			float VolumeMultiplier;
			float PitchMultiplier;
			float StartTime;
			UAudioComponent* ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_AVictoryPC();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VictoryPlaySpeechSound"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04020409, 65535, sizeof(VictoryPC_eventVictoryPlaySpeechSound_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ReturnValue, VictoryPC_eventVictoryPlaySpeechSound_Parms), 0x0010000000080588, Z_Construct_UClass_UAudioComponent_NoRegister());
			UProperty* NewProp_StartTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("StartTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(StartTime, VictoryPC_eventVictoryPlaySpeechSound_Parms), 0x0010000000000080);
			UProperty* NewProp_PitchMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PitchMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(PitchMultiplier, VictoryPC_eventVictoryPlaySpeechSound_Parms), 0x0010000000000080);
			UProperty* NewProp_VolumeMultiplier = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VolumeMultiplier"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(VolumeMultiplier, VictoryPC_eventVictoryPlaySpeechSound_Parms), 0x0010000000000080);
			UProperty* NewProp_Sound = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Sound"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sound, VictoryPC_eventVictoryPlaySpeechSound_Parms), 0x0010000000000080, Z_Construct_UClass_USoundBase_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory Subtitles"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_PitchMultiplier"), TEXT("1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_StartTime"), TEXT("0.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_VolumeMultiplier"), TEXT("1.000000"));
			MetaData->SetValue(ReturnFunction, TEXT("Keywords"), TEXT("play"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("When the sound is played OnVictorySubtitlesQueued will be called with the subtitles!\nYou can bind an event off of the audio component for OnAudioFinished to know hwen the sound is done!"));
			MetaData->SetValue(ReturnFunction, TEXT("UnsafeDuringActorConstruction"), TEXT("true"));
			MetaData->SetValue(NewProp_ReturnValue, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVictoryPC_NoRegister()
	{
		return AVictoryPC::StaticClass();
	}
	UClass* Z_Construct_UClass_AVictoryPC()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_VictoryBPLibrary();
			OuterClass = AVictoryPC::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900284u;

				OuterClass->LinkChild(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued());
				OuterClass->LinkChild(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate());
				OuterClass->LinkChild(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived());
				OuterClass->LinkChild(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest());
				OuterClass->LinkChild(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVictoryPC_OnVictorySubtitlesQueued(), "OnVictorySubtitlesQueued"); // 3384544389
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVictoryPC_Subtitles_CPPDelegate(), "Subtitles_CPPDelegate"); // 1095801014
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_DataReceived(), "VictoryPC_GetMyIP_DataReceived"); // 3812231087
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVictoryPC_VictoryPC_GetMyIP_SendRequest(), "VictoryPC_GetMyIP_SendRequest"); // 1811808854
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AVictoryPC_VictoryPlaySpeechSound(), "VictoryPlaySpeechSound"); // 3472693027
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AVictoryPC> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VictoryPC.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VictoryPC.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVictoryPC, 2596301957);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVictoryPC(Z_Construct_UClass_AVictoryPC, &AVictoryPC::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("AVictoryPC"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVictoryPC);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
