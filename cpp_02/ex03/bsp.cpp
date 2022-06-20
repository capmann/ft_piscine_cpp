/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 23:05:58 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/04 23:06:00 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed		dABP = (a.getX().toFloat() * b.getY().toFloat()) + (b.getX().toFloat() * point.getY().toFloat()) + (a.getY().toFloat() * point.getX().toFloat()) - ((point.getX().toFloat() * b.getY().toFloat()) + (b.getX().toFloat() * a.getY().toFloat()) + (a.getX().toFloat() * point.getY().toFloat()));
	Fixed		dAPC = (a.getX().toFloat() * point.getY().toFloat()) + (point.getX().toFloat() * c.getY().toFloat()) + (a.getY().toFloat() * c.getX().toFloat()) - ((c.getX().toFloat() * point.getY().toFloat()) + (point.getX().toFloat() * a.getY().toFloat()) + (a.getX().toFloat() * c.getY().toFloat()));
	Fixed		dPBC = (point.getX().toFloat() * b.getY().toFloat()) + (b.getX().toFloat() * c.getY().toFloat()) + (point.getY().toFloat() * c.getX().toFloat()) - ((c.getX().toFloat() * b.getY().toFloat()) + (b.getX().toFloat() * point.getY().toFloat()) + (point.getX().toFloat() * c.getY().toFloat()));

	if ((dABP > 0 && dAPC > 0 && dPBC > 0) || (dABP < 0 && dAPC < 0 && dPBC < 0))
		return (true);
	return (false);
}