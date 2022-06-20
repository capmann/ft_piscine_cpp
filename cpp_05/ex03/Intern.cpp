#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShruberryCreationForm.hpp"

Intern::Intern(void) {

	return;
}

Intern::Intern(Intern const & copy) {

	*this = copy;
	return;
}

Intern::~Intern() {

	return;
}

Intern & Intern::operator=(Intern const & rhs) {

	(void)rhs;
	return (*this);
}

static Form	*new_rr(std::string target) {

	Form*	rr_form = new RobotomyRequestForm(target);
	return(rr_form);
}

static Form	*new_pp(std::string target) {

	Form*	pp_form = new PresidentialPardonForm(target);
	return(pp_form);
}

static Form	*new_sc(std::string target) {

	Form*	sc_form = new ShruberryCreationForm(target);
	return(sc_form);
}

Form*	Intern::makeForm(std::string name, std::string target) {

	Form*	(*fform[3])(std::string ftarget) = {new_pp, new_rr, new_sc};
	std::string	fname[3] = {"PP_FORM", "RR_FORM", "SC_FORM"};
	int		i = -1;
	Form*	form = NULL;

	while (++i < 3) {

		if (fname[i].compare(name) == 0)
		{
			form = fform[i](target);
			break;
		}
	}
	if (form == NULL)
		std::cout << "This form does not exist." << std::endl;
	else
		std::cout << "Intern creates " << fname[i] << std::endl;
	return(form);
}