#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    string name;

public:
    DiamondTrap();
    DiamondTrap(string name);
    DiamondTrap(const DiamondTrap &other);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);
    void attack(const string &target);
    void whoAmI(void);
};
