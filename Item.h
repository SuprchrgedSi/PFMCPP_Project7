#pragma once
// #include "Character.h"

#include <string>

struct Character;
struct Item
{
    virtual ~Item();
    virtual void use(Character*) = 0;
    Item(const std::string& name_, int effect );
    
    const std::string& getName();
    int getBoost() const;
private:
    std::string name;
    int boost;
};
