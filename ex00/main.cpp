#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap bob = ClapTrap("Bob");
	ClapTrap Timmy = ClapTrap("Timmy");

	bob.attack("Timmy");
	Timmy.takeDamage(0);
	Timmy.beRepaired(5);
	Timmy.attack("bob");
	bob.takeDamage(0);
	bob.beRepaired(10);

	bob.getstatsdisplay("Hitpoints");
	bob.getstatsdisplay("Energy_points");
	bob.getstatsdisplay("Attack_damage");
	Timmy.getstatsdisplay("Hitpoints");
	Timmy.getstatsdisplay("Energy_points");
	Timmy.getstatsdisplay("Attack_damage");
	return 0;
}