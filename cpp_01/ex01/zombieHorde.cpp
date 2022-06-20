/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:41:48 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 17:41:50 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	if (N <= 0)
		return (NULL);
	Zombie*	zombie = new Zombie[N];
	while (i < N)
	{
		zombie[i].setName(name);
		i++;
	}
	return (zombie);
}
