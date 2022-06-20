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

#include "iter.hpp"
#include "colormod.hpp"
#include "limits.h"

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main()
{

	std::string	str[5] = {"Hey", "I", "Just", "Met", "You"};
	int			tab[6] = {0, 1, 2, 3, 4, 5};
	float		tabf[4] = {0.0360, 396.45655, 1.754, 42.42};

	std::cout << magenta << "<< String test >>" << std::endl;
	::iter<const std::string>(str, 5, print);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << green << "<< Before Multiplication by Two >>" << std::endl;
	::iter<const int>(tab, 6, print);
	std::cout << std::endl;
	std::cout << "<< After Multiplication by Two >>" << std::endl;
	::iter<const int>(tab, 6, multiplyByTwo);
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << cyan << "Before To INT" << std::endl;
	::iter<const float>(tabf, 4, print);
	std::cout << std::endl;
	std::cout << "After To INT" << std::endl;
	::iter<const float>(tabf, 4, toInt);
	std::cout << std::endl;

	return 0;
}
