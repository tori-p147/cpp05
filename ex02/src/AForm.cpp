#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
{

}

AForm::GradeTooHighException::GradeTooHighException(const std::string &msg)
{
	_msg = msg;
}

AForm::GradeTooLowException::GradeTooLowException(const std::string &msg)
{
	_msg = msg;
}

AForm::GradeTooHighException::~GradeTooHighException() throw()
{

}

AForm::GradeTooLowException::~GradeTooLowException() throw()
{

}

AForm::~AForm()
{

}

int AForm::getGradeRequiredToSign() const
{
	return _gradeRequiredToSign;
}

int AForm::getGradeRequiredToExecute() const
{
	return _gradeRequiredToExecute;
}

std::string const & AForm::getName() const
{
	return _name;
}

bool AForm::getIsSigned() const
{
	return _isSigned;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return _msg.c_str();
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return _msg.c_str();
}