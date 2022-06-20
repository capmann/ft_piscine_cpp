/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 15:48:48 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/08 15:48:50 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

	std::cout << "Brain Default Constructor was called." << std::endl;
	return;
}

Brain::Brain(Brain const & copy) {

	*this = copy;
	return;
}

Brain::~Brain() {

	std::cout << "Brain Destructor was called." << std::endl;
	return;
}

Brain & Brain::operator=(Brain const & rhs) {

	int	i = -1;
	while (++i < 100)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

