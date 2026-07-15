#include "ClapTrap.hpp"

int main( void ) 
{
	ClapTrap bob = ClapTrap("Bob");
	ClapTrap Timmy = ClapTrap("Timmy");

	std::cout << "\n------After constructor------\n" << std::endl;
	bob.getstatsdisplay("_Hitpoints");
	bob.getstatsdisplay("_Energy_points");
	bob.getstatsdisplay("_Attack_damage");
	Timmy.getstatsdisplay("_Hitpoints");
	Timmy.getstatsdisplay("_Energy_points");
	Timmy.getstatsdisplay("_Attack_damage");

	std::cout << "\n------perform attack------\n" << std::endl;
	bob.attack("Timmy");
	Timmy.takeDamage(0);
	Timmy.beRepaired(5);
	Timmy.attack("bob");
	bob.takeDamage(0);
	bob.beRepaired(10);

	bob.getstatsdisplay("_Hitpoints");
	bob.getstatsdisplay("_Energy_points");
	bob.getstatsdisplay("_Attack_damage");
	Timmy.getstatsdisplay("_Hitpoints");
	Timmy.getstatsdisplay("_Energy_points");
	Timmy.getstatsdisplay("_Attack_damage");
	return 0;
}