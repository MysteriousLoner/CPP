#include "Zombie.hpp"

Zombie* zombieHorde(int N, string name)
{
    Zombie horde[N];
    for (int i = 0; i < N; i++)
        horde[i] = Zombie(name);

    return horde;
}