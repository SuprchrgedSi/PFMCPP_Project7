#pragma once
#include <string>
#include "Character.h"

struct Dwarf : public Character
{
    static const int dwarfInitialAttackDamage;

    Dwarf(const std::string& name, int hp, int armor_ );
    const std::string& getName() override;
    std::string getStats() override;

private:
    const std::string name;
};
