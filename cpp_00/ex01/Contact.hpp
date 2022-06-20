/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:12:54 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/30 15:34:45 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string.h>

class	Contact {

public:

	Contact(void);
	~Contact(void);

	void		setFirstName(const std::string name);
	std::string	getFirstName();
	void		setLastName(const std::string name);
	std::string	getLastName();
	void		setNickname(const std::string name);
	std::string	getNickname();
	void		setPhoneNb(const std::string nb);
	std::string	getPhoneNb();
	void		setDarkestSecret(const std::string secret);
	std::string	getDarkestSecret();

private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_nb;
	std::string	darkest_secret;
};

#endif
