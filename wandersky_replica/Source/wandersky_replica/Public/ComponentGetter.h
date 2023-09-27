// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ComponentGetter.generated.h"

/**
 * 
 */
UCLASS()
class WANDERSKY_REPLICA_API UComponentGetter : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure)
	static UActorComponent* GetComponent (AActor* Actor, const FComponentReference& CompRef);
};
