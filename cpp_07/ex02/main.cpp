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

#include <iostream>
#include "array.hpp"
#include "colormod.hpp"

#define MAX_VAL 5

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main(int, char**)
{
	std::cout << cyan << "<< Creating two identical arrays of size MaxVal >>" << std::endl;
    array<int> numbers(MAX_VAL);

    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
	std::cout << std::endl;
	std::cout << "NUMBERS :" << std::endl;
	int	i = -1;
	while (++i < MAX_VAL)
		std::cout << numbers[i] << " | ";
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "MIRROR :" << std::endl;
	i = -1;
	while (++i < MAX_VAL)
		std::cout << mirror[i] << " | ";
	std::cout << def << std::endl;
	std::cout << std::endl;

    //SCOPE

	std::cout << magenta << "<< Creating a copy of numbers to check if mirrors and numbers value remain the same >>" << std::endl;
    {
        array<int> tmp = numbers;
        array<int> test(tmp);
    }

	std::cout << "Error message will pop up if values are not the same" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	std::cout << std::endl;

	std::cout << green << "<< Trying twice to access unaccessible memory >> " << std::endl;
  	std::cout << "Exceptions will occur if we cannot access those zones" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << red << e.what() << def << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << red << e.what() << def << '\n';
    }

	std::cout << std::endl;
	std::cout << "<< Reassigning the numbers array >> " << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	i = -1;
	while (++i < MAX_VAL)
		std::cout << numbers[i] << " | ";
	std::cout << std::endl;
    delete [] mirror;//
    return 0;
}
