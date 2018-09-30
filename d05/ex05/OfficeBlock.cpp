//
// Created by bruteflow on 9/25/18.
//

#include "OfficeBlock.hpp"

/* Default constructor */
OfficeBlock::OfficeBlock()
:_intern(nullptr), _sBureaucrat(nullptr), _eBureaucrat(nullptr)
{}

OfficeBlock::OfficeBlock(Intern &intern, Bureaucrat &sBureaucrat, Bureaucrat &eBureaucrat)
:_intern(&intern), _sBureaucrat(&sBureaucrat), _eBureaucrat(&eBureaucrat)
{}

/* Default destructor */
OfficeBlock::~OfficeBlock()
{}

void OfficeBlock::setIntern(Intern &intern)
{
	_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &sBureaucrat)
{
	_sBureaucrat = &sBureaucrat;
}

void OfficeBlock::setExecutor(Bureaucrat &eBureaucrat)
{
	_eBureaucrat = &eBureaucrat;
}

void OfficeBlock::doBureaucracy(std::string form, std::string target)
{
	Form *tmp = nullptr;

	if(!_intern)
		throw OfficeBlock::NoInternException();
	if(!_sBureaucrat)
		throw OfficeBlock::NoSignerException();
	if(!_eBureaucrat)
		throw OfficeBlock::NoExecuterException();

	tmp = _intern->makeForm(form, target);
	if (tmp == nullptr)
		throw OfficeBlock::IncorrectFromName();

	if (_sBureaucrat->getGrade() > tmp->getSignGrade())
	{
		delete tmp;
		throw Bureaucrat::GradeTooLowException();
	}

	_sBureaucrat->signForm(*tmp);

	if (_eBureaucrat->getGrade() > tmp->getExecuteGrade())
	{
		delete tmp;
		throw Bureaucrat::GradeTooLowException();
	}

	_eBureaucrat->executeForm(*tmp);
	if (tmp != nullptr)
		delete tmp;
}

Intern OfficeBlock::getIntern() const
{
	return *_intern;
}

Bureaucrat OfficeBlock::getSigner() const
{
	return *_sBureaucrat;
}

Bureaucrat OfficeBlock::getExecutor() const
{
	return *_eBureaucrat;
}

bool OfficeBlock::isOfficeBlockFilled() const
{
	if (_intern && _sBureaucrat && _eBureaucrat)
		return true;
	else
		return false;
}

OfficeBlock::NoInternException::NoInternException(){}

OfficeBlock::NoInternException::NoInternException(
const OfficeBlock::NoInternException &src)
{
	*this = src;
}

OfficeBlock::NoInternException::~NoInternException() throw() {}

OfficeBlock::NoInternException &OfficeBlock::NoInternException::operator=(
const OfficeBlock::NoInternException &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

const char *OfficeBlock::NoInternException::what() const throw()
{
	return ("Error101: There is no intern in the Office Building.");
}

OfficeBlock::NoSignerException::NoSignerException(){}

OfficeBlock::NoSignerException::NoSignerException(
const OfficeBlock::NoSignerException &src)
{
	*this = src;
}

OfficeBlock::NoSignerException::~NoSignerException() throw() {}

OfficeBlock::NoSignerException &OfficeBlock::NoSignerException::operator=(
const OfficeBlock::NoSignerException &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

const char *OfficeBlock::NoSignerException::what() const throw()
{
	return ("Error102: There is no sign bureaucrat in the Office Building.");
}

OfficeBlock::NoExecuterException::NoExecuterException(){}

OfficeBlock::NoExecuterException::NoExecuterException(
const OfficeBlock::NoExecuterException &src)
{
	*this = src;
}

OfficeBlock::NoExecuterException::~NoExecuterException() throw() {}

OfficeBlock::NoExecuterException &OfficeBlock::NoExecuterException::operator=(
const OfficeBlock::NoExecuterException &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

const char *OfficeBlock::NoExecuterException::what() const throw()
{
	return ("Error103: There is no execute bureaucrat in the Office Building.");
}

OfficeBlock::IncorrectFromName::IncorrectFromName(){}

OfficeBlock::IncorrectFromName::IncorrectFromName(
const OfficeBlock::IncorrectFromName &src)
{
	*this = src;
}

OfficeBlock::IncorrectFromName::~IncorrectFromName() throw() {}

OfficeBlock::IncorrectFromName &OfficeBlock::IncorrectFromName::operator=(
const OfficeBlock::IncorrectFromName &rhs)
{
	static_cast <void> (rhs);
	return *this;
}

const char *OfficeBlock::IncorrectFromName::what() const throw()
{
	return ("Error104: Incorrect from name!");
}
