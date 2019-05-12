// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MyBlueprintFunctionLibrary.generated.h"

using namespace std;

/**
 * 
 */
UCLASS()
class GITGUD_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "generateRandomString")
		static FString generateRandomString();
		static FString checkAvailable(int randomInt);

		static int32 categoryCounter[3];
		static int32 maxCounter[3];
		static FString category[3];
	
	
	
	
};
