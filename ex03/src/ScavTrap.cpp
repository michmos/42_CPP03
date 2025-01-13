
#include "../inc/ScavTrap.hpp"


ScavTrap::ScavTrap() {
	#ifdef DEBUG
	std::cout << "[ScavTrap] Dflt constructor called" << std::endl;
	#endif
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	#ifdef DEBUG
	std::cout << "[ScavTrap] Param constructor called" << std::endl;
	#endif
}

ScavTrap::ScavTrap(const ScavTrap& toCopy) : ClapTrap(toCopy) {
	#ifdef DEBUG
	std::cout << "[ScavTrap] Copy constructor called" << std::endl;
	#endif
}

ScavTrap::~ScavTrap() {
	#ifdef DEBUG
	std::cout << "[ScavTrap] Destructor called" << std::endl;
	#endif
}

ScavTrap& ScavTrap::operator=(const ScavTrap& toAssign) {
	#ifdef DEBUG
	std::cout << "[ScavTrap] Assignment operator called" << std::endl;
	#endif
	if (this != &toAssign) {
		ClapTrap::operator=(toAssign);
	}
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	if (_energy == 0 || _health == 0)
		return;

	_energy--;
	std::cout << "[ScavTrap] " << _name << " attacks " << target << " causing " << _damagePts << " points of damage" << std::endl;
}

void	ScavTrap::guardGate() const {
	std::cout << "[ScavTrap] " << _name << " is now in Gate Keeper mode" << std::endl;
}
