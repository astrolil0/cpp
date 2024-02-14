


#ifndef	PHONEBOOK_CLASS
#define PHONEBOOK_CLASS
#include "Contact.hpp"
#include <iostream>
#include <iomanip>

#define RESET   "\033[0m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define RED     "\033[31m"
#define BOLDCYAN "\033[1m\033[36m"
		
class Phonebook
{
	private:
		Contact		contacts[8];
		static	int	ind;
		
		static	int	numbercontacts;
	public:
		void	add();
		void	search();
		void    contant();
};

#endif