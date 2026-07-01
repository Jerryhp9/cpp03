#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str), Name(str) {
	Hitpoints = FragTrap::Hitpoints;
	Energy_points = ScavTrap::Energy_points;
	Attack_damage = FragTrap::Attack_damage;

	std::cout << "DiamondTrap constructor called" << std::endl;
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
