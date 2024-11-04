#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap(string name) : ClapTrap(name), FragTrap(name) ,ScavTrap(name)
{
	cout << "DiamondTrap Constructor Called!" << endl;
	ClapTrap::_name =  name + " claptrap_name";
	this->_name = name;
	hp = FragTrap::hp;
	ep = ScavTrap::ep;
	attack_damage = FragTrap::attack_damage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other) ,ScavTrap(other)
{
	cout << "DiamondTrap Copy Constructor Called!" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap Destructor Called!" << endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		_name = other._name;
		hp = other.hp;
		ep = other.ep;
		attack_damage = other.attack_damage;
	}
	return *this;
}

void DiamondTrap::attack(const string &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	cout
		<< "DiamondTrap Name: " << _name << endl
		<< "ClapTrap Name: " << ClapTrap::_name << endl;
}