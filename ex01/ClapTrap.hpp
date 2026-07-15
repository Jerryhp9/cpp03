#ifndef ClapTrap_HPP
#define ClapTrap_HPP

#include <iostream>

class ClapTrap {
	protected:
		std::string	_Name;
		int			_Hitpoints;
		int			_Energy_points;
		int			_Attack_damage;
		std::string	_Type;
		bool	performAttack();
	public:
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		int				getstats(std::string type);
		std::string		getNameType(std::string str);

};
#endif