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

Zombie*	zombieHorde(int N, std::string name);

int	main() {

	Zombie*	zombie;
	int		i;

	i = -1;
	zombie = zombieHorde(10, "Balou");
	while (++i < 10)
		zombie[i].announce();
	delete [] zombie;
	return 0;
}
