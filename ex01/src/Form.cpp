#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
{
	_isSigned = false;
}

Form::GradeTooHighException::GradeTooHighException(const std::string &msg)
{
	_msg = msg;
}

Form::GradeTooLowException::GradeTooLowException(const std::string &msg)
{
	_msg = msg;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{

}

Form::GradeTooLowException::~GradeTooLowException() throw()
{

}

Form::~Form()
{

}

int Form::getGradeRequiredToSign() const
{
	return _gradeRequiredToSign;
}

int Form::getGradeRequiredToExecute() const
{
	return _gradeRequiredToExecute;
}

std::string const & Form::getName() const
{
	return _name;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

void Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= _gradeRequiredToSign)
	{
		_isSigned = true;
		std::cout << this->getName() << " signed " << this->getName() << std::endl;
	}
	else if (b.getGrade() > _gradeRequiredToSign)
		throw GradeTooLowException("Grade too low");
}

std::ostream& operator<<(std::ostream &out, const Form &f)
{
	return out << f.getName() << ", form required to sign grade " << f.getGradeRequiredToSign() 
	<< ", required to execute grade " << f.getGradeRequiredToExecute()
	<< ", is signed " << f.getIsSigned();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return _msg.c_str();
}

const char *Form::GradeTooLowException::what() const throw()
{
	return _msg.c_str();
}
