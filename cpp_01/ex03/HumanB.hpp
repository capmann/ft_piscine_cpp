/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:58:50 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 18:58:53 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include <iostream>
#include <string>
#include "Weapon.hpp"

class	HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);

	void		attack(void);
	Weapon&		getWeapon(void) const;
	void		setWeapon(Weapon& weapon);

private:

	Weapon*		weapon;
	std::string	name;
};

#endif