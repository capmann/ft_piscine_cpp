/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 19:04:28 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 19:04:30 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

Weapon::Weapon(std::string type): _type(type) {

	return;
}

Weapon::~Weapon() {

	return;
}

const std::string&	Weapon::getType(void) const {

	return this->_type;
}

void			Weapon::setType(const std::string& type) {

	this->_type = type;
	return;
}


