#include "Dwarf.h"
#include "Utility.h"

//Dwarf::Dwarf
Dwarf::Dwarf(const std::string& name_, int hp, int armor_ ) :  
Character( hp, armor_, dwarfInitialAttackDamage), name(name_)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(6);
}

const int Dwarf::dwarfInitialAttackDamage{4};

//Dwarf::getName
const std::string& Dwarf::getName() { return name; }

//Dwarf::getStats
std::string Dwarf::getStats() {return getCharacterStats(this); }
