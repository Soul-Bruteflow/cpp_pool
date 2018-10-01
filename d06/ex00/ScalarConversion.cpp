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
	int ret = 0;
	errno = 0;
	if (_input.length() == 1 && std::isprint(_input[0]) && !std::isdigit(_input[0]))
		ret = _input[0];
	else
		ret = std::atoi(_input.c_str());
	if (errno)
		throw ScalarConversion::ImpossibleChar();
	else if (ret < 0 || ret >= 127)
		throw ScalarConversion::ImpossibleChar();
	else if (ret < 32)
		throw (ScalarConversion::NonDisplayableChar());

	return static_cast<char>(ret);
}

ScalarConversion::operator int() const
{
	int ret = 0;
	errno = 0;
	if (_input.length() == 1 && std::isprint(_input[0]) && !std::isdigit(_input[0]))
		ret = _input[0];
	else
		ret = std::atoi(_input.c_str());
	if (errno)
		throw ScalarConversion::ImpossibleInt();

	return ret;
}

ScalarConversion::operator float() const
{
	float ret = 0;
	errno = 0;
	if (_input.length() == 1 && std::isprint(_input[0]) && !std::isdigit(_input[0]))
		ret = _input[0];
	else
		ret = static_cast<float>(std::atof(_input.c_str()));
	if (errno)
		throw ScalarConversion::ImpossibleFloat();

	return ret;
}

ScalarConversion::operator double() const
{
	double ret = 0;
	errno = 0;
	if (_input.length() == 1 && std::isprint(_input[0]) && !std::isdigit(_input[0]))
		ret = _input[0];
	else
		ret = std::atof(_input.c_str());
	if (errno)
		throw ScalarConversion::ImpossibleDouble();

	return ret;
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
	return "impossible\n";
}

ScalarConversion::NonDisplayableChar::NonDisplayableChar()
{}

ScalarConversion::NonDisplayableChar::NonDisplayableChar(
const ScalarConversion::NonDisplayableChar &src)
{
	*this = src;
}

ScalarConversion::NonDisplayableChar::~NonDisplayableChar() throw()
{}

ScalarConversion::NonDisplayableChar &
ScalarConversion::NonDisplayableChar::operator=(
const ScalarConversion::NonDisplayableChar &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *ScalarConversion::NonDisplayableChar::what() const throw()
{
	return "Non displayable\n";
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
	return "impossible\n";
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
	return "impossible\n";
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
	return "impossible\n";
}
