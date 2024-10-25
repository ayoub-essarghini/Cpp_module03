
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hp = 100;
	this->ep = 50;
	this->attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	this->_guarding_gate = copy._guarding_gate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 50;
	this->attack_damage = 20;
	this->_guarding_gate = false;
	std::cout << "ScavTrap Constructor for the name " << this->_name << " called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor for " << this->_name << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignement operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src._name;
		this->hp = src.hp;
		this->ep = src.ep;
		this->attack_damage = src.attack_damage;
	}

	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->ep--;
	}
	else if (this->ep == 0)
		std::cout << "\033[31mScavTrap " << this->_name << " is not able to attack " << target << ", because he has no energy points left.\033[0m" << std::endl;
	else
		std::cout << "\033[31mScavTrap " << this->_name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (this->_guarding_gate == false)
	{
		this->_guarding_gate = true;
		std::cout << "ScavTrap " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "\033[33mScavTrap " << this->_name << " is already guarding the gate.\033[0m" << std::endl;
}
