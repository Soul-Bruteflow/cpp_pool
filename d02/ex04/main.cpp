#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <curses.h>
#include "Fixed.hpp"

bool parseSum(std::string &toParse, std::string::iterator &i, int &result);
bool parseProduct(std::string &toParse, std::string::iterator &i, int &result);
bool parseFactor(std::string &toParse, std::string::iterator &i, int &result);

bool parseSum(std::string &toParse, std::string::iterator &i, int &result)
{
	int lhs;
	int rhs;

	// Assign left hand side value
	parseProduct(toParse, i, lhs);
	while (*i == '+')
	{
		//Skipp multiply sign
		++i;

		//Assign right hand side value
		parseProduct(toParse, i, rhs);

		// Assign and return value
		result = lhs + rhs;
		return true;
	}
	return false;
}

bool parseProduct(std::string &toParse, std::string::iterator &i, int &result)
{
	int lhs;
	int rhs;

	// Assign left hand side value
	parseFactor(toParse, i, lhs);
	while (*i == '*')
	{
		//Skipp multiply sign
		++i;

		//Assign right hand side value
		parseFactor(toParse, i, rhs);

		// Assign and return value
		result = lhs * rhs;
		return true;
	}
	return false;
}

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
			if (*i == '*' || *i == '+' || *i == '-' || *i == '/' || *i == ' ')
				return true;
			else
			{
				std::cerr << "Forbidden symbol found: " << *i << std::endl;
				std::cerr << "Allowed symbols: 0-9, *, /, -, +, and space." << std::endl;
				return false;
			}

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
	bool 					isParsed;
	int						result;

	if (argc == 2)
	{
		toParse = argv[1];
		iParse = toParse.begin();
		isParsed = parseSum(toParse, iParse, result);
		if (isParsed)
			std::cout << result << std::endl;
	}
	else
		std::cerr << "Usage: ./eval_expr \"expression\"" << std::endl;
	return 0;
}