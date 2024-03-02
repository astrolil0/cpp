#include "HumanA.hpp"

void HumanA::attack()
{
	cout << name << " attack with their " <<  weapon.getType() << endl;
}

void HumanA::setWeapon(Weapon& _weapon)
{
	weapon = _weapon;
}

HumanA::HumanA(string _name, Weapon& _weapon): weapon(_weapon),name(_name)
{
}

HumanA::~HumanA()
{

}

