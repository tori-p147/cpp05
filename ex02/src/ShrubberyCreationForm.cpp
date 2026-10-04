#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void ShrubberyCreationForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= _gradeRequiredToSign)
	{
		_isSigned = true;
		std::cout << this->getName() << " signed " << this->getName() << std::endl;
	}
	else if (b.getGrade() > _gradeRequiredToSign)
		throw GradeTooLowException("Grade too low");
}