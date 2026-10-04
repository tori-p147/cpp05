#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
	private:
		std::string _name;
		bool _isSigned;
		int _gradeRequiredToSign;
		int _gradeRequiredToExecute;
		
	public:
		AForm();
		virtual ~AForm();
		std::string const & getName() const;
		int getGradeRequiredToSign() const;
		int getGradeRequiredToExecute() const;
		bool getIsSigned() const;
		virtual void beSigned(Bureaucrat &b) = 0;

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

#endif