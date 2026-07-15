#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_Hitpoints = 100;
	_Energy_points = 50;
	_Attack_damage = 20;
	_Type = "ScavTrap";

	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other) {
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	if (!performAttack())
	{
		std::cout << _Type << " " << _Name << " loses the ability to attack" << std::endl;
		return;
	}
	std::cout << _Type << " " << _Name << " severely attack " << target << " with " << _Attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << ClapTrap::_Name << " is in gate keeper mode" << std::endl;
}