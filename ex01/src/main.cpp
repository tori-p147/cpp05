#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat *lowGrade = new Bureaucrat();
	lowGrade->setGrade(150);
	Form *formFail = new Form();
	lowGrade->signForm(*formFail);

	Bureaucrat *highGrade = new Bureaucrat();
	highGrade->setGrade(10);
	Form *formAccess = new Form();
	highGrade->signForm(*formAccess);
}
