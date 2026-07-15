#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	private:
		std::string	_Name;
		int			_Hitpoints;
		int			_Energy_points;
		int			_Attack_damage;
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