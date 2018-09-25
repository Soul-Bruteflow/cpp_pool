//
// Created by bruteflow on 9/25/18.
//

#include <iostream>
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/* Default constructor */
Intern::Intern()
{}

/* Copy constructor */
Intern::Intern(Intern const &src)
{
	*this = src;
}

/* Default destructor */
Intern::~Intern()
{}

/* Assignment operator overload (Update) */
Intern &Intern::operator=(Intern const &rhs)
{
	/* this->data = rhs.data */
	static_cast <void> (rhs);
	return *this;
}

Form *Intern::makeForm(std::string form, std::string target)
{
	if (form == "shrubbery creation")
	{
		std::cout << "Intern creates [" << form << "]" << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else if (form == "robotomy request")
	{
		std::cout << "Intern creates [" << form << "]" << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (form == "presidential pardon")
	{
		std::cout << "Intern creates [" << form << "]" << std::endl;
		return new PresidentialPardonForm(target);
	}
	std::cout << "Error45: form [" << form << "] is unknown." << std::endl;
	return nullptr;
}
