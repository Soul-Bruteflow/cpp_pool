//
// Created by bruteflow on 9/23/18.
//

#ifndef D05_EX01_FORM_HPP
#define D05_EX01_FORM_HPP


#include <string>

class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
public:
	/* Canonical Form */
	Form();
	Form(std::string name, std::string target, unsigned int signGrade, unsigned int executeGrade);
	Form(Form const &src);
	virtual ~Form();
	Form &operator=(Form const &rhs);

	virtual void execute(Bureaucrat const &executor) const = 0;

	std::string getName() const;
	std::string getTarget() const;
	bool getSignState() const;
	unsigned int getSignGrade() const;
	unsigned int getExecuteGrade() const;

	void setSignState(const bool state);
	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException();
		GradeTooLowException(const GradeTooLowException &src);
		virtual ~GradeTooLowException() throw();
		GradeTooLowException  &operator= (GradeTooLowException const &rhs);
		virtual const char    *what() const throw();
	};

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException();
		GradeTooHighException(const GradeTooHighException &src);
		virtual ~GradeTooHighException() throw();
		GradeTooHighException &operator= (GradeTooHighException const &rhs);
		virtual const char    *what() const throw();
	};

private:
	const std::string		_name;
	const std::string		_target;
	bool					_isSigned;
	const unsigned int		_signGrade;
	const unsigned int		_executeGrade;

};

std::ostream &	operator<<(std::ostream &stream, Form const &rhs);

#endif //D05_EX01_FORM_HPP
