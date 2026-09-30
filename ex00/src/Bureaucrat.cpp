#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::~Bureaucrat()
{

}

void Bureaucrat::incrementGrade()
{
	if (this->_grade > 1 && this->_grade < 150)
		_grade++;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade > 1 && this->_grade < 150)
		_grade--;
	else
		throw 
}
