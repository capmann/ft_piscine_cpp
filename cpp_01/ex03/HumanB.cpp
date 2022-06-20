/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:04:28 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 19:04:30 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): weapon(0), name(name) {

	return;
}

HumanB::~HumanB() {

	return;
}

void	HumanB::attack() {

	if (this->weapon != 0)
		std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
	return;
}

Weapon&	HumanB::getWeapon(void) const {

	return (*(this->weapon));
}

void	HumanB::setWeapon(Weapon& weapon) {

	this->weapon = &weapon;
}