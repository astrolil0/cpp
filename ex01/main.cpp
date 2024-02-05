#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
    PhoneBook phonebook;
    std::string put;
    if(ac != 1)
    {
         std::cout << BOLDMAGENTA << "error : number of arguments incorrect " << RESET <<  std::endl;
         return (EXIT_FAILURE);
    }
    while(1)
    {
        std::cout << BOLDYELLOW << "Enter your command: " << RESET;
        std::getline(std::cin, put);
        std::cout << "\033[1;36mthis is the best phone in the world\033[0m" << std::endl;
        if (!getline(std::cin, put))
        break;
        if(put == "ADD")
        phonebook.add_control();
        else if(put == "SEARCH")
        phonebook.search_conrtol();
		else
        {
              std::cout << RED << "Please enter: ADD, SEARCH or EXIT" << RESET << std::endl;
        }
    }
    return (EXIT_SUCCESS);
}











// #include "Phonebook.class.hpp"

// int main(void)
// {
// 	std::string		command;
// 	Phonebook		contact[8];

// 	while (command != "EXIT")
// 	{
// 		std::cout << BOLDYELLOW << "Enter your command: " << RESET;
// 		std::getline(std::cin, command);
// 		if (std::cin.eof())
// 		{
// 			std::cout << std::endl;
// 			return (1);
// 		}
// 		if (command == "ADD")
// 			Phonebook::addContact(contact[Phonebook::getContactNb()]);
// 		else if (command == "SEARCH")
// 			Phonebook::searchContact(contact);
// 		else
// 			std::cout << RED << "Please enter: ADD, SEARCH or EXIT" << RESET << std::endl;
// 	}
// 	return (0);
// }