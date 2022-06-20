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

#include "whatever.hpp"
#include "colormod.hpp"
#include "limits.h"

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main()
{

	std::cout << std::endl;
	std::cout << cyan << "<< INT TEST >>" << std::endl;

	int a = 2;
	int b = 3;

	::swap( a, b );
	
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << def << std::endl;

	std::cout << std::endl;
	std::cout << magenta << "<< STRING TEST >>" << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << def << std::endl;

	std::cout << std::endl;
	std::cout << green << "<< FLOAT TEST >>" << std::endl;

	float e = 42.42f;
	float f = 24.24f;

	::swap( e, f );
	
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << def << std::endl;

	std::cout << std::endl;
	std::cout << "<< LIMITS TEST >>" << std::endl;

	int int_max = INT_MAX;
	int int_min = INT_MIN;

	::swap( int_max, int_min );
	
	std::cout << "int_max = " << int_max << ", int_min = " << int_min << std::endl;
	std::cout << "min( e, f ) = " << ::min( int_min, int_max ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( int_min, int_max ) << std::endl;

	std::cout << std::endl;
	return 0;
}
