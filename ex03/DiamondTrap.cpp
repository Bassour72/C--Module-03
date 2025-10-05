#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
    : ClapTrap("DiamondTrap_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
    setHitPoints(FragTrap::getHitPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap " << _name << " has been created!\n";
}

DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap(), _name(name)
{
    setHitPoints(FragTrap::getHitPoints());
    setEnergyPoints(ScavTrap::getEnergyPoints());
    setAttackDamage(FragTrap::getAttackDamage());
    std::cout << "DiamondTrap " << _name << " has been created!\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other),FragTrap(other), ScavTrap(other),  _name(other._name)
{
    setHitPoints(other.getHitPoints());
    setEnergyPoints(other.getEnergyPoints());
    setAttackDamage(other.getAttackDamage());
}
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        _name = other._name;
    }
    return *this;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name
              << " | ClapTrap name: " << ClapTrap::getName()
              << std::endl;
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " has been destroyed!\n";
}

// Getter & Setter
const std::string &DiamondTrap::getName() const { 
    std:: cout  << ClapTrap::getName() << std::endl;
    return _name; }
void DiamondTrap::setName(const std::string &name) { _name = name; }
