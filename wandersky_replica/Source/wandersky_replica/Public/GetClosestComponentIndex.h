// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GetClosestComponentIndex.generated.h"

/**
 * 
 */
UCLASS()
class WANDERSKY_REPLICA_API UGetClosestComponentIndex : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	/** Please add a function description */
	UFUNCTION(BlueprintCallable)
	void GetClosestElement(UPARAM(ref) TArray<UActorComponent*>& Array, FVector ReferencePoint, int32& ClosestIndex);
};
