#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "PhotoType.generated.h"

UENUM(BlueprintType)
enum class EPhotoTypes : uint8
{
    None = 0 UMETA(Hidden),
    OneByOne = 1 UMETA(DisplayName = "1x1"),
    OneByTwo = 2 UMETA(DisplayName = "1x2"),
    TwoByOne = 3 UMETA(DisplayName = "2x1") 
};

USTRUCT(BlueprintType)
struct FPhotoTypes
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Type")
    EPhotoTypes Type;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Layer")
    int32 Layer;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Location")
    FVector Location;

    FPhotoTypes()
    {
        Type = EPhotoTypes::None;
        Layer = 0;
		Location = FVector::ZeroVector;
    }
};