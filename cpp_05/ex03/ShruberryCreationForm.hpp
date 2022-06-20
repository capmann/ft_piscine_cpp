/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShruberryCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarteau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 16:48:29 by cmarteau          #+#    #+#             */
/*   Updated: 2022/06/10 16:48:31 by cmarteau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "Form.hpp"

class	ShruberryCreationForm : public Form {

public:

	ShruberryCreationForm(void);
	ShruberryCreationForm(std::string target);
	ShruberryCreationForm(ShruberryCreationForm const & copy);
	virtual ~ShruberryCreationForm(void);

	ShruberryCreationForm & operator=(ShruberryCreationForm const & rhs);

	virtual void	execute(Bureaucrat const & executor) const;
	void			beSigned(Bureaucrat bureaucrat);

private:

	std::string		_target;
};

#endif
