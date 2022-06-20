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

#include "easyfind.hpp"
#include "colormod.hpp"
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <algorithm>
#include <deque>

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main()
{

	std::cout << cyan << "<< TEST WITH A LIST >>" << def << std::endl;
	std::list<int>		list(5, 42);
	std::cout << "List of size 5 was filled with int 42" << std::endl;
	std::list<int>::const_iterator	posListI;
	std::list<int>::const_iterator	posListJ;

	int								i = 4;
	int								j = 42;

	try
	{
		std::cout << "...trying to find " << j << " in the list" << std::endl;
		posListJ = ::easyFind(list, j);
		std::cout << green << "Value " << *posListJ << " was found in the container!" << def << std::endl;
		std::cout << "...trying to find " << i << " in the list" << std::endl;
		posListI = ::easyFind(list, i);
		std::cout << green << "Value " << *posListI << " was found in the container!" << def << std::endl;
	}
	catch(const valueNotFound::exception& e)
	{
		std::cerr << red << e.what() << def << '\n';
	}

	std::cout << std::endl;

	std::cout << cyan << "<< TEST WITH A VECTOR >>" << def << std::endl;
	std::vector<int>	vector;
	
	vector.push_back(0);
	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	vector.push_back(4);

	std::cout << "Vector of size 5 was filled with 0 1 2 3 4" << std::endl;

	std::vector<int>::const_iterator	posVI;
	std::vector<int>::const_iterator	posVJ;

	try
	{
		std::cout << "...trying to find " << i << " in the vector" << std::endl;
		posVI = ::easyFind(vector, i);
		std::cout << green << "Value " << *posVI << " was found in the container!" << def << std::endl;
		std::cout << "...trying to find " << j << " in the vector" << std::endl;
		posVJ = ::easyFind(vector, j);
		std::cout << green << "Value " << *posVJ << " was found in the container!" << def << std::endl;
	}
	catch(const valueNotFound::exception& e)
	{
		std::cerr << red << e.what() << def << '\n';
	}

	std::cout << std::endl;

	std::cout << cyan << "<< TEST WITH A DEQUE >>" << def << std::endl;
	std::deque<int>	deque;
	
	deque.push_back(10);
	deque.push_back(20);
	deque.push_back(30);
	deque.push_back(40);
	deque.push_back(42);

	std::cout << "Deque of size 5 was filled with 10 20 30 40 42" << std::endl;

	std::deque<int>::const_iterator	posDI;
	std::deque<int>::const_iterator	posDJ;

	try
	{
		std::cout << "...trying to find " << j << " in the deque" << std::endl;
		posDJ = ::easyFind(deque, j);
		std::cout << green << "Value " << *posDJ << " was found in the container!" << def << std::endl;
		std::cout << "...trying to find " << i << " in the deque" << std::endl;
		posDI = ::easyFind(deque, i);
		std::cout << green << "Value " << *posDI << " was found in the container!" << def << std::endl;
	}
	catch(const valueNotFound::exception& e)
	{
		std::cerr << red << e.what() << def << '\n';
	}
	return 0;
}
