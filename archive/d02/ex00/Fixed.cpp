//
// Created by bruteflow on 7/12/17.
//

#include <iostream>
#include "Fixed.hpp"

/* Default constructor */
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

/* Copy constructor */
Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

/* Default destructor */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

/* Assignment operator overload (Update) */
Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	/* this->data = rhs.data */
	_fpVal = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _fpVal;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_fpVal = raw;
}