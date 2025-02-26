#pragma once
#include "Character.h"

struct Dragon : Character
{
    static const int dragonInitialAttackDamage;

    Dragon(const std::string& name, int hp, int armor_ );
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
    
private:
    const std::string name;
};

