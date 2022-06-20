/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:49:22 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/10 16:49:23 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PP Form", 0, 25, 5) {

	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PP Form", 0, 25, 5) {

	this->_target = target;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) {

	*this = copy;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs) {

	this->_target = rhs._target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	if (this->getSigned() == true)
	{
		if (this->getGradeToExecute() < executor.getGrade())
			throw GradeTooLowException();
		else
			std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
	}
	else
		std::cout << "Form is not signed yet." << std::endl;
}

void	PresidentialPardonForm::beSigned(Bureaucrat bureaucrat) {

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
