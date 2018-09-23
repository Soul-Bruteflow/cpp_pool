//
// Created by bruteflow on 9/23/18.
//

#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat hermes("Hermes Conrad");
	unsigned int i;

	std::cout << "\n* Grade increment test. *\n";

	try
	{
		for (i = 0; i <= 151; i++)
		{
			std::cout << hermes;
			hermes.incrementGrade(15);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n* Grade decrement test. *\n";

	try
	{
		for (i = 0; i <= 151; i++)
		{
			std::cout << hermes;
			hermes.decrementGrade(15);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n* Tests. *\n";

	Bureaucrat b1;
	std::cout << b1;

	Bureaucrat b2(100);
	std::cout << b2;

	Bureaucrat b3("Barbados Slim", 1);
	std::cout << b3;

	Bureaucrat b4(b3);
	std::cout << b4;

	b4.setName("Barbados Slim 2");
	b4.setGrade(2);
	Bureaucrat b5 = b4;
	std::cout << b5;
}