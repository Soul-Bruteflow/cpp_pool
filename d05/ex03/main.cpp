//
// Created by bruteflow on 9/23/18.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	igor;
	Form	*f1;
	Form	*f2;
	Form	*f3;
	Form	*f4;

	std::cout << "\nFrom 1\n";
	f1 = igor.makeForm("shrubbery creation", "Marvin");
	std::cout << *f1;

	std::cout << "\nFrom 2\n";
	f2 = igor.makeForm("robotomy request", "Bender");
	std::cout << *f2;

	std::cout << "\nFrom 3\n";
	f3 = igor.makeForm("presidential pardon", "Zafod Beeblebrox");
	std::cout << *f3;

	std::cout << "\nFrom 4\n";
	f4 = igor.makeForm("hitchhiking request", "Douglas Adams");

	delete f1;
	delete f2;
	delete f3;
}