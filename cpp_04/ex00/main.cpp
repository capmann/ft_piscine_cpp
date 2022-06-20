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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << "This animal is a " << meta->getType() << " and it does ";
	meta->makeSound();
	std::cout << "This animal is a " << j->getType() << " and it does ";
	j->makeSound();
	std::cout << "This animal is a " << i->getType() << " and it does ";
	i->makeSound();

	std::cout << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << "This animal is a " << wrongMeta->getType() << " and it does ";
	wrongMeta->makeSound();
	std::cout << "This animal is a " << wrongI->getType() << " and it does ";
	wrongI->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;
	delete wrongMeta;
	delete wrongI;
	
	return (0);
}
