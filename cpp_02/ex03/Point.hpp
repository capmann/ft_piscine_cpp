/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 22:50:42 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/04 22:50:44 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>

#include "Fixed.hpp"

class Point {

private:

	Fixed const	_x;
	Fixed const	_y;

public:
	
	Point(void);
	Point(float const x, float const y);
	Point(Point const &copy);
	~Point(void);

	Point & operator=(Point const & rhs);

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif