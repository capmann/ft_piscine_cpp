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

#include "MutantStack.hpp"
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

int main(int ac, char **av)
{

	if (ac != 5)
	{
		std::cout << red << "Please enter exactly 4 numbers" << def << std::endl;
		return (0);
	}

	std::cout << magenta << "======= Creating a stack with 2 numbers: 42 and 12 =======" << def << std::endl;

	MutantStack<int> mstack;

	mstack.push(42);
	mstack.push(12);

	std::cout << "Size of the stack is " << mstack.size() << std::endl;
	std::cout << "Number at the top of the stack is " << mstack.top() << std::endl;
	
	std::cout << magenta << "======= Popping top number out =======" << def << std::endl;
	mstack.pop();
	std::cout << "Size of the stack is now " << mstack.size() << std::endl;
	std::cout << "Number at the top of the stack is " << mstack.top() << std::endl;

	std::cout << magenta << "======= Pushing new numbers of the stack =======" << def << std::endl;

	mstack.push(std::atoi(av[1]));
	mstack.push(std::atoi(av[2]));
	mstack.push(std::atoi(av[3]));
	mstack.push(std::atoi(av[4]));

	std::cout << green << "..." << def << std::endl;

	std::cout << magenta << "======= Displaying the numbers thanks to iterators =======" << def << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << magenta << "======= Displaying the numbers thanks to reverse iterators =======" << def << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << magenta << "======= Creating a copy of the stack =======" << def << std::endl;
	std::stack<int>	s(mstack);
	std::cout << green << "Process successful !" << def << std::endl;

	std::cout << std::endl;

	std::cout << cyan << "======= Creating a list with 2 numbers: 42 and 12 =======" << def << std::endl;

	std::list<int> mslist;

	mslist.push_front(42);
	mslist.push_front(12);

	std::cout << "Size of the list is " << mslist.size() << std::endl;
	std::cout << "Number at the top of the list is " << mslist.front() << std::endl;
	
	std::cout << cyan << "======= Popping top number out =======" << def << std::endl;
	mslist.pop_front();
	std::cout << "Size of the list is now " << mslist.size() << std::endl;
	std::cout << "Number at the top of the list is " << mslist.front() << std::endl;

	std::cout << cyan << "======= Pushing new numbers of the list =======" << def << std::endl;

	mslist.push_back(std::atoi(av[1]));
	mslist.push_back(std::atoi(av[2]));
	mslist.push_back(std::atoi(av[3]));
	mslist.push_back(std::atoi(av[4]));

	std::cout << green << "..." << def << std::endl;

	std::cout << cyan << "======= Displaying the numbers thanks to iterators =======" << def << std::endl;

	std::list<int>::iterator itList = mslist.begin();
	std::list<int>::iterator iteList = mslist.end();

	++itList;
	--itList;
	while (itList != iteList)
	{
		std::cout << *itList << std::endl;
		++itList;
	}

	std::cout << cyan << "======= Displaying the numbers thanks to reverse iterators =======" << def << std::endl;

	std::list<int>::reverse_iterator ritList = mslist.rbegin();
	std::list<int>::reverse_iterator riteList = mslist.rend();

	++ritList;
	--ritList;
	while (ritList != riteList)
	{
		std::cout << *ritList << std::endl;
		++ritList;
	}

	std::cout << std::endl;

	std::cout << magenta << "======= Creating a deque with 2 numbers: 42 and 12 =======" << def << std::endl;

	std::deque<int> msdeque;

	msdeque.push_front(42);
	msdeque.push_front(12);

	std::cout << "Size of the deque is " << msdeque.size() << std::endl;
	std::cout << "Number at the top of the deque is " << msdeque.front() << std::endl;
	
	std::cout << magenta << "======= Popping top number out =======" << def << std::endl;
	msdeque.pop_front();
	std::cout << "Size of the deque is now " << msdeque.size() << std::endl;
	std::cout << "Number at the top of the deque is " << msdeque.front() << std::endl;

	std::cout << magenta << "======= Pushing new numbers of the deque =======" << def << std::endl;

	msdeque.push_back(std::atoi(av[1]));
	msdeque.push_back(std::atoi(av[2]));
	msdeque.push_back(std::atoi(av[3]));
	msdeque.push_back(std::atoi(av[4]));

	std::cout << magenta << "..." << def << std::endl;

	std::cout << magenta << "======= Displaying the numbers thanks to iterators =======" << def << std::endl;

	std::deque<int>::iterator itdeque = msdeque.begin();
	std::deque<int>::iterator itedeque = msdeque.end();

	++itdeque;
	--itdeque;
	while (itdeque != itedeque)
	{
		std::cout << *itdeque << std::endl;
		++itdeque;
	}

	std::cout << magenta << "======= Displaying the numbers thanks to reverse iterators =======" << def << std::endl;

	std::deque<int>::reverse_iterator ritdeque = msdeque.rbegin();
	std::deque<int>::reverse_iterator ritedeque = msdeque.rend();

	++ritdeque;
	--ritdeque;
	while (ritdeque != ritedeque)
	{
		std::cout << *ritdeque << std::endl;
		++ritdeque;
	}

	std::cout << std::endl;

	return (0);
}
