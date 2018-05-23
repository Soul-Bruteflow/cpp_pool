//
// Created by bruteflow on 7/12/17.
//

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

///* ---- Canonical form START ---- *///
/* Default constructor */
Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	return;
}
/* Copy constructor */
Fixed::Fixed(Fixed const &src){
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}
/* Default destructor */
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	return;
}
/* Assignment operator overload (Update) */
Fixed &Fixed::operator=(Fixed const &rhs){
	std::cout << "Assignation operator called" << std::endl;
	/* this->data = rhs.data */
	_fpVal = uint(rhs.getRawBits());
	return *this;
}
///* ---- Canonical form END ---- *///


///* ---- Additional constructors START ---- *///
/* From int to fixed point */
Fixed::Fixed(int const n)
		:_fpVal(uint(n * (1 << _fbits)))
{
	std::cout << "Int constructor called" << std::endl;
	return;
}
/* From float to fixed point */
Fixed::Fixed(float const n)
		: _fpVal(uint(roundf(n * (1 << _fbits))))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}
///* ---- Additional constructors END ---- *///



///* ---- Public methods START ---- *///

int Fixed::getRawBits() const{
	return _fpVal;
}

void Fixed::setRawBits(int const raw){
	_fpVal = (uint)raw;
}

float Fixed::toFloat(void) const{
	return _fpVal / (float)(1 << _fbits);
}

int Fixed::toInt(void) const{
	return _fpVal / (1 << _fbits);
}
///* ---- Public methods END ---- *///

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}