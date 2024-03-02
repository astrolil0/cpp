#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		string name;
	public:
		HumanA(string name, Weapon &weapon);
		~HumanA();

		void attack();
		void setWeapon(Weapon& weapon);

};

#endif
