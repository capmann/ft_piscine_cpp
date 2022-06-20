/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:24:43 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/08 14:24:44 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {

	std::cout << this->getType() << " is entering the arena !" << std::endl;
	return;
}

WrongAnimal::WrongAnimal(std::string const type) : _type(type) {

	return;
}

WrongAnimal::WrongAnimal(WrongAnimal const & copy) {

	*this = copy;
	return;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "WrongAnimal is quitting the arena !" << std::endl;
	return;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {

	this->_type = rhs.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const {

	return (this->_type);
}

void	WrongAnimal::setType(std::string const type) {

	this->_type = type;
	return;
}

void	WrongAnimal::makeSound(void) const {

	std::cout << "Peeepeeeppeeeppeee" << std::endl;
	return;
}

