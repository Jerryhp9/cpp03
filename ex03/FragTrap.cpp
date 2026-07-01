#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	Type = "FragTrap";
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << Type << " " << Name << " is asking for a highFive!" << std::endl;
}