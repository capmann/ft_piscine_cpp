/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:23:37 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/08 14:23:39 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {

public:

	WrongCat(void);
	WrongCat(WrongCat const & copy);
	~WrongCat(void);

	WrongCat & operator=(WrongCat const & rhs);

	void	makeSound(void) const;
};

#endif


