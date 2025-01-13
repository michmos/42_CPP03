
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
private:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& dTrap);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& toAssign);
	void	printStats() const;

	void	whoAmI() const;
};


#endif
