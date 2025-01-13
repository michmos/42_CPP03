
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>
#include <sys/types.h>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_health;
	unsigned int	_energy;
	unsigned int	_damagePts;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap& clapTrap);
	virtual ~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& clapTrap);

	virtual void	attack(const std::string& target);
	void	takeDamage(unsigned int amnt);
	void	beRepaired(unsigned int amnt);
};

#endif

