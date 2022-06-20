/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:56 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/07 20:53:33 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"
#include <sstream>
#include <algorithm>
#include "colormod.hpp"
#include <iomanip>

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

//Serialization: encoding information into atomic suites of info for persistance(saving) or transfer

//Reinterpret cast is better here because it is very permissive, and here we are reinterpreting a type so it is the best to use

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << red << "Please enter exactly 1 argument" << def << std::endl;
		return (0);
	}

	Data	data;
	Data	*checkData;
	uintptr_t	n;

	data.str = av[1];
	std::cout << cyan << data.str << def << std:: endl;

	n = serialize(&data);
	std::cout << green << n << def << std:: endl;

	checkData = deserialize(n);
	std::cout << magenta << (*checkData).str << def << std:: endl;

	return (0);
}
