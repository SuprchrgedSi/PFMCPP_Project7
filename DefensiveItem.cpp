#include "DefensiveItem.h"
#include "Utility.h"
#include "Character.h"
#include <cassert>

DefensiveItem::DefensiveItem() : Item("defensive item", 3) { }

void DefensiveItem::use(Character* character)
{
    // assert(false); 
    useDefensiveItem(character, *this);
    //make your defensive item use the appropriate Utility helper functions
}
