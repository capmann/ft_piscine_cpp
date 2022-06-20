/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 18:01:22 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 15:42:11 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie {

public:

	Zombie(void);
	~Zombie(void);

	void		announce(void);
	std::string	getName(void) const;
	void		setName(const std::string Foo);

private:

	std::string	_name;
};

#endif
