
#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap() : _health(10), _energy(10), _damagePts(0) {
	#ifdef DEBUG
	std::cout << "Dflt constructor called" << std::endl;
	#endif
}

ClapTrap::ClapTrap(const std::string &name) : _name(name),
	_health(10), _energy(10), _damagePts(0) {
	#ifdef DEBUG
	std::cout << "Param constructor called" << std::endl;
	#endif
}

ClapTrap::ClapTrap(const ClapTrap& clapTrap) {
	#ifdef DEBUG
	std::cout << "Copy constructor called" << std::endl;
	#endif
	*this = clapTrap;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& clapTrap) {
	#ifdef DEBUG
	std::cout << "Assignment operator called" << std::endl;
	#endif
	if (this != &clapTrap)
	{
		_name = clapTrap._name;
		_health = clapTrap._health;
		_energy = clapTrap._energy;
		_damagePts = clapTrap._damagePts;
	}
	return (*this);
}

ClapTrap::~ClapTrap() {
	#ifdef DEBUG
	std::cout << "Dflt destructor called" << std::endl;
	#endif
}

void	ClapTrap::attack(const std::string& target) {
	if (_energy == 0 || _health == 0)
		return;

	_energy--;
	std::cout << _name << " attacks " << target << " causing " << _damagePts << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amnt) {
	if (_health == 0)
		return;

	_health = (amnt > _health) ? 0 : _health - amnt;
	std::cout << _name << " looses " << amnt << " health" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amnt) {
	if (_energy == 0 || _health == 0)
		return;

	_health += amnt;
	_energy--;
	std::cout << _name << " repairs itself with " << amnt << " health" << std::endl;
}
