
#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	Intern {

public:

	Intern(void);
	Intern(Intern const & copy);
	~Intern(void);

	Intern & operator=(Intern const & rhs);

	Form*		makeForm(std::string name, std::string target);
};

std::ostream & operator<<(std::ostream & o, Intern const & Intern);

#endif

