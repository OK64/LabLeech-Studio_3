

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <iostream>
#include <string>

#include "WorldGeneration.generated.h"

using namespace std;
DECLARE_LOG_CATEGORY_EXTERN(MyLog, Log, All);
UCLASS()
class LABLEECH_API AWorldGeneration : public AActor
{
	GENERATED_BODY()
	TSubclassOf<class AActor> Test;
	TArray<TSubclassOf<class AActor>> RoomsToSpawn;
public:	
	// Sets default values for this actor's properties
	FString roomMesh1 = "StaticMesh'/Game/Room_Start/StartRoom_Level.StartRoom_Level'";
	AWorldGeneration();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int roomCount = 0;
	int roomArray[10][2];
	TArray<int32> Rooms;

	UFUNCTION(BlueprintCallable, Category = "Generation")
	void _GenerateWorld()
	{
		UE_LOG(MyLog, Warning, TEXT("_GenerateWorld CALLED"));

		roomArray[roomCount][0] = 0;
		roomArray[roomCount][1] = 0;
		roomCount++;

		int arr[2] = {0, 0};//new object
		while(roomCount < 10)
		{
			arr[0] = roomArray[roomCount-1][0];
			arr[1] = roomArray[roomCount-1][1];
			int validSpaces[4];
			int count = 4;
			int spacesAvailable = 0;
			while(count > 0)
			{
				int sPos[2] = {arr[0], arr[1]};
				switch(count)
				{
					case 1: sPos[1] -= 1500;
						break;
					case 2: sPos[0] += 1500;
						break;
					case 3: sPos[1] += 1500;
						break;
					case 4: sPos[0] -= 1500;
						break;
				}

				bool flag = false;
				for(int i = 0; i < roomCount; i++)
				{
					if (roomArray[i][0] == sPos[0] && roomArray[i][1] == sPos[1])
					{
						flag = true;
					}
				}
				if (flag == false)
				{
					validSpaces[spacesAvailable] = count;
					spacesAvailable ++;
				}
				count--;
			}
			if(spacesAvailable > 0)
			{
				int randomDirection = int(rand()%spacesAvailable);
				switch (validSpaces[randomDirection])
				{
					case 1: arr[1] -= 1500;
						break;
					case 2: arr[0] += 1500;
						break;
					case 3: arr[1] += 1500;
						break;
					case 4: arr[0] -= 1500;
						break;
				}

				roomArray[roomCount][0] = arr[0];
				roomArray[roomCount][1] = arr[1];
				//roomCount++;
			}
			roomCount ++;
		}
	}
};
