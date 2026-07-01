#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	Name;
		int			Hitpoints;
		int			Energy_points;
		int			Attack_damage;
		std::string	Type;
	public:
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void			attack(const std::string& target);
		void			announce_attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				getstats(std::string type);
		std::string		getname();

};
#endif