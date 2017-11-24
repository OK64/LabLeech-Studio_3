// Fill out your copyright notice in the Description page of Project Settings.

#include "WorldGeneration.h"
#include "ConstructorHelpers.h"
#include "MyActor.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
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
		UE_LOG(MyLog, Warning, TEXT("Vector Array x%d, y%d"), roomArray[i][0], roomArray[i][1]);
		
		FString mesh;
		if(i == 0)
		{
			//USE CLOSED BLOCK AT START
			mesh = roomMesh1;
		}else if(i < 9){
			if(roomArray[i-1][0] != roomArray[i+1][0] && roomArray[i-1][1] != roomArray[i+1][1])
			{
				//USE RIGHT-ANGLED BLOCK AT APPROPRIATE ROATION
				/*if(true)
				{}*/
			}else if(roomArray[i - 1][0] == roomArray[i+1][0])
			{
				//INSERT LINEAR BLOCK AT VERTICAL ROTATION
			}else if(roomArray[i - 1][1] == roomArray[i+1][1])
			{
				//INSERT LINEAR BLOCK AT HORIZONTAL ROTATION
			}
		}else{
			//INSERT CLOSED BLOCK AT END
		}

		FVector location;
		location.X = roomArray[i][0];
		location.Y = roomArray[i][1];
		location.Z = 0;
		//FVector location = FVector(0, 0, 0);
		FRotator rotate = FRotator(0, 0, 0);
		FActorSpawnParameters SpawnInfo;
		AMyActor* spawnedActor = GetWorld()->SpawnActor<AMyActor>(AMyActor::StaticClass(), location, rotate, SpawnInfo);
		spawnedActor->SampleMesh->SetStaticMesh(Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), nullptr, *roomMesh1))); //CHANGE TO MESH WHEN IMPLEMENTED CODE
	}
}

void AWorldGeneration::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

