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

#include "replace.hpp"

int	main(int ac, char **av) {

	if (ac != 4)
	{
		std::cout << "ERROR: Wrong number of arguments" << std::endl;
		return (0);
	}
	
	std::string	file = av[1];
	std::string	char1 = av[2];
	std::string	char2 = av[3];

	if (file.length() == 0 || char1.length() == 0 || char2.length() == 0)
	{
		std::cout << "ERROR: Wrong argument format" << std::endl;
		return (0);
	}
	std::ifstream	ifs(av[1]);

	std::string		b;
	std::string		newFile;
	b = ".replace";
	newFile = file.append(b);

	std::string		line;

	if (ifs)
	{
		if (ifs.peek() == EOF)
		{
			std::cout << "ERROR: Input file is empty" << std::endl;
			return (0);
		}
		
		std::ofstream 	ofs(newFile.c_str());

		while (std::getline(ifs, line))
		{
			line = replaceAll(av[2], av[3], line);
			if (ofs)
				ofs << line << std::endl;
			else
			{
				std::cout << "ERROR: Could not open the output file" << std::endl;
				return (0);
			}
		}
		ifs.close();
		ofs.close();
	}
	else
		std::cout << "ERROR: Could not open the input file" << std::endl;
	return 0;
}
