#include "Item.h"
#include "Character.h"

Item::Item(const std::string& name_, int effect ) : name(name_), boost(effect) { }
Item::~Item(){}

const std::string& Item::getName() { return name; }
int Item::getBoost() const { return boost; }
