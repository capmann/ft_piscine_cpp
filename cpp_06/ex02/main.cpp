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

#include "Base.hpp"
#include "Children.hpp"
#include <sstream>
#include <algorithm>
#include "colormod.hpp"
#include <iomanip>

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);


int main()
{
	std::cout << "Initial base is ";
	Base	*p = generate();

	std::cout << "Base identified with pointers is ";
	identify(p);
	std::cout << "Base identified with references is ";
	identify(*p);
	return (0);
}
