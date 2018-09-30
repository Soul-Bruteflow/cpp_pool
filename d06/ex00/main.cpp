//
// Created by bruteflow on 9/30/18.
//

#include <iostream>
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

	std::cout << "char: ";
	try {
		char c = static_cast<char>(sc);
		std::cout << '\'' << c << '\'';

		if (isprint(c))
			std::cout << '\'' << c << '\'';
		else
			std::cout << "Non displayable";
	}
	catch (std::exception) {
		std::cout << "impossible";
	}
	std::cout << std::endl;
}