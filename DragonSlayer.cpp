#include "DragonSlayer.h"
#include "Dragon.h"
#include "Utility.h"
// #include "AttackItem.h"
// #include "Character.h"

//DragonSlayer::DragonSlayer
DragonSlayer::DragonSlayer(const std::string& name_, int hp, int armor_ ) : 
Character( hp, armor_, dragonSlayerInitialAttackDamage),  name(name_)
{
    attackItem = std::make_unique<AttackItem>();
    helpfulItems = makeHelpfulItems(4);
    defensiveItems = makeDefensiveItems(2);

}

const int DragonSlayer::dragonSlayerInitialAttackDamage{4};

//DragonSlayer::getName
const std::string& DragonSlayer::getName() { return name; }

void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        if (attackItem != nullptr) 
            {
                attackItem->use(this);
                attackItem.reset(); // One time use
            }
        
        while( dragon->getHP() > 0 )
        {
            dragon->takeDamage(attackDamage);
        }
    }
        
     Character::attack(other);
        
}

//DragonSlayer::getStats
std::string DragonSlayer::getStats() {return getCharacterStats(this); }
