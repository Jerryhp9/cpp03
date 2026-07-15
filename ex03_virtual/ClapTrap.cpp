#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
	:	_Name(str), _Hitpoints(10), _Energy_points(10), _Attack_damage(0), _Type("ClapTrap")
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	_Name = other._Name;
	_Hitpoints = other._Hitpoints;
	_Energy_points = other._Energy_points;
	_Attack_damage = other._Attack_damage;
	_Type = other._Type;
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
		this->_Type = other._Type;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

bool	ClapTrap::performAttack() {
	if (_Hitpoints <= 0 || _Energy_points <= 0)
		return (false);
	--_Energy_points;
	return (true);
}

void	ClapTrap::attack(const std::string& target) {
	if (!performAttack())
	{
		std::cout << _Type << " " << _Name << " unable to attack" << std::endl;
		return ;
	}
	std::cout << _Type << " " << _Name << " attacks " << target << " causing " << _Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (_Hitpoints <= 0)
	{
		std::cout << _Type << " " << _Name << " couldn't take damage anymore" << std::endl;
		return ;
	}
	if (amount < (unsigned int)_Hitpoints)
	{
		std::cout << _Type << " " << _Name << " took " << amount << " damage" << std::endl;
		_Hitpoints -= amount;
	}
	else
	{
		_Hitpoints -= amount;
		std::cout << _Type << " " << _Name << " died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (_Hitpoints <= 0 || _Energy_points <= 0)
	{
		std::cout << _Type << " " << _Name << " unable to repair" << std::endl;
		return;
	}
	_Hitpoints += amount;
	--_Energy_points;
	std::cout << _Type << " " << _Name << " repaired " << amount << " _Hitpoints" << std::endl;
}

int	ClapTrap::getstats(std::string type) {
	if (type.compare("_Hitpoints") == 0)
		return (_Hitpoints);
	else if (type.compare("_Attack_damage") == 0)
		return (_Attack_damage);
	return (_Energy_points);
}

std::string	ClapTrap::getNameType(std::string str) {
	if (str.compare("_Name") == 0)
		return (_Name);
	return (_Type);
}