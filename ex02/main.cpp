#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "--- create Traps ---" << std::endl;
	FragTrap John("John");
	ScavTrap bob("Bob");
	ClapTrap Timmy("Timmy");

	std::cout << "--- test attack ---" << std::endl;
	bob.attack("Timmy");
	Timmy.takeDamage(bob.getstats("_Attack_damage"));
	std::cout << "Timmy's hitpoints: " << Timmy.getstats("_Hitpoints") << std::endl;
	Timmy.attack("Bob");
	bob.takeDamage(Timmy.getstats("_Attack_damage"));
	Timmy.beRepaired(10);
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	bob.beRepaired(20);
	John.attack("Bob");
	bob.takeDamage(John.getstats("_Attack_damage"));
	John.beRepaired(50);
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	std::cout << "John's hitpoints " << John.getstats("_Hitpoints") << std::endl;
	std::cout << "John's energy points " << John.getstats("_Energy_points") << std::endl;
	std::cout << "John's attack damage " << John.getstats("_Attack_damage") << std::endl;

	std::cout << "--- test gate keeper mode and highfive ---" << std::endl;
	bob.guardGate();
	John.highFivesGuys();

	std::cout << "--- end of scope ---" << std::endl;
	return 0;
}