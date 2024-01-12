#include <iostream>
#include <string>

using namespace std;

class Zombie{
public:
    Zombie(string name);
    ~Zombie();
    void announce();
private:
    string name;
};

Zombie* zombieHorde(int N, string name);