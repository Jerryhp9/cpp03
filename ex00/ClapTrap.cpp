#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str) {
	Name = str;
	Hitpoints = 10;
	Energy_points = 10;
	Attack_damage = 0;
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
		std::cout << "ClapTrap " << Name << " unable to attack" << std::endl;
	Energy_points--;
	std::cout << "ClapTrap " << Name << " attacks " << target << " causing " << Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (Hitpoints <= 0)
	{
		std::cout << "Claptrap" << Name << " couldn't take damage anymore" << std::endl;
		return ;
	}
	if (amount < (unsigned int)Hitpoints)
	{
		std::cout << "ClapTrap " << Name << " took " << amount << " damage" << std::endl;
		Hitpoints -= amount;
	}
	else
	{
		Hitpoints -= amount;
		std::cout << "ClapTrap " << Name << " died" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (Hitpoints <= 0 || Energy_points <= 0)
	{
		std::cout << "ClapTrap " << Name << " unable to repair" << std::endl;
		return;
	}
	Hitpoints += amount;
	std::cout << "ClapTrap " << Name << " repaired " << amount << " Hitpoints" << std::endl;
}

void	ClapTrap::getstatsdisplay(std::string type) {
	if (type.compare("Hitpoints"))
		std::cout << Name << "'s Hitpoints: " << Hitpoints << std::endl;
	else if (type.compare(" Attack_damage"))
		std::cout << Name << "'s Attack_damage: " << Attack_damage << std::endl;
	else if (type.compare("Enery_points"))
		std::cout << Name << "'s Enery_points: " << Energy_points << std::endl;
	else
		std::cout << "unknown attributes" << std::endl;
}