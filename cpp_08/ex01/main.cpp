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

#include "span.hpp"
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

	std::cout << cyan << "=========== Creating a container of 5 ints ==========" << std::endl;
	std::cout << def << std::endl;
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Container's first number is " << sp.getContainer().front() << std::endl;
	std::cout << "Container's last number is " << sp.getContainer().back() << std::endl;
	std::cout << std::endl;
	std::cout << "Shortest span for this container is " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span for this container is " << sp.longestSpan() << std::endl;

	std::cout << std::endl;

	std::cout << cyan << "=========== Filling the container with 5 new ints ==========" << std::endl;
	std::cout << def << std::endl;

	std::vector<int> list;
	int	i = -1;
	while(++i < 5)
		list.push_back(i + 1);

	try {
		sp.fillContainer(list.begin(), list.end());

		std::cout << "Container's first number is now " << sp.getContainer().front() << std::endl;
		std::cout << "Container's last number is now " << sp.getContainer().back() << std::endl;
		std::cout << std::endl;
		std::cout << "Shortest span for this container is now " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span for this container is now " << sp.longestSpan() << std::endl;
	}
	catch(const Span::NoSpaceException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}

	std::cout << def << std::endl;
	std::cout << cyan << "=========== Filling the container with 10 new ints ==========" << std::endl;
	std::cout << def << std::endl;

	std::vector<int> vec;
	i = -1;
	while(++i < 10)
		vec.push_back(i + 1);

	try {
		sp.fillContainer(vec.begin(), vec.end());

		std::cout << "Container's first number is now " << sp.getContainer().front() << std::endl;
		std::cout << "Container's last number is now " << sp.getContainer().back() << std::endl;
		std::cout << std::endl;
		std::cout << "Shortest span for this container is now " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span for this container is now " << sp.longestSpan() << std::endl;
	}
	catch(const Span::NoSpaceException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}

	std::cout << def << std::endl;
	std::cout << cyan << "=========== Creating a new container of size 10.000 ==========" << std::endl;
	std::cout << def << std::endl;

	Span	newSp(10000);

	std::vector<int> big;
	i = -1;
	while(++i < 10000)
		big.push_back(i + 1);

	try {
		newSp.fillContainer(big.begin(), big.end());

		std::cout << "Container's first number is now " << newSp.getContainer().front() << std::endl;
		std::cout << "Container's last number is now " << newSp.getContainer().back() << std::endl;
		std::cout << std::endl;
		std::cout << "Shortest span for this container is now " << newSp.shortestSpan() << std::endl;
		std::cout << "Longest span for this container is now " << newSp.longestSpan() << std::endl;
	}
	catch(const Span::NoSpaceException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}

	std::cout << def << std::endl;
	std::cout << cyan << "=========== Creating a new container with 1 int ==========" << std::endl;
	std::cout << def << std::endl;

	Span	smallsp(1);

	std::cout << "Adding a first number" << std::endl;
	smallsp.addNumber(0);
	
	try {

		std::cout << "Trying to add a second number" << std::endl;
		smallsp.addNumber(3);

		std::cout << "Container's first number is now " << smallsp.getContainer().front() << std::endl;
		std::cout << "Container's last number is now " << smallsp.getContainer().back() << std::endl;
		std::cout << std::endl;
		std::cout << smallsp.shortestSpan() << std::endl;
		std::cout << smallsp.longestSpan() << std::endl;
	}
	catch(const Span::NoSpaceException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Span::NotEnoughElementsException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}
	std::cout << std::endl;
	try {

		std::cout << "Trying to compare with only one number" << std::endl;

		std::cout << "Container's first number is now " << smallsp.getContainer().front() << std::endl;
		std::cout << "Container's last number is now " << smallsp.getContainer().back() << std::endl;
		std::cout << std::endl;
		std::cout << smallsp.shortestSpan() << std::endl;
		std::cout << smallsp.longestSpan() << std::endl;
	}
	catch(const Span::NoSpaceException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Span::NotEnoughElementsException &e) {

		std::cerr << red << e.what() << def << std::endl;
	}
	return 0;
}
