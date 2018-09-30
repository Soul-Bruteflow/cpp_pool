//
// Created by bruteflow on 9/30/18.
//

#include <iostream>
#include "ScalarConversion.hpp"

/* Default constructor */
ScalarConversion::ScalarConversion()
:_input("")
{}

ScalarConversion::ScalarConversion(std::string &input)
:_input(input)
{}

/* Copy constructor */
ScalarConversion::ScalarConversion(ScalarConversion const &src)
:_input(src._input)
{}

/* Default destructor */
ScalarConversion::~ScalarConversion()
{}

/* Assignment operator overload (Update) */
ScalarConversion &ScalarConversion::operator=(ScalarConversion const &rhs)
{
	/* this->data = rhs.data */
	_input = rhs._input;
	return *this;
}

ScalarConversion::operator char() const
{
	char	n = static_cast<char>(std::atoi(_input.c_str()));
	if (errno)
		throw (ImpossibleChar());
	return (n);
}

ScalarConversion::operator int() const
{
	int ret = 0;
	try
	{
		ret = std::stoi(_input);
	}
	catch (const std::exception &e)
	{
		throw (ImpossibleInt());
	}
	return (ret);
}

ScalarConversion::operator float() const
{
	float ret = 0;
	try
	{
		ret = std::stof(_input);
	}
	catch (const std::exception &e)
	{
		throw (ImpossibleFloat());
	}
	return (ret);
}

ScalarConversion::operator double() const
{
	double ret = 0;
	try
	{
		ret = std::stod(_input);
	}
	catch (const std::exception &e)
	{
		throw (ImpossibleDouble());
	}
	return (ret);
}

ScalarConversion::ImpossibleChar::ImpossibleChar()
{}

ScalarConversion::ImpossibleChar::ImpossibleChar(
const ScalarConversion::ImpossibleChar &src)
{
	*this = src;
}

ScalarConversion::ImpossibleChar::~ImpossibleChar() throw()
{}

ScalarConversion::ImpossibleChar &
ScalarConversion::ImpossibleChar::operator=(
const ScalarConversion::ImpossibleChar &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *ScalarConversion::ImpossibleChar::what() const throw()
{
	return "impossible char\n";
}

ScalarConversion::ImpossibleInt::ImpossibleInt()
{}

ScalarConversion::ImpossibleInt::ImpossibleInt(
const ScalarConversion::ImpossibleInt &src)
{
	*this = src;
}

ScalarConversion::ImpossibleInt::~ImpossibleInt() throw()
{}

ScalarConversion::ImpossibleInt &ScalarConversion::ImpossibleInt::operator=(
const ScalarConversion::ImpossibleInt &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *ScalarConversion::ImpossibleInt::what() const throw()
{
	return "impossible integer\n";
}

ScalarConversion::ImpossibleFloat::ImpossibleFloat()
{}

ScalarConversion::ImpossibleFloat::ImpossibleFloat(
const ScalarConversion::ImpossibleFloat &src)
{
	*this = src;
}

ScalarConversion::ImpossibleFloat::~ImpossibleFloat() throw()
{}

ScalarConversion::ImpossibleFloat &ScalarConversion::ImpossibleFloat::operator=(
const ScalarConversion::ImpossibleFloat &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *ScalarConversion::ImpossibleFloat::what() const throw()
{
	return "impossible float\n";
}

ScalarConversion::ImpossibleDouble::ImpossibleDouble()
{}

ScalarConversion::ImpossibleDouble::ImpossibleDouble(
const ScalarConversion::ImpossibleDouble &src)
{
	*this = src;
}

ScalarConversion::ImpossibleDouble::~ImpossibleDouble() throw()
{}

ScalarConversion::ImpossibleDouble &
ScalarConversion::ImpossibleDouble::operator=(
const ScalarConversion::ImpossibleDouble &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *ScalarConversion::ImpossibleDouble::what() const throw()
{
	return "impossible double\n";
}
