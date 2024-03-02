#include "Weapon.hpp"

Weapon::Weapon(string weapon)
{
	setType(weapon);
}

Weapon::~Weapon()
{
}


const string &Weapon::getType()
{
	return (type);
}

void Weapon::setType(string _type)
{
	this->type = _type;
}
