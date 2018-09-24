//
// Created by bruteflow on 9/23/18.
//

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

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

	//////////////////////////////////
	
	std::cout << "\n* Form Tests. *\n";

	std::cout << "\n* Illegal Forms. *\n";
	try
	{
		Form f1("form_1", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form f1("form_1", 151, 151);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n* Form sign test. *\n";
	hermes.setGrade(50);
	std::cout << hermes;

	Form f3("form_3", 50, 50);
	std::cout << f3;

	try
	{
		hermes.signForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n* Illegal form sign test. *\n";
	try
	{
		hermes.signForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	Form f4("form_4", 10, 10);
	std::cout << f4;
	try
	{
		hermes.signForm(f4);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}