#include "Zombie.hpp"

void Zombie::Set_name(string str)
{
	Name = str;
}

void Zombie::announce()
{
	cout << Name << " BraiiiiiiinnnzzzZ..." << endl;
}

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	cout << Name << "Has been destroyed!" << endl;
}
