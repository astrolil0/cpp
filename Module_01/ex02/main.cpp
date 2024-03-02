#include <iostream>

int main()
{
	std::string title;
	title = "HI THIS IS BRAIN";

	std::string *stringPTR = &title;
	std::string &stringREF = title;

	std::cout << &title << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << title << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

	return 0;
}
