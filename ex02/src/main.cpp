
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"

int	main() {
	{
		// highFivesGuys function
		FragTrap	trap("Trip");
		trap.highFivesGuys();

		// virtual function
		ClapTrap	*ptr = &trap;
		ptr->attack("target");

		// out of energy
		for (int i = 0; i < 100; ++i) {
			ptr->beRepaired(1);
		}
		ptr->attack("target");

	}
	std::cout << std::endl;
	{
		// deleting polymorphic ptr
		ClapTrap	*ptr2 = new FragTrap("Pete");
		delete ptr2;
	}
	std::cout << std::endl;
	{
		// assignmet operator
		FragTrap	trap;
		FragTrap	trap2("jon");

		trap = trap2;
		std::cout << std::endl;

		ClapTrap	cTrap;
		FragTrap	cTrap2("jon");

		cTrap = cTrap2;
	}

	return (0);
}
