
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	Form;

class	Bureaucrat {

public:

	Bureaucrat(void);
	Bureaucrat(std::string const name, int grade);
	Bureaucrat(Bureaucrat const & copy);
	~Bureaucrat(void);

	Bureaucrat & operator=(Bureaucrat const & rhs);

	std::string				getName(void) const;
	int						getGrade(void) const;

	void			incrementGrade(void);
	void			decrementGrade(void);

	void			signForm(Bureaucrat const & bureaucrat, Form const & form);
	void			executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade is too high ! Instanciation or incrementation is not allowed.");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw() {

				return ("Grade is too low ! Instanciaton or decrementation is not allowed.");
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
	int							_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & bureaucrat);

#endif

