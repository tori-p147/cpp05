#ifndef RRF_HPP
#define RRF_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class RobotomyRequestForm: public AForm {
	public:
		RobotomyRequestForm();
		~RobotomyRequestForm();
		void execute(Bureaucrat const & executor) const;
};

#endif