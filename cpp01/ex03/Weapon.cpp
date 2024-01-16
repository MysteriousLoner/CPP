#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::~Weapon()
{

}

const string& Weapon::getType()
{
    const string& type = Weapon::type;
    return type;
}

void Weapon::setType(string type)
{
    Weapon::type = type;
}