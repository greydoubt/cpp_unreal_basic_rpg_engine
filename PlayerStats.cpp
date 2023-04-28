#include "PlayerStats.h"

void APlayerStats::GainExperience(int32 Amount)
{
    ExperiencePoints += Amount;

    if (ExperiencePoints >= ExperiencePointsPerLevel)
    {
        ExperiencePoints -= ExperiencePointsPerLevel;
        Level++;

        // Increase the player's attributes based on their new level
        Wisdom += 1;
        Intelligence += 1;
        Strength += 2;
        Dexterity += 2;
        Luck += 1;
        Faith += 1;
        Stamina += 5;

        // Increase the experience points required for the next level
        ExperiencePointsPerLevel += Level * 100;
    }
}
