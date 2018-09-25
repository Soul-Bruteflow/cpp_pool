//
// Created by bruteflow on 9/23/18.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


void testSign(Bureaucrat &b, Form &f)
{
	try
	{
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void testExecute(Bureaucrat &b, Form &f)
{
	try
	{
		b.executeForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "\n* Form sign and execute tests. *\n";

    Bureaucrat b99("b99", 1);
    Bureaucrat b100("b100", 150);
    ShrubberyCreationForm s99("target1");
    RobotomyRequestForm r99("target2");
    PresidentialPardonForm p99("target3");

	std::cout << "\n* Bureaucrat b99. *\n";
	std::cout << b99;

	std::cout << "\n* Bureaucrat b100. *\n";
	std::cout << b99;

	std::cout << "\n* Form s99. *\n";
    std::cout << s99;

	std::cout << "\n* Form r99. *\n";
	std::cout << r99;

	std::cout << "\n* Form p99. *\n";
	std::cout << p99;

	std::cout << "\n* Form s99 sign and execute. *\n";
	testSign(b99, s99);
	testExecute(b99, s99);

	std::cout << "\n* Form r99 sign and execute. *\n";
	testSign(b99, r99);
	testExecute(b99, r99);
	testExecute(b99, r99);
	testExecute(b99, r99);
	testExecute(b99, r99);

	std::cout << "\n* Form p99 sign and execute. *\n";
	testSign(b99, p99);
	testExecute(b99, p99);

	std::cout << "\n* Illegal executes. *\n";
	r99.setSignState(false);
	p99.setSignState(false);
	testSign(b100, s99);
	s99.setSignState(false);
	testSign(b100, s99);
	testExecute(b100, s99);
	testSign(b100, r99);
	testExecute(b100, r99);
	testSign(b100, p99);
	testExecute(b100, p99);
}