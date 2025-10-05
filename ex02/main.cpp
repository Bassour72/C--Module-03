#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n--- Creating ClapTrap and FragTrap objects ---\n";
    ClapTrap clap1("CL4P-TP");
    FragTrap frag1("FR4G-TP");

    std::cout << "\n--- Testing attack ---\n";
    clap1.attack("Target1");
    frag1.attack("Target2");

    std::cout << "\n--- Testing taking damage ---\n";
    clap1.takeDamage(3);
    frag1.takeDamage(20);

    std::cout << "\n--- Testing repair ---\n";
    clap1.beRepaired(5);
    frag1.beRepaired(10);

    std::cout << "\n--- Testing FragTrap-specific function ---\n";
    frag1.highFivesGuys();

    std::cout << "\n--- Testing FragTrap copy constructor ---\n";
    FragTrap frag2 = frag1;     
    frag2.setName("FR4G-COPY");
    frag2.attack("AnotherTarget");
    frag2.highFivesGuys();

    std::cout << "\n--- Testing assignment operator ---\n";
    FragTrap frag3;
    frag3 = frag1;
    frag3.setName("FR4G-ASSIGN");
    frag3.attack("FinalTarget");
    frag3.highFivesGuys();

    std::cout << "\n--- End of program (destroying objects) ---\n";
    return 0;
}

