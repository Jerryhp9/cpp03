#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	Type = "ScavTrap";

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << ClapTrap::Name << " is in gate keeper mode" << std::endl;
}