/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:12:51 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/27 00:37:54 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main() {

	Zombie*	zombie;

	zombie = newZombie("Louis");
	
	randomChump("Gaspard");

	zombie->announce();
	delete zombie;
	return 0;
}
