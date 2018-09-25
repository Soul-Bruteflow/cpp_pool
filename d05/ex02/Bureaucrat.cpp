//
// Created by bruteflow on 9/23/18.
//

#include "Bureaucrat.hpp"
#include <iostream>

/* Default constructor */
Bureaucrat::Bureaucrat()
:_name("NONAME"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name)
:_name(name), _grade(150)
{}

Bureaucrat::Bureaucrat(unsigned int grade)
:_name("NONAME")
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade)
:_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

/* Copy constructor */
Bureaucrat::Bureaucrat(Bureaucrat const &src)
:_name(src._name)
{
	if (src._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (src._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = src._grade;
}

/* Default destructor */
Bureaucrat::~Bureaucrat()
{}

/* Assignment operator overload (Update) */
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	/* this->data = rhs.data */
	_name = rhs._name;
	_grade = rhs._grade;
	return *this;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::setName(const std::string name)
{
	_name = name;
}

void Bureaucrat::setGrade(const unsigned int grade)
{
	_grade = grade;
}

void Bureaucrat::incrementGrade(const unsigned int value)
{
	if (_grade - value < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade -= value;
}

void Bureaucrat::decrementGrade(const unsigned int value)
{
	if (_grade + value > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade += value;
}

void Bureaucrat::signForm(Form &form)
{
	if (form.getSignState())
	{
		std::cout << "Error43: Bureaucrat [" << _name
				  << "] can't sign the form [" << form.getName() << "]. It is already signed." << std::endl;
		return;
	}
	else
	{
		try
		{
			form.beSigned(*this);
			std::cout << "Bureaucrat [" << _name
			<< "] signs [" << form.getName() << "] form." << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Bureaucrat [" << _name << "] cannot sign [" << form.getName()
					  << "] form. Because " << e.what() << std::endl;
		}

	}
}

void Bureaucrat::executeForm(Form const &form)
{
	if (!form.getSignState())
	{
		std::cout << "Error44: Bureaucrat [" << _name
				  << "] can't execute the form [" << form.getName() << "]. It is not signed yet." << std::endl;
		return;
	}
	else
	{
		try
		{
			form.execute(*this);
			std::cout << "Bureaucrat [" << _name
					  << "] executes [" << form.getName() << "] form." << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << "Bureaucrat [" << _name << "] cannot execute [" << form.getName()
					  << "] form. Because " << e.what() << std::endl;
		}
	}
}

std::ostream &	operator<<(std::ostream &stream, Bureaucrat const & rhs)
{

	stream << "Bureaucrat name: [" << rhs.getName()
	<< "]\nBureaucrat grade: [" << rhs.getGrade() << "]" << std::endl;
	return stream;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(
const Bureaucrat::GradeTooLowException &src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(
const Bureaucrat::GradeTooLowException &rhs)
{
	(void) rhs;
	return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error42: Grade is too low!");
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(
const Bureaucrat::GradeTooHighException &src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(
const Bureaucrat::GradeTooHighException &rhs)
{
	(void) rhs;
	return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error42: Grade is too high!");
}
