#include "Zombie.hpp"

Zombie::Zombie(string name)
{
    Zombie::name = name;
    cout << Zombie::name << " is created. " << endl;
}

Zombie::~Zombie()
{
    cout << Zombie::name << " is destroyed. " << endl;
}

void Zombie::announce()
{
    cout << Zombie::name << ": Braaiiiinzzzz.... " << endl;
}