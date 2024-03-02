#include "HumanB.hpp"

void HumanB::attack()
{
	cout << name << " attack with their " << weapon->getType()<< endl;
}

void HumanB::setWeapon(Weapon& _weapon)
{
	weapon = &_weapon;
}

HumanB::HumanB(string name)
{
	weapon = NULL;
	this->name = name;
}

HumanB::~HumanB()
{

}
