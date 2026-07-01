#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
	public:
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void		attack(const std:: string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		getstatsdisplay(std::string type);

};
#endif