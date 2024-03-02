#include "Zombie.hpp"

Zombie::Zombie (string name)
{
	Name = name;
}

void Zombie::announce( void )
{
	cout << Name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	cout << Name << " Destructor!" << std::endl;
}
