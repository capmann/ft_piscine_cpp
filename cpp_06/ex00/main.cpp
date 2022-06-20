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

#include "convert.hpp"
#include <sstream>
#include <algorithm>
#include "colormod.hpp"
#include <iomanip>

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please enter exactly 1 argument" << std::endl;
		return (0);
	}

	convert	conv;
	float	f;

	if (conv.isChar(av[1]))
		f = av[1][0];
	else
		f = std::atof(av[1]);

	if (f == 0 && !conv.isNumber(av[1]))
	{
		std::cout << red << "Impossible conversion" << def << std::endl;
		return(0);
	}

	try
	{
		char c = conv.toChar(f);
		std::cout << magenta << "char: " << c << def << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << magenta << "char: " << e << def << std::endl;
	}

	try
	{
		int i = conv.toInt(f);
		std::cout << green << "int: " << i << def << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << green << "int: " << e << def << std::endl;
	}
	
	try
	{
		f = conv.toFloat(f);
		std::cout << std::fixed << std::setprecision(1) << cyan << "float: " << f << "f" << def << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << cyan << "float: " << e << def << std::endl;
	}

	try
	{
		double d = conv.toDouble(f);
		std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl; 
	}
	catch(const std::string& e)
	{
		std::cout << "double: " << e << '\n';
	}

	return (0);
}
