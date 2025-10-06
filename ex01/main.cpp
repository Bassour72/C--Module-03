#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "=== Creating ScavTrap via base pointer ===\n";
    ClapTrap *base = new  ScavTrap("robot");
    if (!base)
    {
        std::cout << "Error: Memory allocation failed for ScavTrap.\n";
        return 1;
    }
    base->attack("Target-B");
    std::cout << "\n=== Creating ClapTrap ===\n";
    ClapTrap ct1("CT-One");
    ct1.attack("Target-A");
    ct1.takeDamage(5);
    ct1.beRepaired(3);
    std::cout << "\n=== Creating ScavTrap ===\n";
    ScavTrap st1("ST-One");
    st1.attack("Target-B");
    st1.guardGate();

    std::cout << "\n=== Copy & Assignment ===\n";
    ScavTrap st2 = st1;
    ScavTrap st3;
    st3 = st1;

    std::cout << "\n=== Testing energy/hit points ===\n";
    st1.setEnergy(0);
    st1.attack("Target-C");

    delete base;
    return 0;
}



