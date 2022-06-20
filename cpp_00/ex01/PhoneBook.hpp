/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 16:43:04 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/30 15:55:49 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string.h>
#include "Contact.hpp"

class	PhoneBook {

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	addContact(const Contact contact, int index);
	void	searchContact(const int index);
	void	displayContacts(void);
	void	displayOneContact(const int index);

private:

	Contact	contacts[8];
};

#endif
