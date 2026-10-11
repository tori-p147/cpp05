#ifndef RRF_HPP
#define RRF_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm(std::string &target);
		~RobotomyRequestForm();
		void beSigned(Bureaucrat &b);
		void execute(Bureaucrat const & executor) const;
};

#endif