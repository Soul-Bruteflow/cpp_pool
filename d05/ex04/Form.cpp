//
// Created by bruteflow on 9/23/18.
//

#include "Form.hpp"
#include <iostream>

/* Default constructor */
Form::Form()
:_name("NONAME"), _target("NOTARGET"), _isSigned(false), _signGrade(1), _executeGrade(1)
{}

Form::Form(std::string name, std::string target, unsigned int signGrade, unsigned int executeGrade)
:_name(name), _target(target), _signGrade(signGrade), _executeGrade(executeGrade)
{
	if (signGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	else if (signGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
	else
		_isSigned = false;
}

/* Copy constructor */
Form::Form(Form const &src)
:_name(src._name), _target(src._target), _isSigned(src._isSigned), _signGrade(src._signGrade), _executeGrade(src._executeGrade)
{}

/* Default destructor */
Form::~Form()
{}

/* Assignment operator overload (Update) */
Form &Form::operator=(Form const &rhs)
{
	/* this->data = rhs.data */
	_isSigned = rhs._isSigned;
	return *this;
}

std::ostream &	operator<<(std::ostream &stream, Form const & rhs) {

	stream
	<< "Form name: [" << rhs.getName()
	<< "]\nForm target: [" << rhs.getTarget()
	<< "]\nForm state: [" << rhs.getSignState()
	<< "]\nForm sign grade: [" << rhs.getSignGrade()
	<< "]\nForm execute grade: ["  << rhs.getExecuteGrade()
	<< "]" << std::endl;
	return stream;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSignState() const
{
	return _isSigned;
}

unsigned int Form::getSignGrade() const
{
	return _signGrade;
}

unsigned int Form::getExecuteGrade() const
{
	return _executeGrade;
}

void Form::setSignState(const bool state)
{
	_isSigned = state;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw Form::GradeTooLowException();
	else
		this->setSignState(true);
}

std::string Form::getTarget() const
{
	return _target;
}

Form::GradeTooLowException::GradeTooLowException()
{}

Form::GradeTooLowException::GradeTooLowException(
const Form::GradeTooLowException &src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(
const Form::GradeTooLowException &rhs)
{
	(void) rhs;
	return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Error42F: Grade is too low!");
}

Form::GradeTooHighException::GradeTooHighException()
{}

Form::GradeTooHighException::GradeTooHighException(
const Form::GradeTooHighException &src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(
const Form::GradeTooHighException &rhs)
{
	(void) rhs;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Error42F: Grade is too high!");
}
