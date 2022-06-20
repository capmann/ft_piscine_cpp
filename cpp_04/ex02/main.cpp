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

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

# define NbAnimals 4

int main()
{

	std::cout << "Test1: Table and destruction" << std::endl;
	std::cout << std::endl;
	const Animal* meta[NbAnimals];

	int	n = -1;
	while (++n < NbAnimals)
	{
		if (n < (NbAnimals / 2))
		{
			meta[n] = new Dog();
			std::cout << "This animal is a " << meta[n]->getType() << " and it does ";
			meta[n]->makeSound();
			std::cout << std::endl;
		}
		else
		{
			meta[n] = new Cat();
			std::cout << "This animal is a " << meta[n]->getType() << " and it does ";
			meta[n]->makeSound();
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;

	std::cout << "Test2: Leaks" << std::endl;
	std::cout << std::endl;

	const Animal*	i = new Dog();
	const Animal*	j = new Cat();

	delete i;
	delete j;
	std::cout << std::endl;

	std::cout << "Test3: Deep copy" << std::endl;
	std::cout << std::endl;

	Cat tom;
	std::cout << std::endl;
	Cat garfield(tom);
	std::cout << std::endl;

	std::cout << "Test4: Brain " << std::endl;
	std::cout << std::endl;

	Brain*	brain = meta[0]->getBrain();


	brain->ideas[0] = "Mium Mium I'm hungry !";
	brain->ideas[1] = "Can I have a hug?";
	brain->ideas[2] = "Siesta time !";

	std::cout << brain->ideas[0] << std::endl;;
	std::cout << brain->ideas[1] << std::endl;;
	std::cout << brain->ideas[2] << std::endl;;

	std::cout << std::endl;

	n = -1;
	while (++n < NbAnimals)
		delete meta[n];

	std::cout << std::endl;

	return (0);
}
