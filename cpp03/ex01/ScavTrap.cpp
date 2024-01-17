#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	cout << "ScavTrap default constructor" << endl;
}

ScavTrap::ScavTrap(string n)
{
	cout << "ScavTrap constructor" << endl;
	ScavTrap::name = n;
	ScavTrap::hp = 100;
	ScavTrap::ep = 50;
	ScavTrap::atk = 20;
}

ScavTrap::ScavTrap(const ScavTrap &S)
{
	cout << "Copy constructor" << endl;
	*this = S;
}

ScavTrap &ScavTrap::operator = (const ScavTrap &S)
{
	cout << "Copy assignment operator called" << endl;
	if (this != &S)
		name = S.name;
		hp = S.hp;
		ep = S.ep;
		atk = S.atk;
	return (*this);
}

void ScavTrap::attack(const string &target)
{
	cout << "ScavTrap " << name << " attacks " << target
		<< ", causing " << atk << " hit points." << endl;
	ep -= 1;
}

void ScavTrap::guardgate()
{
	cout << "ScavTrap is now in gatekeeper mode" << endl;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap destructor" << endl;
}

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	cout << "ScavTrap " << name << " has taken " << amount << " damage." << endl;
// 	hp -= amount;
// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	cout << "ScavTrap " << name << " has repaired itself, gaining " << amount << " hit points." << endl;
// 	hp += amount;
// 	ep -= 1;
// }