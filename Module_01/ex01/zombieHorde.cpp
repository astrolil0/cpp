#include "Zombie.hpp"

Zombie *zombieHorde(int N, string name)
{
	Zombie *zombie = new Zombie[N];

	for (int j = 0; j < N; j++)
	{
		zombie->Set_name(name);
		zombie->announce();
	}
	return (zombie);
}
