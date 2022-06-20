/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:24:03 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/08 14:24:05 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal {

public:

	WrongAnimal(void);
	WrongAnimal(std::string const type);
	WrongAnimal(WrongAnimal const & copy);
	~WrongAnimal(void);

	WrongAnimal & operator=(WrongAnimal const & rhs);

	std::string	getType(void) const;
	void		setType(std::string const type);

	void	makeSound(void) const;

protected:

	std::string				_type;
};

#endif


