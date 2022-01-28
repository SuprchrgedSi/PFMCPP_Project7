#include "AttackItem.h"
#include "Utility.h"
#include "Character.h"

AttackItem::AttackItem() : Item("Attack Item", 10) {}

void AttackItem::use(Character* character)
{
    // assert(false); 
    
    useAttackItem(character, this);
    //make your defensive item use the appropriate Utility helper functions
}
