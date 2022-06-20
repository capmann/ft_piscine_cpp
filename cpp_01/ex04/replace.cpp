/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 22:57:56 by cmarteau          #+#    #+#             */
/*   Updated: 2022/05/31 22:57:59 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

std::string	replaceAll(std::string str1, std::string str2, std::string line) {

	size_t	pos = 0;

	while ((pos = line.find(str1, pos)) !=std::string::npos)
	{
		if (pos!=std::string::npos)
		{
			line.erase(pos, str1.size());
			line.insert(pos, str2);

			pos += str2.size();
		}
	}
	return (line);
}