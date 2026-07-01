#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		void	attack(const std:: string& target);
		void	guardGate();
};

#endif