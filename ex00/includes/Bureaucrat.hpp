#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	public:
		Bureaucrat();
		~Bureaucrat();
		std::string const & getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
	private:
		const std::string _name = "Nikolay";
		int _grade = 150;

	class GradeTooHighException : public std::exception
    {
		explicit GradeTooHighException(const std::string &msg);
    };

    class GradeTooLowException : public std::exception
    {
		explicit GradeTooLowException(const std::string &msg);
    };
};

#endif