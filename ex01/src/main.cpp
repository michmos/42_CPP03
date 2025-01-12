
#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int	main() {
	{
		// guardGate function
		ScavTrap	trap("Trip");
		trap.guardGate();

		// virtual function
		ClapTrap	*ptr = &trap;
		ptr->attack("target");

		// dying trap
		ptr->takeDamage(50);
		ptr->beRepaired(50);

		ptr->takeDamage(50);
		ptr->takeDamage(50);

		ptr->takeDamage(50);
		ptr->attack("target");
		ptr->beRepaired(50);
	}
	std::cout << std::endl;
	{
		// deleting polymorphic ptr
		ClapTrap	*ptr2 = new ScavTrap("Pete");
		delete ptr2;
	}

	return (0);
}
