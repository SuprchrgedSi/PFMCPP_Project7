#pragma once
#include "Character.h"
#include "AttackItem.h"

struct DragonSlayer : Character
{
    static const int dragonSlayerInitialAttackDamage;

    std::unique_ptr<AttackItem> attackItem = nullptr;

    DragonSlayer(const std::string& name_, int hp, int armor_ );
    const std::string& getName() override;
    std::string getStats() override;
    void attack(Character& other) override;
private:
    const std::string name;
};
