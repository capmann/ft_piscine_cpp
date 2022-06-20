/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:53:53 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/30 15:54:22 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include "colormod.hpp"
#include <string>
#include <cstdlib>
#include <iomanip>
#include <ctype.h>

int	main() {

	std::string				buf;
	std::string				secret;
	std::string				firstName;
	std::string				lastName;
	std::string				nickname;
	std::string				phoneNb;
	PhoneBook				repertoire;
	Contact 				contact;
	std::string				index;
	int						index_i;
	int						i = 0;

   	Color::Modifier 		red(Color::FG_RED);		
   	Color::Modifier 		cyan(Color::FG_CYAN);		
 	Color::Modifier 		def(Color::FG_DEFAULT);
   	Color::Modifier 		green(Color::FG_GREEN);		
 	Color::Modifier 		magenta(Color::FG_LIGHT_MAGENTA);
 	Color::Modifier 		bgblue(Color::BG_BLUE);
 	Color::Modifier 		bgdef(Color::BG_DEFAULT);

	std::cout << std::endl << cyan << ">> Enter a command <<" << def << std::endl;
	std::getline(std::cin, buf);
	
	while (buf.compare("EXIT") != 0) {

		if (std::cin.eof() == true) {

			std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
			std::exit(0);
		}
		if (buf.compare("ADD") == 0) {

			std::cout << magenta << std::setfill ('-') << std::setw(50) << std::setbase(50);
			std::cout << "-" << def << std::endl;
			while (firstName.length() == 0) {
				std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
				std::cout << magenta << ">> Enter your contact's first name" << ": " << def;
				std::getline(std::cin, firstName);
				if (std::cin.eof() == true) {

					std::cout << std::endl;
					std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
					std::exit(0);
				}
			}
			while (lastName.length() == 0) {
				std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
				std::cout << magenta << ">> Enter your contact's last name" << ": " << def;
				std::getline(std::cin, lastName);
				if (std::cin.eof() == true) {

					std::cout << std::endl;
					std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
					std::exit(0);
				}
			}
			while (nickname.length() == 0) {
				std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
				std::cout << magenta << ">> Enter your contact's nickname" << ": " << def;
				std::getline(std::cin, nickname);
				if (std::cin.eof() == true) {

					std::cout << std::endl;
					std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
					std::exit(0);
				}
			}
			while (phoneNb.length() == 0) {
				std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
				std::cout << magenta << ">> Enter your contact's phone number" << ": " << def;
				std::getline(std::cin, phoneNb);
				if (std::cin.eof() == true) {

					std::cout << std::endl;
					std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
					std::exit(0);
				}
			}
			while (secret.length() == 0) {
				std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
				std::cout << magenta << ">> Enter your contact's darkest secret" << ": " << def;
				std::getline(std::cin, secret);
				if (std::cin.eof() == true) {

					std::cout << std::endl;
					std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
					std::exit(0);
				}
			}
			std::cout << std::setfill (' ') << std::setw(10) << std::setbase(10);
			std::cout << std::endl << magenta << "Contact successfully added !" << def << std::endl;
			std::cout << magenta << std::setfill ('-') << std::setw(50) << std::setbase(50);
			std::cout << "-" << def << std::endl;

			contact.setFirstName(firstName);
			firstName.clear();
			contact.setLastName(lastName);
			lastName.clear();
			contact.setNickname(nickname);
			nickname.clear();
			contact.setPhoneNb(phoneNb);
			phoneNb.clear();
			contact.setDarkestSecret(secret);
			secret.clear();
			repertoire.addContact(contact, i);

			i++;
		}
		else if (buf.compare("SEARCH") == 0) {
			
			std::cout << green;
			repertoire.displayContacts();
			std::cout << cyan << ">> Enter the index of the contact" << def << std::endl;
			std::getline(std::cin, index);

			if (std::cin.eof() == true) {

				std::cout << std::endl;
				std::cout << red << "Exiting the phonebook. All your contacts will be destroyed." << def << std::endl;
				std::exit(0);
			}

			index_i = std::atoi(index.c_str());

			if (index_i < 0 || index_i > 7 || (index_i == 0 && index.compare("0") != 0) || index.length() > 1)
				std::cout << red << "ERROR: index is not in the right format" << def << std::endl;	
			else {

				std::cout << magenta;
				repertoire.displayOneContact(index_i);
			}
		}
		else
			std::cout << red << "ERROR: invalid command" << def;
		std::cout << std::endl << cyan << ">> Enter a command <<" << def << std::endl;
		std::getline(std::cin, buf);
	}
	return 0;
}
