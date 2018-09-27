//
// Created by bruteflow on 9/24/18.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

/* Default constructor */
ShrubberyCreationForm::ShrubberyCreationForm()
:Form("Shrubbery Creation", "NOTARGET", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:Form("Shrubbery Creation", target, 145, 137)
{}

/* Copy constructor */
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
:Form("Shrubbery Creation", src.getTarget(), 145, 137)
{}

/* Default destructor */
ShrubberyCreationForm::~ShrubberyCreationForm()
{}

/* Assignment operator overload (Update) */
ShrubberyCreationForm &
ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	/* this->data = rhs.data */
	static_cast <void> (rhs);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		fileName = this->getTarget() + "_shrubbery";
	std::ofstream	stream(fileName);

	if (executor.getGrade() <= 137 && this->getSignState())
	{
		stream
		<<
		"                ,@@@,                  \n"
		"              ,@@@@@@@,                \n"
		"     ,,,.    ,@@@@@@/@@,  .o88888o.    \n"
		"  ,&%%&%&&%,@@@@@@/@@@@@@,8888*88/8o   \n"
		" ,%&@%&&%&&%@@@#@@@/@@@@@@8888888876   \n"
		" %&&%&%&/%&&%@@@@@/ /@@@@8888888888'   \n"
		" %&&%@ %&%%&&@@@ V /@@' `88*8 `/88'    \n"
		" `&%@ ` @%&'    |.|        8|'|8'      \n"
		"     |o|        | |         | |        \n"
		"     |.|        | |         | |        \n"
		"  (({   }))_|__{   }_//__(({   }_))__/_\n";
		stream.close();
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
