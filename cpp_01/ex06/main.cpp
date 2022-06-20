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

#include "Harl.hpp"

int	main(int ac, char **av) {

	Harl		harl;
	std::string	complaint;

	if (ac != 2) {
		std::cout << "ERROR: Wrong number of arguments" << std::endl;
		return (0);
	}
	complaint = av[1];
	harl.complain(complaint);
	return (0);
}
