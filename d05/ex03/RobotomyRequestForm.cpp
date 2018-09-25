//
// Created by bruteflow on 9/24/18.
//

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <fstream>

/* Default constructor */
RobotomyRequestForm::RobotomyRequestForm()
:Form("Robotomy Request", "NOTARGET", 72, 45)
{}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
:Form("Robotomy Request", target, 72, 45)
{}

/* Copy constructor */
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
:Form("Robotomy Request", src.getTarget(), 72, 45)
{}

/* Default destructor */
RobotomyRequestForm::~RobotomyRequestForm()
{}

/* Assignment operator overload (Update) */
RobotomyRequestForm &
RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	/* this->data = rhs.data */
	static_cast <void> (rhs);
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= 45 && this->getSignState())
	{
		std::cout << "* drilling noises *" << std::endl;
		if (rand() % 2 == 0)
		{
			std::cout
			<< "["
			<< this->getTarget()
			<< "] has been robotomized successfully."
			<< std::endl;
		}
		else
			std::cout << "Robotomization failure." << std::endl;
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