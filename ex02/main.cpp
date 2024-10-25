#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("serina");
	frag.attack("roboto");
	frag.takeDamage(10);
	frag.beRepaired(10);
	frag.highFivesGuys();	
	return 0;
}