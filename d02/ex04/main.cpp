//#include <string>
//#include <iostream>
//#include <fstream>
//#include <sstream>
//#include <curses.h>
//#include "Fixed.hpp"
//
//bool parseSum(std::string &toParse, std::string::iterator &i, int &result);
//bool parseProduct(std::string &toParse, std::string::iterator &i, int &result);
//bool parseFactor(std::string &toParse, std::string::iterator &i, int &result);
//
//bool parseSum(std::string &toParse, std::string::iterator &i, int &result)
//{
//	int lhs;
//	int rhs;
//
//	// Assign left hand side value
//	parseProduct(toParse, i, lhs);
//	while (*i == '+')
//	{
//		//Skipp multiply sign
//		++i;
//
//		//Assign right hand side value
//		parseProduct(toParse, i, rhs);
//
//		// Assign and return value
//		result = lhs + rhs;
//		return true;
//	}
//	return false;
//}
//
//bool parseProduct(std::string &toParse, std::string::iterator &i, int &result)
//{
//	int lhs;
//	int rhs;
//
//	// Assign left hand side value
//	parseFactor(toParse, i, lhs);
//	while (*i == '*')
//	{
//		//Skipp multiply sign
//		++i;
//
//		//Assign right hand side value
//		parseFactor(toParse, i, rhs);
//
//		// Assign and return value
//		result = lhs * rhs;
//		return true;
//	}
//	return false;
//}
//
//bool parseFactor(std::string &toParse, std::string::iterator &i, int &result)
//{
//
//	bool negative = false;
//
//	if (i == toParse.end())
//		return false;
//
//	if (*i == '-')
//	{
//		negative = true;
//		++i;
//		if (i == toParse.end())
//			return false;
//	}
//
//	result = 0;
//	for (; i != toParse.end(); ++i)
//	{
//		if (*i < '0' || *i > '9')
//		{
//			if (*i == '*' || *i == '+' || *i == '-' || *i == '/' || *i == ' ')
//				return true;
//			else
//			{
//				std::cerr << "Forbidden symbol found: " << *i << std::endl;
//				std::cerr << "Allowed symbols: 0-9, *, /, -, +, and space." << std::endl;
//				return false;
//			}
//
//		}
//		result *= 10;
//		result += *i - '0';
//	}
//
//	if (negative)
//	{
//		result = -result;
//	}
//
//	return true;
//}
//
//int main(int argc, char *argv[])
//{
//	std::string 			toParse;
//	std::string::iterator 	iParse;
//	bool 					isParsed;
//	int						result;
//
//	if (argc == 2)
//	{
//		toParse = argv[1];
//		iParse = toParse.begin();
//		isParsed = parseSum(toParse, iParse, result);
//		if (isParsed)
//			std::cout << result << std::endl;
//	}
//	else
//		std::cerr << "Usage: ./eval_expr \"expression\"" << std::endl;
//	return 0;
//}

#include <string>
#include <iostream>
#include <list>
#include <sstream>


std::string removeSpaces(const std::string &str)
{
	std::string ret_s (str);

	ret_s.erase(std::remove(ret_s.begin(), ret_s.end(), ' '), ret_s.end());
	return ret_s;
}

bool isValidSymbol(std::string str)
{
	std::string::iterator i (str.begin());
	std::string::iterator j;

	for (i = str.begin(); i < str.end(); i++)
	{
		if (!(*i == '*' || *i == '+' || *i == '-' || *i == '/'
			|| *i == '(' || *i == ')' || (*i <= '9' && *i >= '0')
				|| *i == '.'))
			return false;
		if (*i == '-')
		{
			if (i != str.end() && i + 1 == str.end())
				return false;

			j = i;
			j++;

//			bool tmp = std::isdigit(*j);
//			std::cout << tmp;

			if (( i == str.begin()
				|| std::isdigit(*j)
				|| *i + 1 == '('))
				continue;
			else
				return false;
		}
	}
	return true;
}

//std::string
//removeSpaces(const std::string& str)
//{
//	std::string s(str);
//	int j = 0;
//	int N = s.size();
//
//	for (int i = 0; i < N; ++i) {
//		if (s[i] != ' ') {
//			s[j] = s[i];
//			j++;
//		}
//	}
//	s.resize(j);
//	return s;
//}

//
// output is a list of strings which map to tokens
//
void tokenize(const std::string& str, std::list<std::string>& tokens)
{
	std::string num;
	int N = str.size();

	for (int i = 0; i < N; ++i)
	{
		char c = str[i];
		if (isdigit(c))
		{
			num += c;
		} else
		{
			if (!num.empty())
			{
				tokens.push_back(num);
				num.clear();
			}
			std::string token;
			token += c;
			tokens.push_back(token);
		}
	}

	if (!num.empty()) {
		tokens.push_back(num);
		num.clear();
	}
}

// Rules
// exp    : term
//        | exp + term
//        | exp - term
//        ;
// term   : factor
//        | factor * term
//        | factor / term
//        ;
// factor : number
//        | ( exp )
//        ;

class Calculator {
public:
	Calculator(const std::string& expression);

	void next();
	double exp();
	double term();
	double factor();
	bool toInt(std::string toParse, double &result, bool isNegative);
	bool toFloat(std::string toParse, double &dot_result);

private:
	std::list<std::string> mTokens;
	std::string mCurrent;
};

