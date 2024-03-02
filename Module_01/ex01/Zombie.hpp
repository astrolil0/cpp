#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl
#define string std::string

class Zombie
{
	private:
		string Name;
	public:
		Zombie();
		~Zombie();
		void announce(void);
		void Set_name(string str);
};
Zombie* zombieHorde( int N, string name );

#endif
