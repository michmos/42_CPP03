
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
protected:
	const unsigned int _dfltHealth = 100;
	const unsigned int _dfltEnergy = 50;
	const unsigned int _dfltDamagePts = 20;

public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& scafTrap);
	~FragTrap();

	FragTrap& operator=(const FragTrap& toAssing);

	void	highFivesGuys() const;
};


#endif
