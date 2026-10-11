#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string &target)
{
	setGradeRequiredToSign(25);
	setGradeRequiredToExecute(5);
	setIsSigned(false);
	setName(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

void PresidentialPardonForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= getGradeRequiredToSign())
	{
		setIsSigned(true);
		std::cout << b.getName() << " signed " << this->getName() << std::endl;
	}
	else if (b.getGrade() > getGradeRequiredToSign())
		throw GradeTooLowException(b.getName() + " couldn’t sign " + this->getName() + " because grade too low");
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() && executor.getGrade() <= getGradeRequiredToExecute()) {
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox\n" << std::endl;
	} else 
		throw GradeTooLowException(executor.getName() + " couldn’t execute " + this->getName() + " because grade too low");
}
