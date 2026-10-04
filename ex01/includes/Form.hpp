#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class Form {
	private:
		const std::string _name = "Something form";
		bool _isSigned;
		const int _gradeRequiredToSign = 100;
		const int _gradeRequiredToExecute = 50;
		
	public:
		Form();
		~Form();
		std::string const & getName() const;
		int getGradeRequiredToSign() const;
		int getGradeRequiredToExecute() const;
		bool getIsSigned() const;
		void beSigned(Bureaucrat &b);

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

std::ostream& operator<<(std::ostream &out, const Form &b);

#endif