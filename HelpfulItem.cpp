#include "HelpfulItem.h"
#include "Utility.h"
#include "Character.h"

HelpfulItem::HelpfulItem() : Item("helpful item", 2) { }

void HelpfulItem::use(Character *character)
{
    useHelpfulItem(character, this);
}
