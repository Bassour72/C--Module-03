#include "ClapTrap.hpp"
/*
The purpose of this exercise is to learn how to create a class
where each object is independent (isolated) from other objects.
Each object has its own separate place in memory.
*/

int main()
{
    // Alpha
    // WALL-E
    // R2-D2
    // GLaDOS
    // Optimus Prime
    ClapTrap robot1("CL4P-TP");
    ClapTrap robot2("FR4G-TP");

    std::cout << "\n--- Test: Attack ---\n";
    robot1.attack("Target1");  
    robot1.attack("Target2");  

    std::cout << "\n--- Test: Taking Damage ---\n";
    robot1.takeDamage(3); 
    robot1.takeDamage(5);      
    robot1.takeDamage(10);

    std::cout << "\n--- Test: Repair ---\n";
    robot1.beRepaired(5);
    robot2.beRepaired(4);

    std::cout << "\n--- Test: Energy Depletion ---\n";
    for (int i = 0; i < 11; i++)
        robot2.attack("Dummy");

    std::cout << "\n--- Test: Object Copy ---\n";
    ClapTrap robot3 = robot2;
    robot3.setName("CL0P-TP");
    robot3.attack("AnotherTarget");

    return 0;
}
