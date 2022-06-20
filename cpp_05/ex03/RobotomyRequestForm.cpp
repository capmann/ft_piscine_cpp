/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:49:00 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/10 16:49:01 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RR Form", 0, 72, 45) {

	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RR Form", 0, 72, 45) {

	this->_target = target;
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) {

	*this = copy;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	return;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs) {

	this->_target = rhs._target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	srand(time(NULL));
	bool	tf = rand() % 2;

	if (this->getSigned() == true)
	{
		if (this->getGradeToExecute() < executor.getGrade())
			throw GradeTooLowException();
		else if (tf == true)
			std::cout << "Vrrrrrrrrr*******" << this->_target << " was robotized with success !" << std::endl;
		else
			std::cout << "Oh no ! The robotization of " << this->_target << " failed !" << std::endl;
	}
	else
		std::cout << "Form is not signed yet." << std::endl;
}

void	RobotomyRequestForm::beSigned(Bureaucrat bureaucrat) {

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
