#include "DiamondTrap.hpp"



int main(void)
{
	
		DiamondTrap	diamond("frag");
		diamond.attack("fifo");
		diamond.beRepaired(10);
		diamond.highFivesGuys();
		diamond.attack("fifo");
		diamond.takeDamage(20);
		diamond.beRepaired(200);
		diamond.highFivesGuys();
		diamond.whoAmI();
	

	
	return 0;
}