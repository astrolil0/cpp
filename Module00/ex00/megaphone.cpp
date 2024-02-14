#include <iostream>
int main(int ac, char **av)
{
    int k = 1;
    int j;
    if(ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 0;
    }
    else if(ac > 1)
    {
        while (av[k][j])
        {    
        std::cout << (char) std::toupper(av[k][j]);
        j++;
        }
        k++;
    }
    return 0;
}