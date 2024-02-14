
#include "Phonebook.hpp"

int Phonebook::ind = 0;
int Phonebook::numbercontacts = 0;

void Phonebook::add(void) 
{
	if (numbercontacts == 8)
		std::cout << RED << "The memory is full and the contacts will be overwriten!" << RESET << std::endl;
	std::cout << "first name> ";
	std::string fn;
	std::cin >> fn;
	contacts[ind].set_fname(fn);
	
	std::cout << "last name> ";
	std::string ln;
	std::cin >> ln;
	contacts[ind].set_lname(ln);
	
	std::cout << "nickname> ";
	std::string nn;
	std::cin >> nn;
	contacts[ind].set_nickname(nn);
	
	std::cout << "phone number> ";
	std::string pn;
	std::cin >> pn;
	contacts[ind].set_pnumber(pn);
	
	std::cout << "darkest secret> ";
	std::string ds;
	std::cin >> ds;
	contacts[ind].set_dsecret(ds);
	
	ind = (ind + 1) % 8;
	if (numbercontacts < 8)
		numbercontacts++;
}




void Phonebook::search()
{
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < this->numbercontacts; i++)
	{
		std::cout << "|" << std::setw(10) << i;
		if (Phonebook::contacts[i].get_fname().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_fname().substr(0, 9) + ".";
		
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_fname();
		
		if (Phonebook::contacts[i].get_lname().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_lname().substr(0, 9) + ".";
		
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_lname();
		
		if (Phonebook::contacts[i].get_nickname().size() > 10)
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_nickname().substr(0, 9) + ".";
		
		else
			std::cout << "|" << std::setw(10) << Phonebook::contacts[i].get_nickname();
		std::cout << "|" << std::endl;

		if (this->numbercontacts > 0)
		{
			contant();
		}
	}
}




void Phonebook::contant()
{
		std::cout << BLUE << "Enter an index " << this->numbercontacts - 1 << "> " << RESET;
		int		index;
		std::cin >> index;
		if(index )
		{
			if (index >= 0 && index <= this->numbercontacts - 1)
		 	{
				std::cout << "First Name: " << Phonebook::contacts[index].get_fname() << std::endl;
				std::cout << "Last Name: " << Phonebook::contacts[index].get_lname() << std::endl;
				std::cout << "Nick Name: " << Phonebook::contacts[index].get_nickname() << std::endl;
				std::cout << "Phone Number: " << Phonebook::contacts[index].get_pnumber() << std::endl;
				std::cout << "Darkest Secret: " << Phonebook::contacts[index].get_dsecret() << std::endl;
			}
			else
				std::cout << "Index out of range." << std::endl;
		}
}
