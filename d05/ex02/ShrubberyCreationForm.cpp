//
// Created by bruteflow on 9/24/18.
//

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

/* Default constructor */
ShrubberyCreationForm::ShrubberyCreationForm()
:Form("NONAME", 145, 137)
{}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
:Form(target, 145, 137)
{}

/* Copy constructor */
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
:Form(src.getName(), 145, 137)
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
	std::string		fileName = this->getName() + "_shrubbery";
	std::ofstream	stream(fileName);

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
