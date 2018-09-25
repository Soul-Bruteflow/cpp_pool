//
// Created by bruteflow on 9/24/18.
//

#include "PresidentialPardonForm.hpp"
#include <iostream>

/* Default constructor */
PresidentialPardonForm::PresidentialPardonForm()
:Form("Presidential Pardon", "NOTARGET", 25, 5)
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
:Form("Presidential Pardon", target, 25, 5)
{}

/* Copy constructor */
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
:Form("Presidential Pardon", src.getTarget(), 25, 5)
{}

/* Default destructor */
PresidentialPardonForm::~PresidentialPardonForm()
{}

/* Assignment operator overload (Update) */
PresidentialPardonForm &
PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	/* this->data = rhs.data */
	static_cast <void> (rhs);
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= 5 && this->getSignState())
	{
		std::cout
		<< "["
		<< this->getTarget()
		<< "] has been pardoned by Zafod Beeblebrox."
		<< std::endl;
	}
	else if (!this->getSignState())
	{
		std::cout << "Error43S: Bureaucrat [" << executor.getName()
				  << "] can't execute the form [" << this->getName() << "]. It is not signed yet." << std::endl;
		return;
	}
	else
		throw Form::GradeTooLowException();
}