#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    setName("Default");
    std::cout << "FragTrap " << getName() << " has been created!" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap " << getName() << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    std::cout << "FragTrap " << getName() << " has been copied!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << getName() << " has been destroyed!" << std::endl;
}


void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " requests a positive high five! ✋" << std::endl;
}

