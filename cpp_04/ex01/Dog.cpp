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

	std::cout << this->_type << " is entering the arena !" << std::endl;
	this->_brain = new Brain;
	return;
}

Dog::Dog(Dog const & copy) {

	std::cout << "Dog Copy Constructor was called." << std::endl;
	*this = copy;
	return;
}

Dog::~Dog() {

	std::cout << this->_type << " is quitting the arena !" << std::endl;
	delete this->_brain;
	return;
}

Dog & Dog::operator=(Dog const & rhs) {

	this->_type = rhs.getType();
	this->_brain = new Brain();
	*(this->_brain) = *(rhs._brain);
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Warf Warf !!!" << std::endl;
	return;
}

Brain	*Dog::getBrain(void) const {

	return (this->_brain);
}