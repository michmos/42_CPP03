
#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& scafTrap);
	~ScavTrap();

	void	guarGate();
};


#endif
