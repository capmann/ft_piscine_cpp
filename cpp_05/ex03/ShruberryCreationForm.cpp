/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:48:20 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/10 16:48:21 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShruberryCreationForm.hpp"
#include <fstream>

ShruberryCreationForm::ShruberryCreationForm(void) : Form("SC Form", 0, 145, 137) {

	return;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target) : Form("SC Form", 0, 145, 137) {

	this->_target = target;
	return;
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm const & copy) {

	*this = copy;
	return;
}

ShruberryCreationForm::~ShruberryCreationForm() {

	return;
}

ShruberryCreationForm & ShruberryCreationForm::operator=(ShruberryCreationForm const & rhs) {

	this->_target = rhs._target;
	return (*this);
}

void	ShruberryCreationForm::execute(Bureaucrat const & executor) const {

	const std::string	str = this->_target + "_shruberry"; 
	std::ofstream	ofs(str.c_str());
	std::string	trees = 
"     ccee88oo          \n"
"  C8O8O8Q8PoOb o8oo    \n"
" dOB69QO8PdUOpugoO9bD  \n"
"CgggbU8OU qOp qOdoUOdcb\n"
"   6OuU  /p u gcoUodpP \n"
"      \\\\//  /douUP   \n"
"        \\\\////       \n"
"         |||/\\        \n"
"         |||\\/        \n"
"         |||||         \n"
"  .....\\//||||\\....  \n";
	
	if (this->getSigned() == true)
	{
		if (this->getGradeToExecute() < executor.getGrade())
			throw GradeTooLowException();
		else {
			ofs << trees;
		}
	}
	else
		std::cout << "Form is not signed yet." << std::endl;
	ofs.close();
}

void	ShruberryCreationForm::beSigned(Bureaucrat bureaucrat) {

	if (this->getGradeToSign() < bureaucrat.getGrade())
		throw GradeTooLowException();
	else 
	{
		if (this->getSigned() == 1)
			throw FormAlreadySigned();
		else
			this->setSigned(true);
	}
	return;
}

