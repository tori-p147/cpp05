#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade)
{
	_grade = grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg)
{
	_msg = msg;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &msg)
{
	_msg = msg;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{

}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{

}

Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat::setGrade(int grade)
{
	_grade = grade;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::string const & Bureaucrat::getName() const
{
	return _name;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade > 1 && this->_grade < 150)
		_grade++;
	else if (this->_grade == 1)
		throw new GradeTooHighException("Grade too high");
	else
		throw GradeTooLowException("Grade too low");
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade > 1 && this->_grade < 150)
		_grade--;
	else if (this->_grade == 1)
		throw GradeTooHighException("Grade too high");
	else
		throw GradeTooLowException("Grade too low");
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b)
{
	return out << b.getName() << ", bureaucrat grade " << b.getGrade();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return _msg.c_str();
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return _msg.c_str();
}