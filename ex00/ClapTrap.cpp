#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) {
	_Name = str;
	_Hitpoints = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	_Name = other._Name;
	_Hitpoints = 10;
	_Energy_points = 10;
	_Attack_damage = 0;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_Name = other._Name;
		this->_Hitpoints = other._Hitpoints;
		this->_Energy_points = other._Energy_points;
		this->_Attack_damage = other._Attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (_Hitpoints <= 0 || _Energy_points <= 0)
		std::cout << "ClapTrap " << _Name << " unable to attack" << std::endl;
	--_Energy_points;
	std::cout << "ClapTrap " << _Name << " attacks " << target << " causing " << _Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_Hitpoints <= 0)
	{
		std::cout << "Claptrap" << _Name << " couldn't take damage anymore" << std::endl;
		return ;
	}
	if (amount < (unsigned int)_Hitpoints)
	{
		std::cout << "ClapTrap " << _Name << " took " << amount << " damage" << std::endl;
		_Hitpoints -= amount;
	}
	else
	{
		_Hitpoints -= amount;
		std::cout << "ClapTrap " << _Name << " died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_Hitpoints <= 0 || _Energy_points <= 0)
	{
		std::cout << "ClapTrap " << _Name << " unable to repair" << std::endl;
		return;
	}
	_Hitpoints += amount;
	--_Energy_points;
	std::cout << "ClapTrap " << _Name << " repaired " << amount << " _Hitpoints" << std::endl;
}

void	ClapTrap::getstatsdisplay(std::string type) {
	if (type.compare("_Hitpoints") == 0)
		std::cout << _Name << "'s _Hitpoints: " << _Hitpoints << std::endl;
	else if (type.compare("_Attack_damage") == 0)
		std::cout << _Name << "'s _Attack_damage: " << _Attack_damage << std::endl;
	else if (type.compare("_Energy_points") == 0)
		std::cout << _Name << "'s Enery_points: " << _Energy_points << std::endl;
	else
		std::cout << "unknown attribute" << std::endl;
}