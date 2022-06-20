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
#include "Form.hpp"
#include "colormod.hpp"

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main()
{
	std::cout << std::endl;

	Form	formulaire("Medical form", 0, 15, 15);

	std::cout << cyan << formulaire << def << std::endl;
	
	std::cout << std::endl;

	Bureaucrat	bob("Bob", 22);
	Bureaucrat	emile("Emile", 1);
	Bureaucrat	charles("Charles", 150);
	Bureaucrat	amy("Amy", 14);

	std::cout << std::endl;

	std::cout << magenta << bob << std::endl;

	try
	{
		formulaire.beSigned(bob);
		std::cout << "The form was signed by " << bob.getName() << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Bureaucrat::GradeOutOfScopeException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	std::cout << std::endl;

	std::cout << magenta << emile << std::endl;

	try
	{
		formulaire.beSigned(emile);
		std::cout << green;
		emile.signForm(emile, formulaire);
		std::cout << def;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}	
	catch(const Bureaucrat::GradeOutOfScopeException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	std::cout << std::endl;

	std::cout << magenta << charles << def << std::endl;

	try
	{
		formulaire.beSigned(charles);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Bureaucrat::GradeOutOfScopeException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	std::cout << std::endl;

	std::cout << magenta << amy << std::endl;

	try
	{
		formulaire.beSigned(amy);
		amy.signForm(amy, formulaire);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::FormAlreadySigned& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Bureaucrat::GradeOutOfScopeException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}

	std::cout << std::endl;

	std::cout << cyan << formulaire << def << std::endl;
	return (0);
}
