#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Bob the bureaucrat"), _grade(150) {

	return;
}

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name) {

	if (grade < 0)
		throw GradeOutOfScopeException();
	else if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
	{
		this->_grade = grade;
		std::cout << this->_name << " of grade " << this->_grade << " entered this office." << std::endl;
	}
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {

	*this = copy;
	return;
}

Bureaucrat::~Bureaucrat() {

	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs) {

	this->getName() = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

std::string	Bureaucrat::getName(void) const {

	return (this->_name);
}

int		Bureaucrat::getGrade(void) const {

	return (this->_grade);
}

void	Bureaucrat::decrementGrade(void) {

	if (this->_grade > 149)
		throw GradeTooLowException();
	else
		this->_grade += 1;
	return;
}

void	Bureaucrat::incrementGrade(void) {

	if (this->_grade < 2)
		throw GradeTooHighException();
	else
		this->_grade -= 1;
	return;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat) {

	if (bureaucrat.getGrade() > 0)
		o << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	else
		o << bureaucrat.getName() << "'s grade is out of scope.";
	return (o);
}