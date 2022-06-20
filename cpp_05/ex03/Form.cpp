#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(void) : _name("Random form"), _signed(0), _gradeToSign(150), _gradeToExecute(150) {

	return;
}

Form::Form(std::string name, bool sign, int gradeToSign, int gradeToExec) : _name(name), _signed(sign), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExec) {

	if (gradeToSign < 0 || gradeToExec < 0)
		throw GradeOutOfScopeException();
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw GradeTooLowException();
	return;
}

Form::Form(Form const & copy) : _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute) {

	*this = copy;
	return;
}

Form::~Form() {

	return;
}

Form & Form::operator=(Form const & rhs) {

	this->getName() = rhs.getName();
	this->_signed = rhs.getSigned();
	return (*this);
}

std::string	Form::getName(void) const {

	return (this->_name);
}

bool	Form::getSigned(void) const {

	return (this->_signed);
}

int	Form::getGradeToSign(void) const {

	return (this->_gradeToSign);
}

int	Form::getGradeToExecute(void) const {

	return (this->_gradeToExecute);
}

void	Form::setSigned(bool sign) {

	this->_signed = sign;
	return;
}

void	Form::beSigned(Bureaucrat bureaucrat) {

	if (this->getGradeToSign() < bureaucrat.getGrade())
		throw GradeTooLowException();
	else 
	{
		if (this->_signed == true)
			throw FormAlreadySigned();
		else 
			this->_signed = true;
	}
	return;
}

void	Form::execute(Bureaucrat const & executor) const {

	if (this->_signed == true)
	{
		if (this->getGradeToExecute() < executor.getGrade())
			throw GradeTooLowException();
		else
			std::cout << "execute form" << std::endl;
	}
	else
		std::cout << "Form is not signed yet." << std::endl;
}

std::ostream & operator<<(std::ostream & o, Form const & Form) {

	if (Form.getSigned() == 0)
		o << Form.getName() << " should be signed by grade " << Form.getGradeToSign() << " and executed by " << Form.getGradeToExecute() << ". It is currently not signed.";
	else if (Form.getSigned() == 1)
		o << Form.getName() << " should be signed by grade " << Form.getGradeToSign() << " and executed by " << Form.getGradeToExecute() << ". It is currently signed.";
	else
		o << Form.getName() << "'s grade is out of scope.";
	return (o);
}