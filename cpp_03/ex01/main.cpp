/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:56 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 18:00:16 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main() {

	ClapTrap	hero("Gasp");
	ScavTrap	villain("Bru");

	hero.setAttackDamage(10);

	hero.attack(villain.getName());
	villain.takeDamage(hero.getAttackDamage());

	hero.attack(villain.getName());
	villain.takeDamage(hero.getAttackDamage());	
	
	villain.attack(hero.getName());
	hero.takeDamage(villain.getAttackDamage());
	std::cout << std::endl;

	std::cout << hero.getName() << " has " << hero.getHitPoints() << " hit points and " << hero.getEnergyPoints() << " energy points." << std::endl;
	std::cout << std::endl;
	std::cout << villain.getName() << " has " << villain.getHitPoints() << " hit points and " << villain.getEnergyPoints() << " energy points." << std::endl;

	std::cout << std::endl;
	hero.beRepaired(3);
	std::cout << std::endl;
	hero.attack(villain.getName());
	villain.guardGate();
	std::cout << std::endl;

	return (0);
}
