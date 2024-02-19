#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
	private:
		std::string Name;
		
	public:
		Zombie(std::string name); //yapıcı
		~Zombie(); //yıkıcı Zombie nesnesi yok edildiğinde cagrılır bellekten silindiğinde
		void announce( void ); //duyuru atmamızı sağlar 

};

Zombie* newZombie( std::string name ); 
void randomChump( std::string name );

#endif



//dinamil bellek yönetimi = new bellekte alan rezerve eder 
//delete rezerve edilen yer kalkar 
//kullanılmayan pointerlara null ataması yapılır 
//int* p = new int;    int türünde bir bellek bloğu tahsis et
//int türünde bir bellek bloğu tahsis eder ve bu bloğun adresini p adlı işaretçiye atar