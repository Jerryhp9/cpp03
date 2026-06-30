#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	Name;
		int			Hitpionts;
		int			Energy_points;
		int			Attack_damage;
	public:
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		int				attack();
		void			announce_attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				getstats(std::string type);
		std::string		getname();

};
#endif