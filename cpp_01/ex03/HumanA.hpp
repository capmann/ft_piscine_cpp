/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 18:58:50 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 18:58:53 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class	HumanA{

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA(void);

	void			attack(void);
	Weapon&			getWeapon(void);

private:

	std::string		name;
	Weapon&			weapon;
};
