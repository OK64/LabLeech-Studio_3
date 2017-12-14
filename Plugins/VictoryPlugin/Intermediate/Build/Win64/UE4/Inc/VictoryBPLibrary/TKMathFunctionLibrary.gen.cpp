// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/VictoryBPLibraryPrivatePCH.h"
#include "Public/TKMathFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTKMathFunctionLibrary() {}
// Cross Module References
	VICTORYBPLIBRARY_API UEnum* Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit();
	UPackage* Z_Construct_UPackage__Script_VictoryBPLibrary();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UTKMathFunctionLibrary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians();
	VICTORYBPLIBRARY_API UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees();
	VICTORYBPLIBRARY_API UClass* Z_Construct_UClass_UTKMathFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
// End Cross Module References
static UEnum* ESpeedUnit_StaticEnum()
{
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		Singleton = GetStaticEnum(Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit, Z_Construct_UPackage__Script_VictoryBPLibrary(), TEXT("ESpeedUnit"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpeedUnit(ESpeedUnit_StaticEnum, TEXT("/Script/VictoryBPLibrary"), TEXT("ESpeedUnit"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_VictoryBPLibrary();
		extern uint32 Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpeedUnit"), 0, Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ESpeedUnit"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("CentimeterPerSecond"), 0);
			EnumNames.Emplace(TEXT("FootPerSecond"), 1);
			EnumNames.Emplace(TEXT("MeterPerSecond"), 2);
			EnumNames.Emplace(TEXT("MeterPerMinute"), 3);
			EnumNames.Emplace(TEXT("KilometerPerSecond"), 4);
			EnumNames.Emplace(TEXT("KilometerPerMinute"), 5);
			EnumNames.Emplace(TEXT("KilometerPerHour"), 6);
			EnumNames.Emplace(TEXT("MilePerHour"), 7);
			EnumNames.Emplace(TEXT("Knot"), 8);
			EnumNames.Emplace(TEXT("Mach"), 9);
			EnumNames.Emplace(TEXT("SpeedOfLight"), 10);
			EnumNames.Emplace(TEXT("YardPerSecond"), 11);
			EnumNames.Emplace(TEXT("ESpeedUnit_MAX"), 12);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::Regular);
			ReturnEnum->CppType = TEXT("ESpeedUnit");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("CentimeterPerSecond.ToolTip"), TEXT("Centimeter / second (cm/s). This is default unreal velocity unit."));
			MetaData->SetValue(ReturnEnum, TEXT("FootPerSecond.ToolTip"), TEXT("Foot / second (ft/s)."));
			MetaData->SetValue(ReturnEnum, TEXT("KilometerPerHour.ToolTip"), TEXT("Kilometer / hour (km/h)."));
			MetaData->SetValue(ReturnEnum, TEXT("KilometerPerMinute.ToolTip"), TEXT("Kilometer / minute (km/min)."));
			MetaData->SetValue(ReturnEnum, TEXT("KilometerPerSecond.ToolTip"), TEXT("Kilometer / second (km/s)."));
			MetaData->SetValue(ReturnEnum, TEXT("Knot.ToolTip"), TEXT("Knot (kn). Nautical mile per hour."));
			MetaData->SetValue(ReturnEnum, TEXT("Mach.ToolTip"), TEXT("Mach (speed of sound) (M) at standard atm."));
			MetaData->SetValue(ReturnEnum, TEXT("MeterPerMinute.ToolTip"), TEXT("Meter / minute (m/min)."));
			MetaData->SetValue(ReturnEnum, TEXT("MeterPerSecond.ToolTip"), TEXT("Meter / second (m/s)."));
			MetaData->SetValue(ReturnEnum, TEXT("MilePerHour.ToolTip"), TEXT("Mile / hour (mph)."));
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnEnum, TEXT("SpeedOfLight.ToolTip"), TEXT("Speed of light."));
			MetaData->SetValue(ReturnEnum, TEXT("ToolTip"), TEXT("Speed Units Enum."));
			MetaData->SetValue(ReturnEnum, TEXT("YardPerSecond.ToolTip"), TEXT("Yard / second."));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit_CRC() { return 1224242639U; }
	void UTKMathFunctionLibrary::StaticRegisterNativesUTKMathFunctionLibrary()
	{
		UClass* Class = UTKMathFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "AreLineSegmentsCrossing", (Native)&UTKMathFunctionLibrary::execAreLineSegmentsCrossing },
			{ "ClosestPointOnLineSeqment", (Native)&UTKMathFunctionLibrary::execClosestPointOnLineSeqment },
			{ "ClosestPointOnSphereToLine", (Native)&UTKMathFunctionLibrary::execClosestPointOnSphereToLine },
			{ "ClosestPointsOfLineSegments", (Native)&UTKMathFunctionLibrary::execClosestPointsOfLineSegments },
			{ "ClosestPointsOnTwoLines", (Native)&UTKMathFunctionLibrary::execClosestPointsOnTwoLines },
			{ "ConvertAnchorToAnchor", (Native)&UTKMathFunctionLibrary::execConvertAnchorToAnchor },
			{ "ConvertPhysicsLinearVelocity", (Native)&UTKMathFunctionLibrary::execConvertPhysicsLinearVelocity },
			{ "GetConsoleVariableFloat", (Native)&UTKMathFunctionLibrary::execGetConsoleVariableFloat },
			{ "GetConsoleVariableInt", (Native)&UTKMathFunctionLibrary::execGetConsoleVariableInt },
			{ "GetVelocityAtPoint", (Native)&UTKMathFunctionLibrary::execGetVelocityAtPoint },
			{ "GridSnap", (Native)&UTKMathFunctionLibrary::execGridSnap },
			{ "IsEvenNumber", (Native)&UTKMathFunctionLibrary::execIsEvenNumber },
			{ "IsLineInsideSphere", (Native)&UTKMathFunctionLibrary::execIsLineInsideSphere },
			{ "IsMultipleOf", (Native)&UTKMathFunctionLibrary::execIsMultipleOf },
			{ "IsPointInsideBox", (Native)&UTKMathFunctionLibrary::execIsPointInsideBox },
			{ "IsPowerOfTwo", (Native)&UTKMathFunctionLibrary::execIsPowerOfTwo },
			{ "LineExtentBoxIntersection", (Native)&UTKMathFunctionLibrary::execLineExtentBoxIntersection },
			{ "LineToLineIntersection", (Native)&UTKMathFunctionLibrary::execLineToLineIntersection },
			{ "NegateFloat", (Native)&UTKMathFunctionLibrary::execNegateFloat },
			{ "NegateInt", (Native)&UTKMathFunctionLibrary::execNegateInt },
			{ "NegateVector2D", (Native)&UTKMathFunctionLibrary::execNegateVector2D },
			{ "PointOnWhichSideOfLineSegment", (Native)&UTKMathFunctionLibrary::execPointOnWhichSideOfLineSegment },
			{ "ProjectPointOnLine", (Native)&UTKMathFunctionLibrary::execProjectPointOnLine },
			{ "RoundToLowerMultiple", (Native)&UTKMathFunctionLibrary::execRoundToLowerMultiple },
			{ "RoundToNearestMultiple", (Native)&UTKMathFunctionLibrary::execRoundToNearestMultiple },
			{ "RoundToUpperMultiple", (Native)&UTKMathFunctionLibrary::execRoundToUpperMultiple },
			{ "SetCenterOfMassOffset", (Native)&UTKMathFunctionLibrary::execSetCenterOfMassOffset },
			{ "SetVectorLength", (Native)&UTKMathFunctionLibrary::execSetVectorLength },
			{ "SignedDistancePlanePoint", (Native)&UTKMathFunctionLibrary::execSignedDistancePlanePoint },
			{ "SphereBoxIntersection", (Native)&UTKMathFunctionLibrary::execSphereBoxIntersection },
			{ "VectorDegreesToRadians", (Native)&UTKMathFunctionLibrary::execVectorDegreesToRadians },
			{ "VectorRadiansToDegrees", (Native)&UTKMathFunctionLibrary::execVectorRadiansToDegrees },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing()
	{
		struct TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms
		{
			FVector pointA1;
			FVector pointA2;
			FVector pointB1;
			FVector pointB2;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("AreLineSegmentsCrossing"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), sizeof(bool), true);
			UProperty* NewProp_pointB2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pointB2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(pointB2, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_pointB1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pointB1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(pointB1, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_pointA2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pointA2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(pointA2, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_pointA1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("pointA1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(pointA1, TKMathFunctionLibrary_eventAreLineSegmentsCrossing_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Returns true if the two line segments are intersecting and not parallel.\n* If you need the intersection point, use Closest Points On Two Lines."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment()
	{
		struct TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms
		{
			FVector Point;
			FVector LineStart;
			FVector LineEnd;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosestPointOnLineSeqment"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineEnd = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineEnd, TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineStart = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineStart"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineStart, TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Point, TKMathFunctionLibrary_eventClosestPointOnLineSeqment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find the point on line segment from LineStart to LineEnd which is closest to Point."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine()
	{
		struct TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms
		{
			FVector SphereOrigin;
			float SphereRadius;
			FVector LineOrigin;
			FVector LineDir;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosestPointOnSphereToLine"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineDir = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineDir"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineDir, TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineOrigin, TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SphereRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SphereRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SphereRadius, TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), 0x0010000000000080);
			UProperty* NewProp_SphereOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SphereOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SphereOrigin, TKMathFunctionLibrary_eventClosestPointOnSphereToLine_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find closest point on a Sphere to a Line.\nWhen line intersects Sphere, then closest point to LineOrigin is returned.\n@param SphereOrigin           Origin of Sphere\n@param SphereRadius           Radius of Sphere\n@param LineOrigin             Origin of line\n@param LineDir                        Direction of line.\n@return Closest point on sphere to given line."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments()
	{
		struct TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms
		{
			FVector Line1Start;
			FVector Line1End;
			FVector Line2Start;
			FVector Line2End;
			FVector LinePoint1;
			FVector LinePoint2;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosestPointsOfLineSegments"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms));
			UProperty* NewProp_LinePoint2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LinePoint2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LinePoint2, TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LinePoint1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LinePoint1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LinePoint1, TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Line2End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Line2End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Line2End, TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Line2Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Line2Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Line2Start, TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Line1End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Line1End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Line1End, TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Line1Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Line1Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Line1Start, TKMathFunctionLibrary_eventClosestPointsOfLineSegments_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find closest points between 2 line segments.\n@param        (Line1Start, Line1End)  defines the first line segment.\n@param        (Line2Start, Line2End)  defines the second line segment.\n@param        LinePoint1              Closest point on segment 1 to segment 2.\n@param        LinePoint2              Closest point on segment 2 to segment 1."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines()
	{
		struct TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms
		{
			FVector closestPointLine1;
			FVector closestPointLine2;
			FVector linePoint1;
			FVector lineVec1;
			FVector linePoint2;
			FVector lineVec2;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ClosestPointsOnTwoLines"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), sizeof(bool), true);
			UProperty* NewProp_lineVec2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lineVec2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lineVec2, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_linePoint2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("linePoint2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(linePoint2, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_lineVec1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("lineVec1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(lineVec1, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_linePoint1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("linePoint1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(linePoint1, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_closestPointLine2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("closestPointLine2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(closestPointLine2, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_closestPointLine1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("closestPointLine1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(closestPointLine1, TKMathFunctionLibrary_eventClosestPointsOnTwoLines_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Calculate the closest points between two infinitely long lines.\n* If lines are intersecting (not parallel) it will return false! Use Line To Line Intersection instead.\n* @param closestPointLine1 The closest point of line1 to line2. Returns zero if the lines intersect.\n* @param closestPointLine2 The closest point of line2 to line1. Returns zero if the lines intersect.\n* @param linePoint1 Line point of the first line.\n* @param lineVec1 Line direction (normal) of the first line. Should be a normalized vector.\n* @param linePoint2 Line point of the second line.\n* @param lineVec2 Line direction (normal) of the second line. Should be a normalized vector.\n* @return true if lines are parallel, false otherwise."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor()
	{
		struct TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms
		{
			UObject* WorldContextObject;
			FAnchors CurrentAnchor;
			FMargin Offsets;
			FAnchors TargetAnchor;
			FMargin ConvertedOffsets;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConvertAnchorToAnchor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14422401, 65535, sizeof(TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms));
			UProperty* NewProp_ConvertedOffsets = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ConvertedOffsets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ConvertedOffsets, TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FMargin());
			UProperty* NewProp_TargetAnchor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TargetAnchor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(TargetAnchor, TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAnchors());
			UProperty* NewProp_Offsets = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Offsets"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Offsets, TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FMargin());
			UProperty* NewProp_CurrentAnchor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("CurrentAnchor"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(CurrentAnchor, TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FAnchors());
			UProperty* NewProp_WorldContextObject = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("WorldContextObject"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WorldContextObject, TKMathFunctionLibrary_eventConvertAnchorToAnchor_Parms), 0x0010000000000080, Z_Construct_UClass_UObject_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Anchor"));
			MetaData->SetValue(ReturnFunction, TEXT("DefaultToSelf"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("HidePin"), TEXT("WorldContextObject"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts UMG layout offsets to another anchor."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity()
	{
		struct TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms
		{
			FVector Velocity;
			TEnumAsByte<ESpeedUnit> SpeedUnit;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ConvertPhysicsLinearVelocity"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms), 0x0010000000000580);
			UProperty* NewProp_SpeedUnit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SpeedUnit"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(CPP_PROPERTY_BASE(SpeedUnit, TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms), 0x0010000000000080, Z_Construct_UEnum_VictoryBPLibrary_ESpeedUnit());
			UProperty* NewProp_Velocity = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Velocity"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Velocity, TKMathFunctionLibrary_eventConvertPhysicsLinearVelocity_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts Physics Linear Velocity to a more useful speed unit."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat()
	{
		struct TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms
		{
			FString VariableName;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetConsoleVariableFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms), 0x0010000000000580);
			UProperty* NewProp_VariableName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VariableName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(VariableName, TKMathFunctionLibrary_eventGetConsoleVariableFloat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|Console"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt()
	{
		struct TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms
		{
			FString VariableName;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetConsoleVariableInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms), 0x0010000000000580);
			UProperty* NewProp_VariableName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("VariableName"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(VariableName, TKMathFunctionLibrary_eventGetConsoleVariableInt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|Console"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint()
	{
		struct TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms
		{
			UPrimitiveComponent* Target;
			FVector Point;
			FName BoneName;
			bool DrawDebugInfo;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetVelocityAtPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(DrawDebugInfo, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms);
			UProperty* NewProp_DrawDebugInfo = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DrawDebugInfo"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(DrawDebugInfo, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(DrawDebugInfo, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), sizeof(bool), true);
			UProperty* NewProp_BoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(BoneName, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), 0x0010000000000080);
			UProperty* NewProp_Point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Point, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Target, TKMathFunctionLibrary_eventGetVelocityAtPoint_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Physics"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_DrawDebugInfo"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the current world velocity of a point on a physics-enabled component.\n@param Point - Point in world space.\n@param DrawDebugInfo - Draw debug point & string.\n@param BoneName - If a SkeletalMeshComponent, name of body to get velocity of. 'None' indicates root body.\n@return The velocity of the point in world space."));
			MetaData->SetValue(NewProp_Target, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap()
	{
		struct TKMathFunctionLibrary_eventGridSnap_Parms
		{
			FVector A;
			float Grid;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GridSnap"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventGridSnap_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventGridSnap_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Grid = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Grid"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Grid, TKMathFunctionLibrary_eventGridSnap_Parms), 0x0010000000000080);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventGridSnap_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Snaps vector to nearest grid multiple."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber()
	{
		struct TKMathFunctionLibrary_eventIsEvenNumber_Parms
		{
			float A;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsEvenNumber"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventIsEvenNumber_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventIsEvenNumber_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventIsEvenNumber_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventIsEvenNumber_Parms), sizeof(bool), true);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventIsEvenNumber_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Float"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("isEven"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the number is even (false if it's odd)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere()
	{
		struct TKMathFunctionLibrary_eventIsLineInsideSphere_Parms
		{
			FVector LineStart;
			FVector LineDir;
			float LineLength;
			FVector SphereOrigin;
			float SphereRadius;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsLineInsideSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventIsLineInsideSphere_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), sizeof(bool), true);
			UProperty* NewProp_SphereRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SphereRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SphereRadius, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), 0x0010000000000080);
			UProperty* NewProp_SphereOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SphereOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SphereOrigin, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineLength = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LineLength, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), 0x0010000000000080);
			UProperty* NewProp_LineDir = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineDir"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineDir, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineStart = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineStart"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineStart, TKMathFunctionLibrary_eventIsLineInsideSphere_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Determines whether a line intersects a sphere."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf()
	{
		struct TKMathFunctionLibrary_eventIsMultipleOf_Parms
		{
			int32 A;
			int32 Multiple;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsMultipleOf"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventIsMultipleOf_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventIsMultipleOf_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventIsMultipleOf_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventIsMultipleOf_Parms), sizeof(bool), true);
			UProperty* NewProp_Multiple = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Multiple"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Multiple, TKMathFunctionLibrary_eventIsMultipleOf_Parms), 0x0010000000000080);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventIsMultipleOf_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Integer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the integer is a multiple of the given number."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox()
	{
		struct TKMathFunctionLibrary_eventIsPointInsideBox_Parms
		{
			FVector Point;
			FVector BoxOrigin;
			FVector BoxExtent;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPointInsideBox"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventIsPointInsideBox_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventIsPointInsideBox_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventIsPointInsideBox_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventIsPointInsideBox_Parms), sizeof(bool), true);
			UProperty* NewProp_BoxExtent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoxExtent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoxExtent, TKMathFunctionLibrary_eventIsPointInsideBox_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_BoxOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoxOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoxOrigin, TKMathFunctionLibrary_eventIsPointInsideBox_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Point, TKMathFunctionLibrary_eventIsPointInsideBox_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the given Point vector is within a box (defined by BoxOrigin and BoxExtent)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo()
	{
		struct TKMathFunctionLibrary_eventIsPowerOfTwo_Parms
		{
			int32 x;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsPowerOfTwo"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventIsPowerOfTwo_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventIsPowerOfTwo_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), sizeof(bool), true);
			UProperty* NewProp_x = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("x"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(x, TKMathFunctionLibrary_eventIsPowerOfTwo_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Integer"));
			MetaData->SetValue(ReturnFunction, TEXT("CompactNodeTitle"), TEXT("PwrOf2"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns true if the integer is a power of two number."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection()
	{
		struct TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms
		{
			FBox inBox;
			FVector Start;
			FVector End;
			FVector Extent;
			FVector HitLocation;
			FVector HitNormal;
			float HitTime;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LineExtentBoxIntersection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), sizeof(bool), true);
			UProperty* NewProp_HitTime = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(HitTime, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000180);
			UProperty* NewProp_HitNormal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitNormal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitNormal, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_HitLocation = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(HitLocation, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Extent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Extent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Extent, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_End = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("End"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(End, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Start = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Start"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Start, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_inBox = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inBox"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(inBox, TKMathFunctionLibrary_eventLineExtentBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FBox());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Swept-Box vs Box test.\nSweps a box defined by Extend from Start to End points and returns whether it hit a box or not plus the hit location and hit normal if successful."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection()
	{
		struct TKMathFunctionLibrary_eventLineToLineIntersection_Parms
		{
			FVector IntersectionPoint;
			FVector LinePoint1;
			FVector LineDir1;
			FVector LinePoint2;
			FVector LineDir2;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LineToLineIntersection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14C22401, 65535, sizeof(TKMathFunctionLibrary_eventLineToLineIntersection_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventLineToLineIntersection_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), sizeof(bool), true);
			UProperty* NewProp_LineDir2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineDir2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineDir2, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LinePoint2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LinePoint2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LinePoint2, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineDir1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineDir1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineDir1, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LinePoint1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LinePoint1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LinePoint1, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_IntersectionPoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("IntersectionPoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(IntersectionPoint, TKMathFunctionLibrary_eventLineToLineIntersection_Parms), 0x0010000000000180, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Calculate the intersection point of two infinitely long lines. Returns true if lines intersect, otherwise false.\nNote that in 3d, two lines do not intersect most of the time.\nSo if the two lines are not in the same plane, use Closest Points On Two Lines instead.\n@param IntersectionPoint The intersection point of the lines. Returns zero if the lines do not intersect or the operation fails.\n@param LinePoint1 Line point of the first line.\n@param LineDir1 Line direction (normal) of the first line. Should be a normalized vector.\n@param LinePoint2 Line point of the second line.\n@param LineDir2 Line direction (normal) of the second line. Should be a normalized vector.\n@return true if lines intersect, otherwise false."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat()
	{
		struct TKMathFunctionLibrary_eventNegateFloat_Parms
		{
			float A;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NegateFloat"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventNegateFloat_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventNegateFloat_Parms), 0x0010000000000580);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventNegateFloat_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Float"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reverses the sign (- or +) of a float."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt()
	{
		struct TKMathFunctionLibrary_eventNegateInt_Parms
		{
			int32 A;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NegateInt"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventNegateInt_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventNegateInt_Parms), 0x0010000000000580);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventNegateInt_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Integer"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reverses the sign (- or +) of an integer."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D()
	{
		struct TKMathFunctionLibrary_eventNegateVector2D_Parms
		{
			FVector2D A;
			FVector2D ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NegateVector2D"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventNegateVector2D_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventNegateVector2D_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector2D());
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventNegateVector2D_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector2D());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector2D"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Reverses the sign (- or +) of a Vector2D."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment()
	{
		struct TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms
		{
			FVector linePoint1;
			FVector linePoint2;
			FVector point;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PointOnWhichSideOfLineSegment"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms), 0x0010000000000580);
			UProperty* NewProp_point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(point, TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_linePoint2 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("linePoint2"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(linePoint2, TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_linePoint1 = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("linePoint1"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(linePoint1, TKMathFunctionLibrary_eventPointOnWhichSideOfLineSegment_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Returns 0 if point is on the line segment.\n* Returns 1 if point is not on the line segment and it is on the side of linePoint1.\n* Returns 2 if point is not on the line segment and it is on the side of linePoint2."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine()
	{
		struct TKMathFunctionLibrary_eventProjectPointOnLine_Parms
		{
			FVector LineOrigin;
			FVector LineDirection;
			FVector Point;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ProjectPointOnLine"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventProjectPointOnLine_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventProjectPointOnLine_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Point, TKMathFunctionLibrary_eventProjectPointOnLine_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineDirection = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineDirection"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineDirection, TKMathFunctionLibrary_eventProjectPointOnLine_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_LineOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LineOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(LineOrigin, TKMathFunctionLibrary_eventProjectPointOnLine_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns a vector point which is a projection from a point to a line (defined by the vector couple LineOrigin, LineDirection).\nThe line is infinite (in both directions)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple()
	{
		struct TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			bool skipSelf;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RoundToLowerMultiple"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(skipSelf, TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms);
			UProperty* NewProp_skipSelf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("skipSelf"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(skipSelf, TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(skipSelf, TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), sizeof(bool), true);
			UProperty* NewProp_Multiple = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Multiple"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Multiple, TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), 0x0010000000000080);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventRoundToLowerMultiple_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Integer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Multiple"), TEXT("32"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_skipSelf"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Rounds an integer to the lower multiple of the given number.\nIf Skip Self is set to True it will skip to the previous multiple if the integer rounds to itself.\n@param Multiple - The multiple number to round to.\n@param skipSelf - Skip to the previous multiple if the integer rounds to itself."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple()
	{
		struct TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RoundToNearestMultiple"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms), 0x0010000000000580);
			UProperty* NewProp_Multiple = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Multiple"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Multiple, TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms), 0x0010000000000080);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventRoundToNearestMultiple_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Integer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Multiple"), TEXT("32"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Rounds an integer to the nearest multiple of the given number."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple()
	{
		struct TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms
		{
			int32 A;
			int32 Multiple;
			bool skipSelf;
			int32 ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("RoundToUpperMultiple"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), 0x0010000000000580);
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(skipSelf, TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms);
			UProperty* NewProp_skipSelf = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("skipSelf"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(skipSelf, TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(skipSelf, TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), sizeof(bool), true);
			UProperty* NewProp_Multiple = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Multiple"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(Multiple, TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), 0x0010000000000080);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventRoundToUpperMultiple_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Integer"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_Multiple"), TEXT("32"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_skipSelf"), TEXT("false"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Rounds an integer to the upper multiple of the given number.\nIf Skip Self is set to True it will skip to the next multiple if the integer rounds to itself.\n@param Multiple - The multiple number to round to.\n@param skipSelf - Skip to the next multiple if the integer rounds to itself."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset()
	{
		struct TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms
		{
			UPrimitiveComponent* Target;
			FVector Offset;
			FName BoneName;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetCenterOfMassOffset"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04822401, 65535, sizeof(TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms));
			UProperty* NewProp_BoneName = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoneName"), RF_Public|RF_Transient|RF_MarkAsNative) UNameProperty(CPP_PROPERTY_BASE(BoneName, TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms), 0x0010000000000080);
			UProperty* NewProp_Offset = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Offset"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Offset, TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_Target = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Target"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Target, TKMathFunctionLibrary_eventSetCenterOfMassOffset_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Physics"));
			MetaData->SetValue(ReturnFunction, TEXT("CPP_Default_BoneName"), TEXT("None"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("* Set the physx center of mass offset.\n* Note: this offsets the physx-calculated center of mass (it is not an offset from the pivot point)."));
			MetaData->SetValue(NewProp_Target, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength()
	{
		struct TKMathFunctionLibrary_eventSetVectorLength_Parms
		{
			FVector A;
			float size;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetVectorLength"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventSetVectorLength_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventSetVectorLength_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_size = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("size"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(size, TKMathFunctionLibrary_eventSetVectorLength_Parms), 0x0010000000000080);
			UProperty* NewProp_A = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("A"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(A, TKMathFunctionLibrary_eventSetVectorLength_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Changes the size (length) of a Vector to the given size (normalized vector * size)."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint()
	{
		struct TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms
		{
			FVector planeNormal;
			FVector planePoint;
			FVector point;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SignedDistancePlanePoint"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms), 0x0010000000000580);
			UProperty* NewProp_point = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("point"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(point, TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_planePoint = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("planePoint"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(planePoint, TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_planeNormal = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("planeNormal"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(planeNormal, TKMathFunctionLibrary_eventSignedDistancePlanePoint_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Get the shortest distance between a point and a plane.\nThe output is signed so it holds information as to which side of the plane normal the point is."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection()
	{
		struct TKMathFunctionLibrary_eventSphereBoxIntersection_Parms
		{
			FVector SphereOrigin;
			float SphereRadius;
			FVector BoxOrigin;
			FVector BoxExtent;
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SphereBoxIntersection"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventSphereBoxIntersection_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), sizeof(bool), true);
			UProperty* NewProp_BoxExtent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoxExtent"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoxExtent, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_BoxOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BoxOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(BoxOrigin, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_SphereRadius = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SphereRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SphereRadius, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), 0x0010000000000080);
			UProperty* NewProp_SphereOrigin = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SphereOrigin"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SphereOrigin, TKMathFunctionLibrary_eventSphereBoxIntersection_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector|Intersection"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Performs a sphere vs box intersection test.\n@param SphereOrigin the center of the sphere being tested against the box.\n@param SphereRadius the size of the sphere being tested.\n@param BoxOrigin the box origin being tested against.\n@param BoxExtent the box extend (width, depth, height).\n@return Whether the sphere/box intersect or not."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians()
	{
		struct TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms
		{
			FVector DegVector;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VectorDegreesToRadians"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_DegVector = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("DegVector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(DegVector, TKMathFunctionLibrary_eventVectorDegreesToRadians_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts degrees to radians."));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees()
	{
		struct TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms
		{
			FVector RadVector;
			FVector ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UTKMathFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("VectorRadiansToDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14822401, 65535, sizeof(TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_RadVector = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RadVector"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(RadVector, TKMathFunctionLibrary_eventVectorRadiansToDegrees_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Victory BP Library|TK-Master Math|Vector"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Converts radians to degrees."));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTKMathFunctionLibrary_NoRegister()
	{
		return UTKMathFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UTKMathFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_VictoryBPLibrary();
			OuterClass = UTKMathFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians());
				OuterClass->LinkChild(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_AreLineSegmentsCrossing(), "AreLineSegmentsCrossing"); // 2397337050
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnLineSeqment(), "ClosestPointOnLineSeqment"); // 2246512497
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointOnSphereToLine(), "ClosestPointOnSphereToLine"); // 3039959510
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOfLineSegments(), "ClosestPointsOfLineSegments"); // 2376087225
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ClosestPointsOnTwoLines(), "ClosestPointsOnTwoLines"); // 1819492390
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertAnchorToAnchor(), "ConvertAnchorToAnchor"); // 1568721603
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ConvertPhysicsLinearVelocity(), "ConvertPhysicsLinearVelocity"); // 3857129597
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableFloat(), "GetConsoleVariableFloat"); // 2177322279
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_GetConsoleVariableInt(), "GetConsoleVariableInt"); // 135253329
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_GetVelocityAtPoint(), "GetVelocityAtPoint"); // 902041547
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_GridSnap(), "GridSnap"); // 811362372
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_IsEvenNumber(), "IsEvenNumber"); // 1249035423
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_IsLineInsideSphere(), "IsLineInsideSphere"); // 369596685
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_IsMultipleOf(), "IsMultipleOf"); // 1066738400
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPointInsideBox(), "IsPointInsideBox"); // 2334673694
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_IsPowerOfTwo(), "IsPowerOfTwo"); // 856335440
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_LineExtentBoxIntersection(), "LineExtentBoxIntersection"); // 2096454045
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_LineToLineIntersection(), "LineToLineIntersection"); // 336342197
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateFloat(), "NegateFloat"); // 1749708922
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateInt(), "NegateInt"); // 307360323
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_NegateVector2D(), "NegateVector2D"); // 873755650
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_PointOnWhichSideOfLineSegment(), "PointOnWhichSideOfLineSegment"); // 475919426
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_ProjectPointOnLine(), "ProjectPointOnLine"); // 717267350
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToLowerMultiple(), "RoundToLowerMultiple"); // 3117752337
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToNearestMultiple(), "RoundToNearestMultiple"); // 1798836955
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_RoundToUpperMultiple(), "RoundToUpperMultiple"); // 2124937247
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_SetCenterOfMassOffset(), "SetCenterOfMassOffset"); // 1904999935
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_SetVectorLength(), "SetVectorLength"); // 1671735621
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_SignedDistancePlanePoint(), "SignedDistancePlanePoint"); // 3723739591
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_SphereBoxIntersection(), "SphereBoxIntersection"); // 2078526096
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorDegreesToRadians(), "VectorDegreesToRadians"); // 404238775
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTKMathFunctionLibrary_VectorRadiansToDegrees(), "VectorRadiansToDegrees"); // 4267720999
				static TCppClassTypeInfo<TCppClassTypeTraits<UTKMathFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TKMathFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TKMathFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTKMathFunctionLibrary, 3678435647);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTKMathFunctionLibrary(Z_Construct_UClass_UTKMathFunctionLibrary, &UTKMathFunctionLibrary::StaticClass, TEXT("/Script/VictoryBPLibrary"), TEXT("UTKMathFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTKMathFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
