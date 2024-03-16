#include "ClapTrap.hpp"

int main()
{
	ClapTrap clapTrap("user");
	clapTrap.attack("Character");
	clapTrap.takeDamage(7);
	clapTrap.beRepaired(5);
	return 0;
}