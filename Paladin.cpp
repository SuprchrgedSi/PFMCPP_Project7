#include <string>
#include "Paladin.h"
#include "Utility.h"


// Paladin::Paladin
Paladin::Paladin(const std::string& name_, int hp, int armor_ ) :  
Character( hp, armor_, paladinInitialAttackDamage), name(name_)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(7);
}

const int Paladin::paladinInitialAttackDamage{10};

// Paladin::getName
const std::string& Paladin::getName() { return name; }

// Paladin::getStats
std::string Paladin::getStats() {return getCharacterStats(this); }
