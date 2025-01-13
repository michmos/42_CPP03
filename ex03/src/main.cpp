
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int	main() {
	{
		DiamondTrap test("peter");

		test.whoAmI();
		test.printStats();
		test.guardGate();
		test.highFivesGuys();

		test.attack("jon");
		test.attack("jon");
		test.attack("jon");
		test.takeDamage(20);
		test.takeDamage(20);
		test.beRepaired(20);
		test.printStats();
	}
	std::cout << std::endl;
	{
		DiamondTrap test("peter");
		test.takeDamage(20);

		DiamondTrap	test2(test);

		DiamondTrap	test3;
		test3 = test2;
	}

	
	return (0);
}
