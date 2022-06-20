
#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form {

public:

	Form(void);
	Form(std::string const name, bool sign, int gradeToSign, int gradeToExec);
	Form(Form const & copy);
	~Form(void);

	Form & operator=(Form const & rhs);

	std::string		getName(void) const;
	bool			getSigned(void) const;
	int				getGradeToSign(void) const;
	int				getGradeToExecute(void) const;

	void			beSigned(Bureaucrat bureaucrat);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade is too high ! This form should be signed by a less experimented bureaucrat.");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade is too low ! This form should be signed by a more experimented bureaucrat.");
			}
	};

	class FormAlreadySigned : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("This form is already signed.");
			}
	};

	class GradeOutOfScopeException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade is out of scope ! Instanciation is not allowed.");
			}
	};

private:

	std::string	const			_name;
	bool						_signed;
	int const					_gradeToSign;
	int const					_gradeToExecute;

};

std::ostream & operator<<(std::ostream & o, Form const & Form);

#endif

