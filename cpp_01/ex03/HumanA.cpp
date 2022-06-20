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

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon) {

	return;
}

HumanA::~HumanA() {

	return;
}

void	HumanA::attack() {

	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return;
}

Weapon&	HumanA::getWeapon(void) {

	return (this->weapon);
}