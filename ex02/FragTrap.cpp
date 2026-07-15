#include "FragTrap.hpp"

FragTrap::FragTrap(std::string str) : ClapTrap(str) {
	_Hitpoints = 100;
	_Energy_points = 100;
	_Attack_damage = 30;
	_Type = "FragTrap";
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
	_Name = other._Name;
	_Hitpoints = other._Hitpoints;
	_Energy_points = other._Energy_points;
	_Attack_damage = other._Attack_damage;
	std::cout << "FragTrap Copy constructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other) {
	std::cout << "FragTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_Hitpoints = other._Hitpoints;
		this->_Energy_points = other._Energy_points;
		this->_Attack_damage = other._Attack_damage;
	}
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << _Type << " " << _Name << " is asking for a highFive!" << std::endl;
}