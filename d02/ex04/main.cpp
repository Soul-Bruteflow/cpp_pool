#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <curses.h>
#include "Fixed.hpp"

int parseSum();
int parseProduct();
bool parseFactor(std::string &toParse, std::string::iterator &i, int &result);

bool parseFactor(std::string &toParse, std::string::iterator &i, int &result) {

	bool negative = false;

	if (i == toParse.end())
		return false;

	if (*i == '-')
	{
		negative = true;
		++i;
		if (i == toParse.end())
			return false;
	}

	result = 0;
	for (; i != toParse.end(); ++i)
	{
		if (*i < '0' || *i > '9')
		{
			i++;
			return true;
		}
		result *= 10;
		result += *i - '0';
	}

	if (negative)
	{
		result = -result;
	}

	return true;
}

int main(int argc, char *argv[])
{
	std::string 			toParse;
	std::string::iterator 	iParse;
//	bool 					check;
	int						result;

	if (argc == 2)
	{
		toParse = argv[1];
		iParse = toParse.begin();

		parseFactor(toParse, iParse, result);
		std::cout << result << std::endl;
	}
	else
		std::cerr << "Usage: ./eval_expr \"expression\"" << std::endl;
	return 0;
}