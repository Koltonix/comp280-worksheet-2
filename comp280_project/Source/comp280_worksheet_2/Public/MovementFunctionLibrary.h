// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Math/Vector.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MovementFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class COMP280_WORKSHEET_2_API UMovementFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category="Movement")
		static void MoveByScalar(APawn* pawn, FVector direction, float scalar);
};
