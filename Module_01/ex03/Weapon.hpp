#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

class Weapon
{
	private:
		string type;
	public:
		Weapon(string wp);
		~Weapon();

		const string &getType();
		void setType(string _type);
};

#endif
