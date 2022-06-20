
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>
#include <string>

class	ClapTrap {

public:

	ClapTrap(std::string name);
	ClapTrap(std::string name, int hp, int ep, int ad);
	ClapTrap(ClapTrap const & copy);
	~ClapTrap(void);

	ClapTrap & operator=(ClapTrap const & rhs);
	void	attack(const std::string & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName(void) const;
	int			getHitPoints(void) const;
	int			getEnergyPoints(void) const;
	int			getAttackDamage(void) const;

	void		setName(std::string const name);
	void		setHitPoints(int const pts);
	void		setEnergyPoints(int const pts);
	void		setAttackDamage(int const pts);


protected:

	std::string				_name;
	unsigned int			_hitPoints;
	unsigned int			_energyPoints;
	unsigned int			_attackDamage;
};

#endif

