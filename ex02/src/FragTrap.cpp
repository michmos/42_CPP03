
#include "../inc/FragTrap.hpp"


FragTrap::FragTrap()
{
	#ifdef DEBUG
	std::cout << "[FragTrap] Dflt constructor called" << std::endl;
	#endif

	_health = 100;
	_energy = 100;
	_damagePts = 30;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	#ifdef DEBUG
	std::cout << "[FragTrap] Param constructor called" << std::endl;
	#endif

	_health = 100;
	_energy = 100;
	_damagePts = 30;
}

FragTrap::FragTrap(const FragTrap& toCopy) : ClapTrap(toCopy) {
	#ifdef DEBUG
	std::cout << "[FragTrap] Copy constructor called" << std::endl;
	#endif
}

FragTrap::~FragTrap() {
	#ifdef DEBUG
	std::cout << "[FragTrap] Destructor called" << std::endl;
	#endif
}

FragTrap& FragTrap::operator=(const FragTrap& toAssign) {
	#ifdef DEBUG
	std::cout << "[FragTrap] Assignment operator called" << std::endl;
	#endif
	if (this != &toAssign) {
		ClapTrap::operator=(toAssign);
	}
	return (*this);
}

void	FragTrap::highFivesGuys() const {
	std::cout << "[FragTrap] " << _name << " gives high five" << std::endl;
}
