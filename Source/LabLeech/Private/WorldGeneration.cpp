// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGeneration.h"
#include "ConstructorHelpers.h"
#include "MyActor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include <math.h>
DEFINE_LOG_CATEGORY(MyLog);

// Sets default values
AWorldGeneration::AWorldGeneration()
{
	PrimaryActorTick.bCanEverTick = true;
	roomMesh1 = TEXT("StaticMesh'/Game/Room_Start/StartRoom_Level.StartRoom_Level'");

	static ConstructorHelpers::FObjectFinder<UBlueprint>StartMap(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/StartLevel.StartLevel'"));
	if(StartMap.Object)
		RoomsToSpawn.Add((UClass*)StartMap.Object->GeneratedClass);

	static ConstructorHelpers::FObjectFinder<UBlueprint>LinearMap1(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/TwoDoor_Level_001.TwoDoor_Level_001'"));
	if(LinearMap1.Object)
		RoomsToSpawn.Add((UClass*)LinearMap1.Object->GeneratedClass);
	static ConstructorHelpers::FObjectFinder<UBlueprint>LinearMap2(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/TwoDoor_Level_002.TwoDoor_Level_002'"));
	if(LinearMap2.Object)
		RoomsToSpawn.Add((UClass*)LinearMap2.Object->GeneratedClass);
	static ConstructorHelpers::FObjectFinder<UBlueprint>LinearMap3(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/TwoDoor_Level_003.TwoDoor_Level_003'"));
	if(LinearMap3.Object)
		RoomsToSpawn.Add((UClass*)LinearMap3.Object->GeneratedClass);

	static ConstructorHelpers::FObjectFinder<UBlueprint>AngledMap1(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/RightAngle_Level_001.RightAngle_Level_001'"));
	if(AngledMap1.Object)
		RoomsToSpawn.Add((UClass*)AngledMap1.Object->GeneratedClass);
	static ConstructorHelpers::FObjectFinder<UBlueprint>AngledMap2(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/RightAngle_Level_002.RightAngle_Level_002'"));
	if(AngledMap2.Object)
		RoomsToSpawn.Add((UClass*)AngledMap2.Object->GeneratedClass);
	static ConstructorHelpers::FObjectFinder<UBlueprint>AngledMap3(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/RightAngle_Level_003.RightAngle_Level_003'"));
	if(AngledMap3.Object)
		RoomsToSpawn.Add((UClass*)AngledMap3.Object->GeneratedClass);

	static ConstructorHelpers::FObjectFinder<UBlueprint>EndMap(TEXT("Blueprint'/Game/Maps/BluePrint_MapFiles/EndLevel.EndLevel'"));
	if(EndMap.Object)
		RoomsToSpawn.Add((UClass*)EndMap.Object->GeneratedClass);
}

void AWorldGeneration::BeginPlay()
{
	Super::BeginPlay();
	_GenerateWorld();
	UE_LOG(MyLog, Warning, TEXT("Default Message %s"), roomArray);//s = bool, vector; f = float; d = int;
	int RoomIndex = 0;
	for(int i = 0; i < 10; i++)
	{
		//UE_LOG(MyLog, Warning, TEXT("Vector Array x%d, y%d"), roomArray[i][0], roomArray[i][1]);
		
		FString mesh;
		mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_Enclosed.Room_Enclosed'");
		RoomIndex = 0;
		FRotator rotate = FRotator(0, 0, 0);
		if(i == 0)
		{
			int diffX = roomArray[i][0] - roomArray[i + 1][0];
			int diffY = roomArray[i][1] - roomArray[i + 1][1];
			rotate = FRotator(0, (FMath().Atan2(diffY, diffX)*180/3.14159265358979323846f)+90, 0);
		}else if(i < 9){
			int diffX = roomArray[i][0] - roomArray[i - 1][0];
			int diffY = roomArray[i][1] - roomArray[i - 1][1];

			int32 roomVariation = FMath::RandRange(0, 2);
			rotate = FRotator(0, (FMath().Atan2(diffY, diffX)*180/3.14159265358979323846f)+90, 0);
			if(roomArray[i-1][0] != roomArray[i+1][0] && roomArray[i-1][1] != roomArray[i+1][1])
			{
				mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_90Degree.Room_90Degree'");
				RoomIndex = 4 +roomVariation;
				/*if(roomArray[i - 1][0] != roomArray[i][0] && roomArray[i + 1][0] == roomArray[i][0])
				{
					rotate = FRotator(0, 0, 0);
				}*/
				bool prev = false;
				bool after = false;
				if(roomArray[i - 1][0] == roomArray[i][0])
				{
					if(roomArray[i - 1][1] > roomArray[i][1])
					{
						prev = true;
					}else{
						prev = false;
					}

					if(roomArray[i + 1][0] > roomArray[i][0])
					{
						after = true;
					}else{
						after = false;
					}

					if(prev && after)
					{
						rotate = FRotator(0, 270, 0);
					}else if(!prev && !after){
						rotate = FRotator(0, 90, 0);
					}else if(prev && !after){
						rotate = FRotator(0, 0, 0);
					}else{
						rotate = FRotator(0, 180, 0);
					}

				}else if(roomArray[i + 1][0] == roomArray[i][0])
				{
					if(roomArray[i + 1][1] > roomArray[i][1])
					{
						after = true;
					}else{
						after = false;
					}

					if(roomArray[i - 1][0] > roomArray[i][0])
					{
						prev = true;
					}else{
						prev = false;
					}

					if(prev && after)
					{
						rotate = FRotator(0, 270, 0);
					}else if (!prev && !after) {
						rotate = FRotator(0, 90, 0);
					}else if (prev && !after) {
						rotate = FRotator(0, 180, 0);
					}else{
						rotate = FRotator(0, 0, 0);
					}
				}
			}else if(roomArray[i - 1][0] == roomArray[i+1][0])
			{
				mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_Linear.Room_Linear'");
				RoomIndex = 1 +roomVariation;
			}else if(roomArray[i - 1][1] == roomArray[i+1][1])
			{
				mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_Linear.Room_Linear'");
				RoomIndex = 1 +roomVariation;
			}
		}else{
			RoomIndex = RoomsToSpawn.Num()-1;
			int diffX = roomArray[i][0] - roomArray[i-1][0];
			int diffY = roomArray[i][1] - roomArray[i-1][1];

			rotate = FRotator(0, (FMath().Atan2(diffY, diffX)*180/3.14159265358979323846f)+90, 0);
		}

		FVector location;
		location.X = roomArray[i][0];
		location.Y = roomArray[i][1];
		location.Z = 0;
		//FVector location = FVector(0, 0, 0);
		//FRotator rotate = FRotator(0, 0, 0);
		FActorSpawnParameters SpawnInfo;
		//AMyActor* spawnedActor = GetWorld()->SpawnActor<AMyActor>(AMyActor::StaticClass(), location, rotate, SpawnInfo);
		//spawnedActor->SampleMesh->SetStaticMesh(Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *mesh)));

		//int32 RoomIndex = FMath::RandRange(0, RoomsToSpawn.Num() -1);
		AActor* SpawnRoom = GetWorld()->SpawnActor<AActor>(RoomsToSpawn[RoomIndex], location, rotate, SpawnInfo);
		SpawnRoom->SetActorScale3D(FVector(1.5f, 1.5f, 1.5f));

		//AActor* asd = GetWorld()->SpawnActor<AActor>(Test, location, rotate, SpawnInfo);
	}
}

void AWorldGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

