#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	Type = "ScavTrap";

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	Name = other.Name;
	Hitpoints = other.Hitpoints;
	Energy_points = other.Energy_points;
	Attack_damage = other.Attack_damage;
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hitpoints = other.Hitpoints;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
	}
	return (*this);
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