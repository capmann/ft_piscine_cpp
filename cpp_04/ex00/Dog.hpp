/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:04:17 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/07 21:04:19 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Dog : public Animal {

public:

	Dog(void);
	Dog(Dog const & copy);
	virtual ~Dog(void);

	Dog & operator=(Dog const & rhs);

	virtual void	makeSound(void) const;
};

#endif
