/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 23:14:45 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/06 23:14:47 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap {

public:

	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap(void);

	FragTrap & operator=(FragTrap const & rhs);

	void	highFiveGuys(void);
};

#endif