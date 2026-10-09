#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	Bureaucrat *first = new Bureaucrat(136);
	std::string target = "first";
	ShrubberyCreationForm *scf = new ShrubberyCreationForm(target);
	scf->beSigned(*first);
	scf->execute(*first);
	return (0);
}
