#include "Weapon.hpp"
#include <iostream>

using namespace std;

int main()
{
    Weapon shotgun;
    shotgun.setType("gun");
    cout << shotgun.getType() << endl;
}