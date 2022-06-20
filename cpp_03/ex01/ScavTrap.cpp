/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 21:57:44 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/06 21:57:46 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {

	std::cout << "Beautiful " << this->getName() << " was born." << std::endl;
	return;
}

ScavTrap::ScavTrap(ScavTrap const & copy) : ClapTrap(copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap " << this->_name << " was beautifully killed..." << std::endl;
	return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(const std::string & target) {

	if (this->getEnergyPoints() > 0  && this->getHitPoints() > 0) {

		std::cout << this->_name << " attacks very beautifully " << target << " causing " << this->getAttackDamage() << " points of damage !" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() -1);
		return;
	}
	if (this->getHitPoints() <= 0)
		std::cout << this->_name << " cannot attack because he is dead." << std::endl;
	else
		std::cout << this->_name << " cannot attack because he does not have enough energy." << std::endl;
	return;
}

void	ScavTrap::guardGate(void) {

	std::cout << this->getName() << " has entered into GateKeeper mode." << std::endl;
	return;
}
