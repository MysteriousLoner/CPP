#include "zombie.hpp"

int main()
{
    // Zombie a("qiqi");

    // randomChump("qiqi");
    Zombie* a = newZombie("qiqi");
    a->announce();
    delete a;
}