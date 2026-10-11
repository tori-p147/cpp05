#ifndef SCF_HPP
#define SCF_HPP

#include <array>
#include <memory>
#include <fstream>
#include <cstdio>
#include <iostream>
#include <string>
#include "AForm.hpp"

class Bureaucrat;
class AForm;

class ShrubberyCreationForm: public AForm {
	public:
		ShrubberyCreationForm(std::string &target);
		~ShrubberyCreationForm();
		void beSigned(Bureaucrat &b);
		void execute(Bureaucrat const & executor) const;
};

#endif