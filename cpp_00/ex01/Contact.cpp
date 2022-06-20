/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 15:35:10 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/30 15:48:05 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {

	return;
}

Contact::~Contact(void) {

	return;
}

void	Contact::setDarkestSecret(const std::string secret) {

	this->darkest_secret = secret;
	return;
}

std::string	Contact::getDarkestSecret() {

	return this->darkest_secret;
}

void	Contact::setFirstName(const std::string name) {

	this->first_name = name;
	return;
}

std::string	Contact::getFirstName() {

	return this->first_name;
}

void	Contact::setLastName(const std::string name) {

	this->last_name = name;
	return;
}

std::string	Contact::getLastName() {

	return this->last_name;
}

void	Contact::setNickname(const std::string name) {

	this->nickname = name;
	return;
}

std::string	Contact::getNickname() {

	return this->nickname;
}

void	Contact::setPhoneNb(const std::string nb) {

	this->phone_nb = nb;
	return;
}

std::string	Contact::getPhoneNb() {

	return this->phone_nb;
}