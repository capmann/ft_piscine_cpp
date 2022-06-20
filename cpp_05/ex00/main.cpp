/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 17:57:56 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/07 20:53:33 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "colormod.hpp"

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main()
{
	Bureaucrat	bob("Bob", 22);
	std::cout << cyan << "Hello, I'm " << bob << def << std::endl;
	Bureaucrat	emile("Emile", 1);
	std::cout << cyan << "Hello, I'm " << emile << def << std::endl;
	Bureaucrat	charles("Charles", 150);
	std::cout << cyan << "Hello, I'm " << charles << def << std::endl;

	std::cout << std::endl;
	try 
	{
		Bureaucrat	louise("Louise", 1000);
		// Bureaucrat	salomon("Salomon", 0);
		// Bureaucrat	salomon("Salomon", -1);
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Bureaucrat::GradeOutOfScopeException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}

	std::cout << std::endl;
	try
	{
		bob.decrementGrade();
		std::cout << green << bob << ", saw his grade decrement by 1." << std::endl;
		charles.decrementGrade();
		std::cout << green << charles << ", saw his grade decrement by 1." << std::endl;
		emile.incrementGrade();
		std::cout << green << emile << ", saw his grade increment by 1." << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	return (0);
}
