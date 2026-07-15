#include "ScavTrap.hpp"

int main(void)
{
	std::cout << "--- create Traps ---" << std::endl;
	ScavTrap bob("Bob");
	ClapTrap Timmy("Timmy");

	ScavTrap bob2(bob);
	std::cout << "bob2's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	std::cout << "bob2's energy_point: " << bob.getstats("_Energy_points") << std::endl;
	std::cout << "bob2's attack_damage: " << bob.getstats("_attack_damage") << std::endl;
	std::cout << "bob2's type: " << bob.getNameType("_Type") << std::endl;

	ScavTrap bob3("Bob3");
	bob3 = bob2;
	std::cout << "bob3's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	std::cout << "bob3's energy_point: " << bob.getstats("_Energy_points") << std::endl;
	std::cout << "bob3's attack_damage: " << bob.getstats("_attack_damage") << std::endl;
	std::cout << "bob3's type: " << bob.getNameType("_Type") << std::endl;

	std::cout << "\n--- test attack ---" << std::endl;
	bob.attack("Bob2");
	bob2.takeDamage(bob.getstats("_Attack_damage"));
	// Timmy.takeDamage(bob.getstats("_Attack_damage"));
	std::cout << "Bob2's hitpoints: " << bob2.getstats("_Hitpoints") << std::endl;
	// std::cout << "Timmy's hitpoints: " << Timmy.getstats("_Hitpoints") << std::endl;
	Timmy.attack("Bob");
	bob.takeDamage(Timmy.getstats("_Attack_damage"));
	Timmy.beRepaired(10);
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	bob.beRepaired(20);
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	bob2.attack("Bob");
	bob.takeDamage(bob2.getstats("_Attack_damage"));
	bob2.beRepaired(100);

	std::cout << "\n--- stats ---" << std::endl;
	std::cout << "bob's hitpoints: " << bob.getstats("_Hitpoints") << std::endl;
	std::cout << "bob's energy_point: " << bob.getstats("_Energy_points") << std::endl;
	std::cout << "bob's attack_damage: " << bob.getstats("_attack_damage") << std::endl;
	std::cout << "bob's type: " << bob.getNameType("_Type") << std::endl << std::endl;
	std::cout << "bob2's hitpoints: " << bob2.getstats("_Hitpoints") << std::endl;
	std::cout << "bob2's energy_point: " << bob2.getstats("_Energy_points") << std::endl;
	std::cout << "bob2's attack_damage: " << bob2.getstats("_attack_damage") << std::endl;
	std::cout << "bob2's type: " << bob2.getNameType("_Type") << std::endl << std::endl;
	std::cout << "Timmy's hitpoints: " << Timmy.getstats("_Hitpoints") << std::endl;
	std::cout << "Timmy's energy_point: " << Timmy.getstats("_Energy_points") << std::endl;
	std::cout << "Timmy's attack_damage: " << Timmy.getstats("_attack_damage") << std::endl;
	std::cout << "Timmy's type: " << Timmy.getNameType("_Type") << std::endl;

	std::cout << "\n--- test gate keeper mode ---" << std::endl;
	bob.guardGate();

	std::cout << "\n--- end of scope ---" << std::endl;
	return 0;
}