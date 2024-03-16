#include "ScavTrap.hpp"
int main()
{
    ClapTrap b("user1 : ");
    ScavTrap a("user2 : ");
    b.attack("one");
    b.takeDamage(10);
    b.beRepaired(10);

    std::cout << "------------------------" << std::endl;
    
    a.attack("two");
    a.takeDamage(10);
    a.beRepaired(10);
    a.guardGate();
}