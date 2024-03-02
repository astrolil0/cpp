#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

#define cout std::cout
#define string std::string

class Zombie
{
	private:
		string Name;
	public:
		Zombie(string name);
		~Zombie();
		void announce( void );
		Zombie* newZombie( string name );
		void randomChump( string name );

};

Zombie* newZombie( string name );
void randomChump( string name );

#endif
