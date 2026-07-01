#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str) : ScavTrap(str), FragTrap(str), Name(str) {
	ScavTrap::Name = (str + "_clap_name");
	ScavTrap::Hitpoints = FragTrap::Hitpoints;
	ScavTrap::Energy_points = ScavTrap::Energy_points;
	ScavTrap::Attack_damage = FragTrap::Attack_damage;

	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ScavTrap(other), FragTrap(other) {
	Name = other.Name;
	ScavTrap::Hitpoints = other.ScavTrap::Hitpoints;
	ScavTrap::Energy_points = other.ScavTrap::Energy_points;
	ScavTrap::Attack_damage = other.ScavTrap::Attack_damage;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->ScavTrap::Hitpoints = other.ScavTrap::Hitpoints;
		this->ScavTrap::Energy_points = other.ScavTrap::Energy_points;
		this->ScavTrap::Attack_damage = other.ScavTrap::Attack_damage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "My name is " << Name << std::endl;
	std::cout << "My name is also " << ScavTrap::Name << std::endl;
}
