/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:23:51 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/08 14:23:52 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {

	std::cout << this->getType() << " is entering the arena !" << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const & copy) {

	*this = copy;
	return;
}

WrongCat::~WrongCat() {

	std::cout << this->getType() << " is quitting the arena !" << std::endl;
	return;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "Meooooow..." << std::endl;
	return;
}