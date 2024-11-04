#include "FragTrap.hpp"


FragTrap::FragTrap():ClapTrap()
{
        std::cout << "FragTrap default constructor called \n";
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called \n";
    this->hp = 100;
    this->ep = 100;
    this->attack_damage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " requesting a high five!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "[FragTrap] Copy Constructor Called!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->_name = other._name;
        this->hp = other.hp;
        this->ep = other.ep;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void FragTrap::attack(const std::string& target)
{
    	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->ep--;
	}
	else if (this->ep == 0)
		std::cout << "\033[31mFragTrap" << this->_name << " is not able to attack " << target << ", because he has no energy points left.\033[0m" << std::endl;
	else
		std::cout << "\033[31mFragTrap" << this->_name << " is not able to attack " << target << ", because he has not enough hit points.\033[0m" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "Frag Destructor called \n";
}
