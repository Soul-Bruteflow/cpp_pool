//
// Created by bruteflow on 9/23/18.
//

#ifndef D05_EX00_BUREAUCRAT_HPP
#define D05_EX00_BUREAUCRAT_HPP


#include <string>

class Form;
#include "Form.hpp"

class Bureaucrat
{
public:
	/* Canonical Form */
	Bureaucrat();
	Bureaucrat(std::string name);
	Bureaucrat(unsigned int grade);
	Bureaucrat(std::string name, unsigned int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string		getName() const;
	unsigned		getGrade() const;
	void			setName(std::string name);
	void			setGrade(unsigned int grade);
	void			incrementGrade(unsigned int value);
	void			decrementGrade(unsigned int value);

	void			signForm(Form &form);
	void			executeForm(Form const & form);

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
	std::string		_name;
	unsigned int	_grade;

};
std::ostream &	operator<<(std::ostream &stream, Bureaucrat const &rhs);

#endif //D05_EX00_BUREAUCRAT_HPP
