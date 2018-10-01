//
// Created by bruteflow on 9/30/18.
//

#include <iostream>
#include <iomanip>
#include "ScalarConversion.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "Scalar Converter 5000 accepts only one argument.\n";
		return 0;
	}

	std::string tmp(av[1]);
	ScalarConversion sc(tmp);

	//Char
	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(sc);
		std::cout << '\'' << c << '\'' << std::endl;
	}
	catch (ScalarConversion::ImpossibleChar &e)
	{
		std::cout << e.what();
	}
	catch (ScalarConversion::NonDisplayableChar &e)
	{
		std::cout << e.what();
	}
	catch (const std::exception &e)
	{
		std::cout << "error";
	}

	// Int
	std::cout << "int: ";
	try
	{
		int c = static_cast<int>(sc);
		std::cout << c << std::endl;
	}
	catch (ScalarConversion::ImpossibleInt &e)
	{
		std::cout << e.what();
	}
	catch (const std::exception &e)
	{
		std::cout << "error";
	}

	//Float
	std::cout << "float: ";
	try
	{
		float c = static_cast<float>(sc);
		std::cout << std::fixed << std::setprecision(1) << c << 'f' << std::endl;
	}
	catch (ScalarConversion::ImpossibleFloat &e)
	{
		std::cout << e.what();
	}
	catch (const std::exception &e)
	{
		std::cout << "error";
	}

	//Double
	std::cout << "double: ";
	try
	{
		double c = static_cast<double>(sc);
		std::cout << c << std::endl;
	}
	catch (ScalarConversion::ImpossibleDouble &e)
	{
		std::cout << e.what();
	}
	catch (const std::exception &e)
	{
		std::cout << "error";
	}
}