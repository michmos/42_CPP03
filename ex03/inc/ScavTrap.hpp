
#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
protected:
	const unsigned int _dfltHealth = 100;
	const unsigned int _dfltEnergy = 50;
	const unsigned int _dfltDamagePts = 20;

public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& scafTrap);
	~ScavTrap();

	ScavTrap& operator=(const ScavTrap& toAssign);

	void	attack(const std::string& target) override;
	void	guardGate() const;
};


#endif
