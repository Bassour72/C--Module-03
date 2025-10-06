#include "DiamondTrap.hpp"

int main()
{
    std::cout << "=== DiamondTrap: Direct Instance Test ===\n";
    DiamondTrap dt("Diamondy");
    dt.whoAmI();
    dt.attack("an enemy");
    dt.highFivesGuys();
    dt.guardGate();
    dt.takeDamage(20);
    dt.beRepaired(10);
    std::cout << "----------------------------------------\n\n";

    std::cout << "=== ClapTrap Pointer to DiamondTrap Test ===\n";
    ClapTrap *base = new DiamondTrap("K-2SO");
    if (!base)
    {
         std::cout << "Error: Memory allocation failed for ScavTrap.\n";
         return 1;  
    }
    base->attack("a target");
    base->takeDamage(15);
    base->beRepaired(5);
    delete base;
    std::cout << "----------------------------------------\n\n";
    std::cout << "=== Multiple DiamondTrap Interaction Test ===\n";
    DiamondTrap a("Alpha");
    DiamondTrap b("Bravo");

    a.attack(b.getName());
    b.takeDamage(30);
    b.beRepaired(20);
    b.attack(a.getName());
    a.takeDamage(40);
    std::cout << "----------------------------------------\n\n";

    std::cout << "=== Copy & Assignment Test ===\n";
    DiamondTrap copy = dt; 
    DiamondTrap assigned("Temp");
    assigned = dt;
    copy.whoAmI();
    assigned.whoAmI();
    std::cout << "----------------------------------------\n\n";

    return 0;
}

