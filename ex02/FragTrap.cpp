#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	Type = "FragTrap";
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	Name = other.Name;
	Hitpoints = other.Hitpoints;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hitpoints = other.Hitpoints;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << Type << " " << Name << " is asking for a highFive!" << std::endl;
}