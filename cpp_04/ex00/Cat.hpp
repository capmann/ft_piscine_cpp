/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:04:28 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/07 21:04:30 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class	Cat : public Animal {

public:

	Cat(void);
	Cat(Cat const & copy);
	virtual ~Cat(void);

	Cat & operator=(Cat const & rhs);

	virtual void	makeSound(void) const;
};

#endif

