
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class	Animal {

public:

	Animal(void);
	Animal(std::string const type);
	Animal(Animal const & copy);
	virtual ~Animal(void);

	Animal & operator=(Animal const & rhs);

	std::string	getType(void) const;
	void		setType(std::string const type);

	virtual void	makeSound(void) const = 0;
	virtual	Brain*	getBrain(void) const = 0;

protected:

	std::string				_type;
};

#endif

