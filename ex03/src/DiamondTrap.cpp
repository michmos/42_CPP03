
#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	#ifdef DEBUG
	std::cout << "[DiamondTrap] dflt constructor called" << std::endl;
	#endif
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), _name(name) {
	#ifdef DEBUG
	std::cout << "[DiamondTrap] param constructor called" << std::endl;
	#endif
	_health = FragTrap::_dfltHealth;
	_energy = ScavTrap::_dfltEnergy;
	_damagePts = FragTrap::_dfltDamagePts;
}

DiamondTrap::DiamondTrap(const DiamondTrap& toCopy) {
	#ifdef DEBUG
	std::cout << "[DiamondTrap] copy constructor called" << std::endl;
	#endif
	*this = toCopy;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& toAssign) {
	#ifdef DEBUG
	std::cout << "[DiamondTrap] assignment operator called" << std::endl;
	#endif
	if(this != &toAssign)
	{
		ClapTrap::operator=(toAssign);
	}
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	#ifdef DEBUG
	std::cout << "[DiamondTrap] dflt destructor called" << std::endl;
	#endif
}

void	DiamondTrap::printStats() const {
	std::cout << "health: " << _health << std::endl;
	std::cout << "energy: " << _energy << std::endl;
	std::cout << "attackPts: " << _damagePts << std::endl;
}

void	DiamondTrap::whoAmI() const {
	std::cout
		<< "name: " << _name
		<< "\nClapTrap name: " << ClapTrap::_name
		<< std::endl;
}
