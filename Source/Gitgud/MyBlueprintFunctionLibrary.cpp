// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary:: category[4] = { "v", "d", "g", "m" };
int32 UMyBlueprintFunctionLibrary::categoryCounter[4] = { 0,0,0,0 };
int32 UMyBlueprintFunctionLibrary::maxCounter[4] = { 1,35,35,35 };


FString UMyBlueprintFunctionLibrary::generateRandomString()
{
	FString mapString = "";
	while (mapString.Len() != 100) {
		int32 randomInt = rand() % 4;
		mapString.Append(checkAvailable(randomInt));
	}
	for (int i = 0; i < 4; i++) {
		categoryCounter[i] = 0;
	}
	return mapString;
}

FString UMyBlueprintFunctionLibrary::checkAvailable(int randomInt)
{
	while (true) {
		if (categoryCounter[randomInt] == maxCounter[randomInt]) {
			UE_LOG(LogTemp, Log, TEXT("sup"));
			randomInt++;
			if (randomInt == 4) {
				randomInt = 0;
			}

		}
		else {
			categoryCounter[randomInt]++;
			return category[randomInt];
		}
		
	}
}
