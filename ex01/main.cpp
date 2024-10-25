#include "ScavTrap.hpp"

int main()
{

	ScavTrap c("ayoub");
	ScavTrap d("serina");



	c.attack("serina from ptr of clap trap ");


	c.attack("serina");

	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("roboto");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("serina clone");

	return (0);
}