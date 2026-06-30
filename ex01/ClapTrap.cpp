#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) {
	Name = str;
	Hitpionts = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	Name = other.Name;
	Hitpionts = 10;
	Energy_points = 10;
	Attack_damage = 0;
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->Name = other.Name;
		this->Hitpionts = other.Hitpionts;
		this->Energy_points = other.Energy_points;
		this->Attack_damage = other.Attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor called" << std::endl;
}

int	ClapTrap::attack() {
	if (Hitpionts <= 0 || Energy_points <= 0)
		return (1);
	Energy_points--;
	return (0);
}

void	ClapTrap::announce_attack(const std::string& target) {
	int	sign = attack();
	if (sign == 1)
		std::cout << "ClapTrap" << Name << " unable to attack" << std::endl;
	else
		std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (Hitpionts <= 0)
	{
		std::cout << "Claptrap" << Name << " couldn't take damage anymore" << std::endl;
		return ;
	}
	if (amount < (unsigned int)Hitpionts)
	{
		std::cout << "ClapTrap " << Name << " took " << amount << " damage" << std::endl;
		Hitpionts -= amount;
	}
	else
	{
		Hitpionts -= amount;
		std::cout << "ClapTrap " << Name << " died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (Hitpionts <= 0 || Energy_points <= 0)
	{
		std::cout << "ClapTrap " << Name << " unable to repair" << std::endl;
		return;
	}
	Hitpionts += amount;
	std::cout << "ClapTrap " << Name << " repaired " << amount << " Hitpoints" << std::endl;
}

int	ClapTrap::getstats(std::string type) {
	if (type.compare("Hitpoints") == 0)
		return (Hitpionts);
	else if (type.compare("Attack_damage") == 0)
		return (Attack_damage);
	return (Energy_points);
}

std::string	ClapTrap::getname() {
	return (Name);
}