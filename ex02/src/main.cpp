
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

	return (0);
}
