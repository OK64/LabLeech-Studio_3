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
}

void AWorldGeneration::BeginPlay()
{
	Super::BeginPlay();
	_GenerateWorld();
	UE_LOG(MyLog, Warning, TEXT("Default Message %s"), roomArray);//s = bool, vector; f = float; d = int;
	for(int i = 0; i < 10; i++)
	{
		//UE_LOG(MyLog, Warning, TEXT("Vector Array x%d, y%d"), roomArray[i][0], roomArray[i][1]);
		
		FString mesh;
		mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_Enclosed.Room_Enclosed'");
		FRotator rotate = FRotator(0, 0, 90);
		if(i == 0)
		{
			//USE CLOSED BLOCK AT START
			int diffX = roomArray[i][0] - roomArray[i + 1][0];
			int diffY = roomArray[i][1] - roomArray[i + 1][1];
			rotate = FRotator(0, (FMath().Atan2(diffY, diffX)*180/3.14159265358979323846f)+90, 90);
		}else if(i < 9){
			int diffX = roomArray[i][0] - roomArray[i - 1][0];
			int diffY = roomArray[i][1] - roomArray[i - 1][1];

			rotate = FRotator(0, (FMath().Atan2(diffY, diffX)*180/3.14159265358979323846f)+90, 90);
			if(roomArray[i-1][0] != roomArray[i+1][0] && roomArray[i-1][1] != roomArray[i+1][1])
			{
				mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_90Degree.Room_90Degree'");
				//USE RIGHT-ANGLED BLOCK AT APPROPRIATE ROATION
				/*if(roomArray[i - 1][0] != roomArray[i][0] && roomArray[i + 1][0] == roomArray[i][0])
				{
					rotate = FRotator(0, 0, 0);
				}*/
				bool prev = false;
				bool after = false;
				if (roomArray[i - 1][0] == roomArray[i][0])
				{
					if (roomArray[i - 1][1] > roomArray[i][1])
					{
						prev = true;
					}else{
						prev = false;
					}

					if (roomArray[i + 1][0] > roomArray[i][0])
					{
						after = true;
					} else {
						after = false;
					}

					if(prev && after)
					{
						rotate = FRotator(0, 270, 90);
					}else if(!prev && !after){
						rotate = FRotator(0, 90, 90);
					}else if(prev && !after){
						rotate = FRotator(0, 0, 90);
					}else{
						rotate = FRotator(0, 180, 90);
					}

				}else if (roomArray[i + 1][0] == roomArray[i][0])
				{
					if (roomArray[i + 1][1] > roomArray[i][1])
					{
						after = true;
					} else {
						after = false;
					}

					if (roomArray[i - 1][0] > roomArray[i][0])
					{
						prev = true;
					} else {
						prev = false;
					}

					if (prev && after)
					{
						rotate = FRotator(0, 270, 90);
					} else if (!prev && !after) {
						rotate = FRotator(0, 90, 90);
					} else if (prev && !after) {
						rotate = FRotator(0, 180, 90);
					} else {
						rotate = FRotator(0, 0, 90);
					}
				}
			}else if(roomArray[i - 1][0] == roomArray[i+1][0])
			{
				mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_Linear.Room_Linear'");
				//INSERT LINEAR BLOCK AT VERTICAL ROTATION
			}else if(roomArray[i - 1][1] == roomArray[i+1][1])
			{
				mesh = TEXT("StaticMesh'/Game/RoomMeshes/Room_Linear.Room_Linear'");
				//INSERT LINEAR BLOCK AT HORIZONTAL ROTATION
			}
		}else{
			//INSERT CLOSED BLOCK AT END
			int diffX = roomArray[i][0] - roomArray[i-1][0];
			int diffY = roomArray[i][1] - roomArray[i-1][1];

			rotate = FRotator(0, (FMath().Atan2(diffY, diffX)*180/3.14159265358979323846f)+90, 90);
		}

		FVector location;
		location.X = roomArray[i][0];
		location.Y = roomArray[i][1];
		location.Z = 0;
		//FVector location = FVector(0, 0, 0);
		//FRotator rotate = FRotator(0, 0, 0);
		FActorSpawnParameters SpawnInfo;
		AMyActor* spawnedActor = GetWorld()->SpawnActor<AMyActor>(AMyActor::StaticClass(), location, rotate, SpawnInfo);
		spawnedActor->SampleMesh->SetStaticMesh(Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *mesh))); //CHANGE TO MESH WHEN IMPLEMENTED CODE
	}
}

void AWorldGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

