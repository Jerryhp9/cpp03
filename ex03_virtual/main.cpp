#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "--- create Traps ---" << std::endl;
	FragTrap John("John");
	ScavTrap bob("Bob");
	ClapTrap Timmy("Timmy");
	DiamondTrap Dan("Dan");

	std::cout << "Dan's energy points " << Dan.ScavTrap::getstats("_Energy_points") << std::endl;
	std::cout << "--- test attack ---" << std::endl;
	bob.attack("Dan");
	Dan.takeDamage(bob.getstats("_Attack_damage"));
	std::cout << "Dan's hitpoints: " << Dan.getstats("_Hitpoints") << std::endl;
	Dan.attack("Bob");
	bob.takeDamage(Dan.getstats("_Attack_damage"));
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	Dan.beRepaired(20);
	bob.beRepaired(20);
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	// std::cout << "John's hitpoints " << John.getstats("Hitpoints") << std::endl;
	// std::cout << "John's energy points " << John.getstats("Energy_points") << std::endl;
	// std::cout << "John's attack damage " << John.getstats("Attack_damage") << std::endl;
	std::cout << "Dan's hitpoints " << Dan.ScavTrap::getstats("_Hitpoints") << std::endl;
	std::cout << "Dan's energy points " << Dan.ScavTrap::getstats("_Energy_points") << std::endl;
	std::cout << "Dan's attack damage " << Dan.ScavTrap::getstats("_Attack_damage") << std::endl;

	std::cout << "--- test gate keeper mode and highfive and whoamI---" << std::endl;
	Dan.guardGate();
	Dan.highFivesGuys();
	Dan.whoAmI();

	std::cout << "--- end of scope ---" << std::endl;
	return 0;
}