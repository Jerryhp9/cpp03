#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	Hitpionts = 100;
	Energy_points = 50;
	Attack_damage = 20;

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (ClapTrap::attack() == 1)
		std::cout << "ScavTrap " << ClapTrap::Name << " unable to attack" << std::endl;
	else
		std::cout << "ScavTrap " << ClapTrap::Name << " delivers the attack "  << "causing " << target << " to lose " << ClapTrap::Attack_damage << " Hitpoints!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << ClapTrap::Name << " is in gate keeper mode" << std::endl;
}