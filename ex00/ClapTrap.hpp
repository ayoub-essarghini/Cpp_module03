#pragma once

#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int hp;
    int ep;
    int attack_damage;
    
public:
    ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& copy);
    ClapTrap& operator = (const ClapTrap& other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};


