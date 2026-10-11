#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string &target)
{
	setGradeRequiredToSign(72);
	setGradeRequiredToExecute(45);
	setIsSigned(false);
	setName(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void RobotomyRequestForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= getGradeRequiredToSign())
	{
		setIsSigned(true);
		std::cout << b.getName() << " signed " << this->getName() << std::endl;
	}
	else if (b.getGrade() > getGradeRequiredToSign())
		throw GradeTooLowException(b.getName() + " couldn’t sign " + this->getName() + " because grade too low");
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() && executor.getGrade() <= getGradeRequiredToExecute())
	{
		std::cout << "BZzzgghgh... " << getName();
		if (rand() %2 == 0)
			std::cout << " has been robotomized successfully\n" << std::endl;
		else 
			std::cout << " robotomy failed\n" << std::endl;
	} else 
		throw GradeTooLowException(executor.getName() + " couldn’t execute " + this->getName() + " because grade too low");
}