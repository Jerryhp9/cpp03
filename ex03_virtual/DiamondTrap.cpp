#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str), Name(str) {
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;

	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	Name = other.Name;
	Hitpoints = other.Hitpoints;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hitpoints = other.Hitpoints;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
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
	std::cout << "My name is also " << ClapTrap::Name << std::endl;
}
