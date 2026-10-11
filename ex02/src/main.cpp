#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	std::cout << "---- Test1: ShrubberyCreationForm SUCCESS ---\n" << std::endl;

	Bureaucrat *gardenerSuccess = new Bureaucrat(136);
	std::string target = "gardenerSuccess";
	ShrubberyCreationForm *scfSuccess = new ShrubberyCreationForm(target);
	scfSuccess->beSigned(*gardenerSuccess);
	scfSuccess->execute(*gardenerSuccess);

	std::cout << "\n---- Test2: ShrubberyCreationForm SIGN FAIL ---\n" << std::endl;

	Bureaucrat *gardenerFail = new Bureaucrat(146);
	std::string target2 = "gardenerFail";
	ShrubberyCreationForm *scfFailSign = new ShrubberyCreationForm(target2);
	try {
		scfFailSign->beSigned(*gardenerFail);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n---- Test3: ShrubberyCreationForm EXECUTE FAIL ---\n" << std::endl;

	Bureaucrat *gardenerFailExecute = new Bureaucrat(138);
	std::string target3 = "gardenerFail";
	ShrubberyCreationForm *scfFailExecute = new ShrubberyCreationForm(target3);
	try {
		scfFailExecute->beSigned(*gardenerFailExecute);
		scfFailExecute->execute(*gardenerFailExecute);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::cout << "\n---- Test4: RobotomyRequestForm RANDOM ---\n" << std::endl;

	srand(static_cast<unsigned int>(time(0)));
	Bureaucrat *testRobotomy[10];
	std::string target4 = "form1H76";
	RobotomyRequestForm *robotomies[10];
	int grade = 45;
	for (int i = 0; i < 10; i++)
	{
		testRobotomy[i] = new Bureaucrat(grade--);
		robotomies[i] = new RobotomyRequestForm(target4);
		robotomies[i]->beSigned(*testRobotomy[i]);
		robotomies[i]->execute(*testRobotomy[i]);
	}

	std::cout << "\n---- Test5: RobotomyRequestForm SIGN FAIL ---\n" << std::endl;

	Bureaucrat *testRobotomyFail = new Bureaucrat(73);
	std::string target5 = "form1H76Fail";
	RobotomyRequestForm *form1H76Fail = new RobotomyRequestForm(target5);
	try {
		form1H76Fail->beSigned(*testRobotomyFail);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n---- Test6: RobotomyRequestForm EXECUTE FAIL ---\n" << std::endl;

	testRobotomyFail->setGrade(46);
	try {
		form1H76Fail->beSigned(*testRobotomyFail);
		form1H76Fail->execute(*testRobotomyFail);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n---- Test7: PresidentialPardonForm SUCCESS---\n" << std::endl;

	Bureaucrat *last = new Bureaucrat(5);
	std::string target6 = "PPFSuccess";
	PresidentialPardonForm *PPF = new PresidentialPardonForm(target6);
	PPF->beSigned(*last);
	PPF->execute(*last);

	std::cout << "---- Test8: PresidentialPardonForm SIGN FAIL ---\n" << std::endl;

	last->setGrade(26);
	try {
		PPF->beSigned(*last);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n---- Test9: PresidentialPardonForm EXECUTE FAIL ---\n" << std::endl;

	last->setGrade(6);
	try {
		PPF->beSigned(*last);
		PPF->execute(*last);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
