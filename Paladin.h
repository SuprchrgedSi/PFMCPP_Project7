#pragma once
#include "Character.h"

struct Paladin : Character
{
    static const int paladinInitialAttackDamage;

    Paladin(const std::string& name_, int hp, int armor_ );
    const std::string& getName() override;
    std::string getStats() override;
private:
    const std::string name;
};
