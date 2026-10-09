#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string &target)
{
	setGradeRequiredToSign(145);
	setGradeRequiredToExecute(137);
	setIsSigned(false);
	setName(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= getGradeRequiredToSign())
	{
		setIsSigned(true);
		std::cout << this->getName() << " signed " << this->getName() << std::endl;
	}
	else if (b.getGrade() > getGradeRequiredToSign())
		throw GradeTooLowException("Grade too low");
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (getIsSigned() && executor.getGrade() <= getGradeRequiredToExecute())
	{
		std::cout << "scf was executed" << std::endl;
		std::string filename = getName() + "_shrubbery";
		const char *command = "tree";
		std::ofstream file(filename.c_str());
		if (!file.is_open())
			return ;
		file << "/ \\/ \\ / \\\n";
		file << "/ \\/ \\ / \\\n";
		file << "/ \\/ \\ / \\\n";
		file << "/ \\/ \\ / \\\n";
		file << "/ \\/ \\ / \\\n";
		file << " || || ||\n";
		file.close();
	}
}
