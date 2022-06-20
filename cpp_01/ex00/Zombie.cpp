/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:27:16 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/03 19:37:04 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) : _name("Bibou") {

	std::cout << "A Zombie was born..." << std::endl;
	return;
}

Zombie::~Zombie(void) {

	std::cout << this->getName() << " died (ow no...)" << std::endl;
	return;
}

void	Zombie::announce(void) {

	std::cout << this->getName() << ": BraiiiiiiiinnnzzzZ" << std::endl;
	return;
}

void	Zombie::setName(const std::string name) {

	this->_name = name;
	return;
}

std::string	Zombie::getName() const {

	return this->_name;
}
