// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementFunctionLibrary.h"

void UMovementFunctionLibrary::MoveByScalar(APawn* pawn, FVector direction, float scalar)
{
	if (pawn == nullptr)
		return;

	pawn->SetActorRelativeLocation(FVector(5.0f, 5.0f, 5.0f));
}