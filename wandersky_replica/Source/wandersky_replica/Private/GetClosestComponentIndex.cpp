// Fill out your copyright notice in the Description page of Project Settings.


#include "GetClosestComponentIndex.h"

void GetClosestElement(UPARAM(ref) TArray<UActorComponent*>& Array, FVector ReferencePoint, int32& ClosestIndex)
{
	int32 ClosestElementIndex = -1;
	double ShortestDistance = -1;
	for (auto i = 0; i < Array.Num(); i++)
	{
		auto ElemLocation = Array[i]->GetOwner()->GetActorLocation();
		auto CurrentDistance = UE::Geometry::Distance(ElemLocation, ReferencePoint);
		if (ShortestDistance < 0 || CurrentDistance < ShortestDistance)
		{
			ShortestDistance = CurrentDistance;
			ClosestElementIndex = i;
		}
	}

	ClosestIndex = ClosestElementIndex;
}


//, int32 ClosestElementIndex, double ShortestDistance, double CurrentDistance