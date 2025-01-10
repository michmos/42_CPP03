
#include "../inc/ClapTrap.hpp"

int	main() {
	ClapTrap trap("Trip");

	trap.attack("target");

	trap.takeDamage(5);
	trap.beRepaired(5);

	trap.takeDamage(5);
	trap.takeDamage(5);

	trap.takeDamage(5);
	trap.attack("target");
	trap.beRepaired(5);

	return (0);
}
