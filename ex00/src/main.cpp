#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat *lowGrade = new Bureaucrat();
	lowGrade->setGrade(150);

	try
	{
		lowGrade->incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Bureaucrat *highGrade = new Bureaucrat();
	highGrade->setGrade(1);

	try
	{
		highGrade->decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
