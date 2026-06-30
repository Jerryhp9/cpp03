#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "--- create ScavTrap ---" << std::endl;
	ScavTrap bob("Bob");
	ClapTrap Timmy("Timmy");

	std::cout << "--- test attack ---" << std::endl;
	bob.attack("Timmy");
	Timmy.takeDamage(bob.getstats("Attack_damage"));
	std::cout << "Timmy's hitpoints: " << Timmy.getstats("Hitpoints") << std::endl;
	Timmy.announce_attack("Bob");
	bob.takeDamage(Timmy.getstats("Attack_damage"));
	std::cout << "bob's hitpoints: " << bob.getstats("Hitpoints") << std::endl;
	bob.beRepaired(20);
	std::cout << "bob's hitpoints: " << bob.getstats("Hitpoints") << std::endl;

	std::cout << "--- test gate keeper mode ---" << std::endl;
	bob.guardGate();

	std::cout << "--- end of scope ---" << std::endl;
	return 0;
}