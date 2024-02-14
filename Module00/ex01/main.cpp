
#include "Phonebook.hpp"

void start()
{
        std::cout << BOLDCYAN <<"📞 Hey honey What would you like to do today?" << RESET << std::endl;
        std::cout << BOLDCYAN <<"   ADD - Add a new contact" << RESET << std::endl;
        std::cout << BOLDCYAN <<"   SEARCH - Look up a contact" << RESET << std::endl;
        std::cout << BOLDCYAN <<"   EXIT - Say goodbye and close the phonebook" << RESET << std::endl;
		std::cout << std::endl;
}


int	main(void)
{
	Phonebook		phonebookins;
	std::string		str;

	start();
	while (1)
	{
		std::cout << YELLOW << "Phonebook >" << RESET;
		std::cin >> str;
		if (str == "ADD")
			phonebookins.add();
		else if (str == "SEARCH")
			phonebookins.search();
		else if (str == "EXIT" || std::cin.eof())
			return (0);
		else
			std::cout << "Invalid Command: " << str << std::endl << "USAGE: ADD, SEARCH, EXIT" << std::endl;
	}
}