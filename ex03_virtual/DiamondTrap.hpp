#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string	Name;
	public:
		DiamondTrap(std::string str);
		~DiamondTrap();
		void	attack(const std::string& target);
		void	whoAmI();
};

#endif