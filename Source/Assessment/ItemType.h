// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "ItemType.generated.h"

UENUM(BlueprintType)
enum class EItemTypes : uint8
{
    None = 0 UMETA(Hidden),
    Pin = 1 UMETA(DisplayName = "Pin"),
    ShortTape = 2 UMETA(DisplayName = "ShortTape"),
    LongTape = 3 UMETA(DisplayName = "LongTape")
};

USTRUCT(BlueprintType)
struct FItemTypes
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Type")
    EItemTypes Type;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
    FVector Location;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ActorRef")
    AActor* ActorRef;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "isPlaced")
    bool isPlaced;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "IsSelected")
    bool bIsSelected;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HalfWidth")
    float HalfWidth;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HalfHeight")
    float HalfHeight;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DefaultPosition")
    FVector DefaultPosition;


    FItemTypes()
    {
        Type = EItemTypes::None;
		Location = FVector::ZeroVector;
        ActorRef = nullptr;
		bIsSelected = false;
        HalfWidth = 0;
        HalfHeight = 0;
		isPlaced = false;
		DefaultPosition = FVector::ZeroVector;
    }
};