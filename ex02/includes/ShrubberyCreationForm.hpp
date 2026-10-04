#ifndef SCF_HPP
#define SCF_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm();
		~ShrubberyCreationForm();
		void beSigned(Bureaucrat &b);
		std::string const & getName() const;
		int getGradeRequiredToSign() const;
		int getGradeRequiredToExecute() const;
		bool getIsSigned() const;
};

#endif