/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 21:04:38 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/07 21:04:39 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {

	std::cout << this->getType() << " is entering the arena !" << std::endl;
	return;
}

Dog::Dog(Dog const & copy) {

	*this = copy;
	return;
}

Dog::~Dog() {

	std::cout << this->getType() << " is quitting the arena !" << std::endl;
	return;
}

Dog & Dog::operator=(Dog const & rhs) {

	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Warf Warf !!!" << std::endl;
	return;
}