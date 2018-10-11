//
// Created by bruteflow on 10/11/18.
//

#include <numeric>
#include "span.hpp"

/* Default constructor */
Span::Span()
{
	_data.reserve(0);
}

Span::Span(unsigned int n)
:_size(n)
{
	_data.reserve(n);
}

/* Copy constructor */
Span::Span(Span const &src)
:_data(src._data), _size(src._size)
{}

/* Default destructor */
Span::~Span()
{}

/* Assignment operator overload (Update) */
Span &Span::operator=(Span const &rhs)
{
	/* this->data = rhs.data */
	_data = rhs._data;
	_size = rhs._size;
	return *this;
}

void Span::addNumber(int n)
{
	if (_data.size() < _size)
		_data.push_back(n);
	else
		throw Span::NoSpaceException();
}

int Span::shortestSpan()
{
	if (_size <= 1)
		throw Span::ValueException();
	std::vector<int> 	cpy = _data;

	std::sort(cpy.begin(), cpy.end());
	std::adjacent_difference(cpy.begin(), cpy.end(), cpy.begin() - 1);
	cpy.pop_back();
	return (cpy[std::distance(cpy.begin(), std::min_element(cpy.begin(), cpy.end()))]);
}

int Span::longestSpan()
{
	if (_size <= 1)
		throw Span::ValueException();
	std::vector<int>::iterator	min = std::min_element(_data.begin(), _data.end());
	std::vector<int>::iterator	max = std::max_element(_data.begin(), _data.end());

	return (_data[std::distance(_data.begin(), max)] - _data[std::distance(_data.begin(), min)]);
}

Span::NoSpaceException::NoSpaceException()
{}

Span::NoSpaceException::NoSpaceException(const Span::NoSpaceException &src)
{
	*this = src;
}

Span::NoSpaceException::~NoSpaceException() throw()
{}

Span::NoSpaceException &
Span::NoSpaceException::operator=(const Span::NoSpaceException &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *Span::NoSpaceException::what() const  throw()
{
	return "Error42: Not enough space.\n";
}

Span::ValueException::ValueException()
{}

Span::ValueException::ValueException(const Span::ValueException &src)
{
	*this = src;
}

Span::ValueException::~ValueException() throw()
{}

Span::ValueException &
Span::ValueException::operator=(const Span::ValueException &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

const char *Span::ValueException::what() const throw()
{
	return "Error42: Two values needed.\n";
}
