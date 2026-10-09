#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
	
	private:
		const std::string _name = "Nikolay";
		int _grade;
	public:
		Bureaucrat(int grade);
		~Bureaucrat(); 
		std::string const & getName() const;
		int getGrade() const;
		void setGrade(int grade);
		void incrementGrade();
		void decrementGrade();

	class GradeTooHighException : public std::exception
    {
		private:
			std::string _msg;
		public:
			GradeTooHighException(const std::string &msg);
			~GradeTooHighException() throw();
			const char* what () const throw();
    };

    class GradeTooLowException : public std::exception
    {
		private:
			std::string _msg;
		public:
			GradeTooLowException(const std::string &msg);
			~GradeTooLowException() throw();
			const char* what () const throw();
    };
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b);

#endif