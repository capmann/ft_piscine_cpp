/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:49:09 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/30 15:45:01 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <ctype.h>
#include "colormod.hpp"

Color::Modifier 		red(Color::FG_RED);		
Color::Modifier 		def(Color::FG_DEFAULT);

PhoneBook::PhoneBook(void) {

	return;
}

PhoneBook::~PhoneBook(void) {

	return;
}

void	PhoneBook::addContact(const Contact contact, int index) {

	while (index > 7)
		index -= 8;
	contacts[index] = contact;
	return;
}

void	PhoneBook::searchContact(const int index) {

	std::string firstName = contacts[index].getFirstName();
	std::string lastName = contacts[index].getLastName();
	std::string nickname = contacts[index].getNickname();
	std::string phoneNb = contacts[index].getPhoneNb();

	std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
	std::cout << index << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	if (firstName.size() > 10)
	{
		firstName.resize(9);
		firstName += '.';
	}
	std::cout << firstName << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	if (lastName.size() > 10)
	{
		lastName.resize(9);
		lastName += '.';
	}
	std::cout << lastName << "|";
	std::cout << std::setfill (' ') << std::setw(10);
	if (nickname.size() > 10)
	{
		nickname.resize(9);
		nickname += '.';
	}
	std::cout << nickname << "|" << std::endl;
	return;
}

void	PhoneBook::displayContacts(void) {

	int	i = -1;

	std::cout << "----------------------------------------------" << std::endl;
	std::cout << "     index|first_name| last_name|   nickame|";
	std::cout << std::endl;
	while (++i < 8)
		searchContact(i);
	std::cout << "----------------------------------------------" << std::endl;
	return;
}

void	PhoneBook::displayOneContact(const int index) {

	if (contacts[index].getFirstName() == "")
		std::cout << red << "Error: This index does not refer to any contact yet" << def << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::setfill (' ') << std::setw(15) << std::setbase(15);
	std::cout << "First name" << ": ";
	std::cout << contacts[index].getFirstName() << std::endl;
	std::cout << std::setfill (' ') << std::setw(15) << std::setbase(15);
	std::cout << "Last name" << ": ";
	std::cout << contacts[index].getLastName() << std::endl;
	std::cout << std::setfill (' ') << std::setw(15) << std::setbase(15);
	std::cout << "Nickname" << ": ";
	std::cout << contacts[index].getNickname() << std::endl;
	std::cout << std::setfill (' ') << std::setw(15) << std::setbase(15);
	std::cout << "Phone number" << ": ";
	std::cout << contacts[index].getPhoneNb() << std::endl;
	std::cout << std::setfill (' ') << std::setw(15) << std::setbase(15);
	std::cout << "Darkest secret" << ": ";
	std::cout << contacts[index].getDarkestSecret() << std::endl;
	std::cout << "-----------------------" << std::endl;
}