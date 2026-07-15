#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string str) : ClapTrap(str + "_clap_name"), ScavTrap(str), FragTrap(str), _Name(str) {
	_Hitpoints = FragTrap::_Hitpoints;
	_Energy_points = 50;
	_Attack_damage = FragTrap::_Attack_damage;
	_Type = "DiamondTrap";

	std::cout << "DiamondTrap constructor called" << std::endl;
	std::cout << "ScavTrap energy point: " << ScavTrap::_Energy_points << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
	_Name = other._Name;
	_Hitpoints = other._Hitpoints;
	_Energy_points = other._Energy_points;
	_Attack_damage = other._Attack_damage;
	_Type = other._Type;
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_Hitpoints = other._Hitpoints;
		this->_Energy_points = other._Energy_points;
		this->_Attack_damage = other._Attack_damage;
		this->_Type = other._Type;
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
	std::cout << _Type << " " << _Name << " said \"My name is " << _Name << "\"" << std::endl;
	std::cout << _Type << " " << _Name << " said \"My name is also " << ClapTrap::_Name  << "\"" << std::endl;
}
