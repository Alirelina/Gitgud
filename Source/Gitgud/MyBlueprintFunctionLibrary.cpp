// Fill out your copyright notice in the Description page of Project Settings.

#include "MyBlueprintFunctionLibrary.h"

FString UMyBlueprintFunctionLibrary:: category[4] = { "g", "d", "v", "m" };

FString UMyBlueprintFunctionLibrary::generateRandomString()
{
	FString mapString = "";
	while (mapString.Len() != 200) {
		int randomInt = rand() % 4;
		mapString.Append(checkAvailable(randomInt));
	}
	UE_LOG(LogTemp, Log, TEXT("%s"), *mapString);

	return mapString;
}

FString UMyBlueprintFunctionLibrary::checkAvailable(int randomInt)
{
	return category[randomInt];
}
