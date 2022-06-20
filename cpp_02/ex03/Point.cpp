/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:55:14 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/04 22:55:16 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : _x(0), _y(0) {

	return;
}

Point::Point(Point const & copy) : _x(copy._x), _y(copy._y) {

	*this = copy;
	return;
}

Point::Point(float const x, float const y) : _x(x), _y(y) {

	return;
}

Point::~Point() {

	return;
}

Point & Point::operator=(Point const & rhs) {

	(void)rhs;
	return (*this);
}

Fixed	Point::getX(void) const {

	return (this->_x);
}

Fixed	Point::getY(void) const {

	return (this->_y);
}
