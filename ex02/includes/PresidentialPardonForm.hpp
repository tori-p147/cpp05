#ifndef PPF_HPP
#define PPF_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm: public AForm
{
	public:
		PresidentialPardonForm(std::string &target);
		~PresidentialPardonForm();
		void beSigned(Bureaucrat &b);
		void execute(Bureaucrat const & executor) const;

};

#endif