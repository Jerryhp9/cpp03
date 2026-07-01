#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "--- create ScavTrap ---" << std::endl;
	FragTrap John("John");
	ScavTrap bob("Bob");
	ClapTrap Timmy("Timmy");
	DiamondTrap Dan("Dan");

	std::cout << "--- test attack ---" << std::endl;
	bob.attack("Timmy");
	Timmy.takeDamage(bob.getstats("Attack_damage"));
	std::cout << "Timmy's hitpoints: " << Timmy.getstats("Hitpoints") << std::endl;
	Timmy.attack("Bob");
	bob.takeDamage(Timmy.getstats("Attack_damage"));
	Timmy.beRepaired(10);
	std::cout << "bob's hitpoints: " << bob.getstats("Hitpoints") << std::endl;
	bob.beRepaired(20);
	std::cout << "bob's hitpoints: " << bob.getstats("Hitpoints") << std::endl;
	std::cout << "John's hitpoints " << John.getstats("Hitpoints") << std::endl;
	std::cout << "John's energy points " << John.getstats("Energy_points") << std::endl;
	std::cout << "John's attack damage " << John.getstats("Attack_damage") << std::endl;
	std::cout << "Dan's hitpoints " << Dan.ScavTrap::getstats("Hitpoints") << std::endl;
	std::cout << "Dan's energy points " << Dan.ScavTrap::getstats("Energy_points") << std::endl;
	std::cout << "Dan's attack damage " << Dan.ScavTrap::getstats("Attack_damage") << std::endl;

	std::cout << "--- test gate keeper mode and highfive and whoamI---" << std::endl;
	bob.guardGate();
	John.highFivesGuys();
	Dan.whoAmI();

	std::cout << "--- end of scope ---" << std::endl;
	return 0;
}