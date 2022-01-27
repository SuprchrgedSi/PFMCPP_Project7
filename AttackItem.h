#pragma once
#include "Item.h"

struct AttackItem : Item
{
    AttackItem();
    void use(Character*) override;
};
