#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
	:	Name(str), Hitpoints(10), Energy_points(10), Attack_damage(0), Type("ClapTrap")
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	Name = other.Name;
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hitpoints = other.Hitpoints;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (Hitpoints <= 0 || Energy_points <= 0)
	{
		std::cout << Type << " " << Name << " unable to attack" << std::endl;
		return ;
	}
	Energy_points--;
	std::cout << Type << " " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (Hitpoints <= 0)
	{
		std::cout << Type << " " << Name << " couldn't take damage anymore" << std::endl;
		return ;
	}
	if (amount < (unsigned int)Hitpoints)
	{
		std::cout << Type << " " << Name << " took " << amount << " damage" << std::endl;
		Hitpoints -= amount;
	}
	else
	{
		Hitpoints -= amount;
		std::cout << Type << " " << Name << " died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) { //learn how to change claptrap to scavtrap
	if (Hitpoints <= 0 || Energy_points <= 0)
	{
		std::cout << Type << " " << Name << " unable to repair" << std::endl;
		return;
	}
	Hitpoints += amount;
	Energy_points--;
	std::cout << Type << " " << Name << " repaired " << amount << " Hitpoints" << std::endl;
}

int	ClapTrap::getstats(std::string type) {
	if (type.compare("Hitpoints") == 0)
		return (Hitpoints);
	else if (type.compare("Attack_damage") == 0)
		return (Attack_damage);
	return (Energy_points);
}

std::string	ClapTrap::getname() {
	return (Name);
}