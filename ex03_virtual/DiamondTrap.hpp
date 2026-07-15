#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	_Name;
		std::string _Type;
	public:
		DiamondTrap(std::string str);
		DiamondTrap(const DiamondTrap& other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	whoAmI();
};

#endif