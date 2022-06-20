/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:35:09 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/06 23:35:10 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name", _staticHitPoints, _staticEnergyPoints, _staticAttackDamage), FragTrap(name + "_clap_name", _staticHitPoints, _staticEnergyPoints, _staticAttackDamage), ScavTrap(name + "_clap_name", _staticHitPoints, _staticEnergyPoints, _staticAttackDamage) {

	this->_name = name;
	std::cout << "Diamond " << this->_name << " was born." << std::endl;
	std::cout << std::endl;
	return;
}

DiamondTrap::DiamondTrap(DiamondTrap const & copy) : ClapTrap(copy.getName()), FragTrap(copy.getName()), ScavTrap(copy.getName()) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap " << this->_name << " got ejected out of the game..." << std::endl;
	return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs) {

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << this->_name << " is my Diamond's name." << std::endl;
	std::cout << this->getName() << " is my ClapTrap's name." << std::endl;
	return;
}

