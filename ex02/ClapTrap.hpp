#pragma once

#include <iostream>

class ClapTrap
{
protected:
    std::string _name;
    unsigned int hp;
    unsigned int ep;
    unsigned int attack_damage;
    
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator = (const ClapTrap& other);
    virtual ~ClapTrap();
    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


