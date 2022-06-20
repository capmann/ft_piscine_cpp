/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:56 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 18:00:16 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main() {

	Point	a(3, 5);
	Point	b(0, 2);
	Point	c(6, 2);

	Point	p(2, 3);
	Point	p1(6, 5);
	Point	p2(3, 5);

	if (bsp(a, b, c, p1) == true)
		std::cout << "Point p is inside triangle ABC" << std::endl;
	else
		std::cout << "Point p is outside triangle ABC" << std::endl;
	return (0);
}