Calculator::Calculator(const std::string& expression)
{
	std::string s = removeSpaces(expression);
	bool tmp = isValidSymbol(s);
	if (!tmp)
	{
		std::cerr << "Forbidden symbol found." << std::endl;
		std::cerr << "Allowed symbols: 0-9, ., *, /, -, +, (, ) and space." << std::endl;
		exit (1);
	}
	// std::cout << s << std::endl;

	tokenize(s, mTokens);

//	std::list<std::string>::iterator i = mTokens.begin();
//	while (i != mTokens.end())
//	{
//		std::cout << *i << std::endl;
//		i++;
//	}

	// std::list<std::string>::iterator it, itEnd;
	// for (it = mTokens.begin(); it != mTokens.end(); ++it) {
	//     std::cout << *it << " ";
	// }
	// std::cout << std::endl;

	mCurrent = mTokens.front();
}

void Calculator::next()
{
	mTokens.pop_front();

	if (!mTokens.empty()) {
		mCurrent = mTokens.front();
	} else {
		mCurrent = std::string();
	}
}

double Calculator::exp()
{
	double result = term();
	while (mCurrent == "+" || mCurrent == "-") {
		if (mCurrent == "+") {
			next();
			result += term();
		}
		if (mCurrent == "-") {
			next();
			result -= term();
		}
	}
	return result;
}

double Calculator::term()
{
	double result = factor();
	while (mCurrent == "*" || mCurrent == "/") {
		if (mCurrent == "*") {
			next();
			result *= factor();
		}
		if (mCurrent == "/") {
			next();
			//
			// Could simply be:
			// result /= term();
			//
			// But we need to deal with divide by 0
			//
			double denominator = factor();
			if (denominator != 0) {
				result /= denominator;
			} else {
				result = 0;
			}
		}
	}
	return result;
}

double Calculator::factor()
{
	double result;

	if (mCurrent == "(")
	{
		next();
		result = exp();
		next();
	} else
	{
		if (mCurrent == "-")
		{
			next();
			toInt(mCurrent, result, true);
			next();
		} else
		{
			toInt(mCurrent, result, false);
			next();
		}
	}
	if (mCurrent == ".")
	{
		double dot_result = 0;
		next(); // consume "."
		toFloat(mCurrent, dot_result);
		result += dot_result;
		next();
	}

	return result;
}

bool Calculator::toFloat(std::string toParse, double &dot_result)
{
	std::string::iterator i (toParse.begin());
	double weight = 1;

	if (i == toParse.end())
		return false;

	dot_result = 0;
	for (; i != toParse.end(); ++i)
	{
		if (*i < '0' || *i > '9')
		{
			if (*i == '*' || *i == '+' || *i == '-' || *i == '/')
				return true;
			else
			{
				std::cerr << "Forbidden symbol found: " << *i << std::endl;
				std::cerr << "Allowed symbols: 0-9, *, /, -, +, and space." << std::endl;
				return false;
			}

		}
		weight /= 10;
		dot_result += (*i - '0') * weight;
	}
	return true;
}

bool Calculator::toInt(std::string toParse, double &result, bool isNegative)
{
	std::string::iterator i (toParse.begin());
	bool negative = isNegative;

	if (i == toParse.end())
		return false;

//	if (*i == '-')
//	{
//		negative = true;
//		++i;
//		if (i == toParse.end())
//			return false;
//	}

	result = 0;
	for (; i != toParse.end(); ++i)
	{
		if (*i < '0' || *i > '9')
		{
			if (*i == '*' || *i == '+' || *i == '-' || *i == '/')
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
		result = -result;

	return true;
}

double calculate(std::string s)
{
	Calculator calculator(s);
	return calculator.exp();
}

int main()
{
	std::string expression;

	// "3+2*2" = 7
	// " 3/2 " = 1
	// " 3+5 / 2 " = 5

	// my code evalute this to 2, while it's expected to be 7
	expression = "-1*2+4*5";
//	calculate(expression);
	std::cout << expression << " -> "
			  << calculate(expression) << std::endl;


//	std::string str1 = "Text with some   spaces";
//	str1.erase(std::remove(str1.begin(), str1.end(), ' '), str1.end());
//	std::cout << str1 << '\n';

//	std::string str2 = "Text\n with\tsome \t  whitespaces\n\n";
//	str2.erase(std::remove_if(str2.begin(),
//			str2.end(),
//			[](char x){return std::isspace(x);}),
//			str2.end());
//	std::cout << str2 << '\n';





//	expression = "3+2*2";
//	std::cout << expression << " -> "
//			  << calculate(expression) << std::endl;
//
//	expression = "3/2";
//	std::cout << expression << " -> "
//			  << calculate(expression) << std::endl;
//
//	expression = "3+5 / 2";
//	std::cout << expression << " -> "
//			  << calculate(expression) << std::endl;
//
//	expression = "(1 + 22) * 3";
//	std::cout << expression << " -> "
//			  << calculate(expression) << std::endl;
//
//	expression = "1 + 1";
//	std::cout << expression << " -> "
//			  << calculate(expression) << std::endl;
//
//	expression = "100000000/1/2/3/4/5/6/7/8/9/10";
//	std::cout << expression << " -> "
//			  << calculate(expression) << std::endl;

	return 0;
}