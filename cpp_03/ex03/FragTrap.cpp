/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:18:47 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/06 23:18:49 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {

	std::cout << "Delicate " << this->getName() << " was born." << std::endl;
	std::cout << std::endl;
	return;
}

FragTrap::FragTrap(std::string name, int hp, int ep, int ad) : ClapTrap(name, hp, ep, ad) {

	return;
}

FragTrap::FragTrap(FragTrap const & copy) : ClapTrap(copy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap " << this->_name << " was delicately killed..." << std::endl;
	return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {

	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getEnergyPoints();
	this->_attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	FragTrap::highFiveGuys(void) {

	std::cout << this->getName() << " goes like: Come on guys, give me five !" << std::endl;
	return;
}
