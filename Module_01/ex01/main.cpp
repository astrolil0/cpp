#include "Zombie.hpp"

int main()
{
    Zombie *zombies = zombieHorde(7, "zombii");
    delete[] zombies;

    return 0;
}
