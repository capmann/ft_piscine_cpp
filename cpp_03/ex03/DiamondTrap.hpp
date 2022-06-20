/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:34:59 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/06 23:35:01 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap {

public:

	DiamondTrap(std::string name);
	DiamondTrap(std::string name, int hp, int ep, int ad);
	DiamondTrap(DiamondTrap const & copy);
	~DiamondTrap(void);

	DiamondTrap & operator=(DiamondTrap const & rhs);
	
	void		whoAmI();

private:

	std::string	_name;
};

#endif


