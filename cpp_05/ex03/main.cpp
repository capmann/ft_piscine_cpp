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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"
#include "colormod.hpp"
#include <string>
#include <sstream>
#include "Intern.hpp"

Color::Modifier		red(Color::FG_RED);
Color::Modifier		cyan(Color::FG_CYAN);
Color::Modifier		def(Color::FG_DEFAULT);
Color::Modifier		green(Color::FG_GREEN);
Color::Modifier		magenta(Color::FG_LIGHT_MAGENTA);

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "ERROR: Please enter 3 parameters." << std::endl;
		return(0);
	}

	Intern	intern;
	Form	*form;
	std::string	formType = av[3];

	std::cout << green;
	form = intern.makeForm(formType, "Arthur Dent");
	if (form == NULL)
		return (0);
	std::cout << def;

	std::cout << std::endl;
	std::cout << cyan << *form << def << std::endl;

	std::string	name = av[1];
	std::string	grad = av[2];
	int			grade;
	std::istringstream(grad) >> grade;

	try
	{
		std::cout << magenta;
		Bureaucrat	bob(name, grade);
		std::cout << def;
		std::cout << std::endl;

		std::cout << ">> Signing test << " << std::endl;

		std::cout << magenta << bob << def << std::endl;
		form->beSigned(bob);
		std::cout << green;
		bob.signForm(bob, *form);
		std::cout << cyan << *form << def << std::endl;
		std::cout << std::endl;
		std::cout << ">> Executing test << " << std::endl;

		std::cout << magenta << bob << def << std::endl;
		std::cout << green;
		bob.executeForm(*form);
		form->execute(bob);
		std::cout << def;
	}
	catch(const Form::FormAlreadySigned& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
	}
	catch(const Form::GradeOutOfScopeException& e)
	{
		std::cerr << red << e.what() << def << std::endl;
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
	delete form;
	return (0);
}
