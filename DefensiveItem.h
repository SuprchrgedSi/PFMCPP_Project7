#pragma once

#include "Item.h"
#include "Character.h"

struct DefensiveItem : Item
{
    DefensiveItem();
    void use(Character* character) override;
};

