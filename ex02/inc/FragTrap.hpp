
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& scafTrap);
	~FragTrap();

	FragTrap& operator=(const FragTrap& toAssing);

	void	highFivesGuys() const;
};


#endif
