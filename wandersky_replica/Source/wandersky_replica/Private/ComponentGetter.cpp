// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponentGetter.h"

UActorComponent* UComponentGetter::GetComponent(AActor* Actor, const FComponentReference& CompRef)
{
	if(CompRef.ComponentProperty != NAME_None)
	{
		return CompRef.GetComponent(Actor);
	}
	return nullptr;
}