
#ifndef SCAFTRAP_HPP
# define SCAFTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& scafTrap);
	~ScavTrap();

	void	attack(const std::string& target) override;
	void	guardGate() const;
};


#endif
