#include "ClapTrap.hpp"

ClapTrap::ClapTrap():_name("default"), hp(10), ep(10), attack_damage(0)
{
    std::cout << "Constructor called"<< std::endl;
}
ClapTrap::ClapTrap(const std::string& name):_name(name), hp(10), ep(10), attack_damage(0){
    std::cout << "Constructor called"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called"<< std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Assignement operator called"<< std::endl;

    if (this != &other)
    {
        this->_name = other._name;
        this->ep = other.ep;
        this->hp = other.hp;
        this->attack_damage = other.attack_damage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hp && this->ep > 0)
    {
        ep--;
        std::cout << "ClapTrap " << this->_name <<  
        " attacks " << target<< ", causing "
        << this->attack_damage << " of damage!" << std::endl;
    }
    else
    {
        if (this->hp <= 0)
             std::cout << "ClapTrap " << this->_name <<  " Died" << std::endl;
        if (this->ep <= 0)
            std::cout<<"No enough energy point !!"<< std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->ep > 0 && this->hp > 0)
    {
        std::cout << "ClapTrap "<< this->_name << " takes " << amount <<" of damage"<< std::endl; 
        if (this->hp - amount <= 0)
            this->hp = 0;
        else
            this->hp -= amount;
    }
    else
        std::cout<<"No enough hit point or energy point !!"<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->ep > 0 && this->hp > 0)
    {
        this->ep--;
        this->hp += amount;
        std::cout << "ClapTrap "<< this->_name << " gets " << amount <<" of hit point back"<< std::endl; 
    }
    else
        std::cout<<"No enough hit point or energy point !!"<< std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Desctructor called"<< std::endl;
}