#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook;
	std::string	line;

	while (std::cout << "PhoneBook> " && std::getline(std::cin, line))
	{
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
			phonebook.search_contact();
		else if (line == "EXIT")
			return (0);
		else if (line[0])
			std::cout << "PhoneBook: available commands: ADD, SEARCH, EXIT" << std::endl;
	}
	std::cout << "\033[2K\rPhoneBook> EXIT" << std::endl;
	return (0);
}


//----------------------------------------------------


#include <iostream>
#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"
#include "../includes/Utils.hpp"

int main(int argc, char **argv)
{
    std::string input;
    PhoneBook phonebook;

    (void)argv;
    if (argc != 1) {
        std::cout << "Error: Wrong number of arguments." << std::endl;
        return (1);
    }

    std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
    
    do {
        std::cout << std::endl;
        std::cout << " ========(?)========" << std::endl;
        std::cout << "Available commands:\n -ADD: save a new contact\n -SEARCH: display a specific contact\n -EXIT" << std::endl;
        std::cout << "Please enter a command: ";
        if (!getline(std::cin, input))
            break;
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
    }   while (input != "EXIT");
    return 0;
}


//----------------------------------------------------


#include "Phonebook.class.hpp"

int main(void)
{
	std::string		command;
	Phonebook		contact[8];

	while (command != "EXIT")
	{
		std::cout << BOLDYELLOW << "Enter your command: " << RESET;
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (1);
		}
		if (command == "ADD")
			Phonebook::addContact(contact[Phonebook::getContactNb()]);
		else if (command == "SEARCH")
			Phonebook::searchContact(contact);
		else
			std::cout << RED << "Please enter: ADD, SEARCH or EXIT" << RESET << std::endl;
	}
	return (0);
}

