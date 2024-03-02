#include <iostream>
#include <fstream>

void	replace(std::string result, std::string s1, std::string s2, std::string fname)
{
	std::ofstream outputFile(fname + ".replace");
	size_t pos = result.find(s1);

	while (pos != std::string::npos) {
		result.erase(pos, s1.length());
		result.insert(pos, s2);
		pos = result.find(s1);
	}
	outputFile << result;
	outputFile.close();
}

int main(int ac, char **av)
{
	char		c;
	std::string	result;

	if (ac != 4)
		return (std::cout << "This program accept only 4 arguments!" << std::endl, -1);
	std::ifstream inputFile(av[1]);
	if (!inputFile)
		return (std::cout << "File cannot be opened: " << av[1]<< std::endl, -1);
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1 == s2)
		return (std::cout << "There is nothing to change!" << std::endl, -1);
	while (!inputFile.eof() && inputFile >> std::noskipws >> c)
		result += c;
	inputFile.close();
	return (replace(result, s1, s2, av[1]), 0);
}
