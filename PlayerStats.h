// PlayerStats.h

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlayerStats.generated.h"

UCLASS()
class MYPROJECT_API APlayerStats : public AActor
{
    GENERATED_BODY()

public:
    // The player's attributes
    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Wisdom = 1;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Intelligence = 1;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Strength = 1;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Dexterity = 1;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Luck = 1;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Faith = 1;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Stamina = 10;

    // The player's experience points and level
    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 ExperiencePoints = 0;

    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 Level = 1;

    // The amount of experience points required for the player to level up
    UPROPERTY(EditAnywhere, Category = "Player Stats")
    int32 ExperiencePointsPerLevel = 100;

    // Increases the player's experience points and levels up if necessary
    void GainExperience(int32 Amount);
};
