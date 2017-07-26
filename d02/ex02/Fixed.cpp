//
// Created by bruteflow on 7/12/17.
//

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

///* --------------------------- Canonical form --------------------------- *///
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
	_fpVal = rhs.getRawBits();
	return *this;
}

///* ---------------------- Additional constructors ----------------------- *///
/* From int to fixed point */
Fixed::Fixed(int const n)
		:_fpVal(n * (1 << _fbits))
{
	std::cout << "Int constructor called" << std::endl;
	return;
}
/* From float to fixed point */
Fixed::Fixed(float const n)
		: _fpVal(int(roundf(n * (1 << _fbits))))
{
	std::cout << "Float constructor called" << std::endl;
	return;
}

///* --------------------------- Public methods --------------------------- *///
int Fixed::getRawBits() const{
	return _fpVal;
}
void Fixed::setRawBits(int const raw){
	_fpVal = raw;
}
float Fixed::toFloat(void) const{
	return _fpVal / (float)(1 << _fbits);
}
int Fixed::toInt(void) const{
	return _fpVal / (1 << _fbits);
}

///* ------------------ Public method operators overload ------------------ *///
/* Comparison operators overload */
bool Fixed::operator==(const Fixed & rhs){
	return _fpVal == rhs.getRawBits();
}
bool Fixed::operator!=(const Fixed & rhs){
	return !Fixed::operator==(rhs);
}
bool Fixed::operator< (const Fixed & rhs){
	return _fpVal < rhs.getRawBits();
}
bool Fixed::operator> (const Fixed & rhs){
	return  !Fixed::operator< (rhs);
}
bool Fixed::operator<=(const Fixed & rhs){
	return !Fixed::operator> (rhs);
}
bool Fixed::operator>=(const Fixed & rhs){
	return !Fixed::operator< (rhs);
}

/* Binary arithmetic operators overload */
Fixed Fixed::operator+(const Fixed & rhs){
	return *this += rhs;
}
Fixed & Fixed::operator+=(const Fixed & rhs){
	*this = Fixed(this->toFloat() + rhs.toFloat());
	return *this;
}
Fixed Fixed::operator-(const Fixed & rhs){
	return *this -= rhs;
}
Fixed & Fixed::operator-=(const Fixed & rhs){
	*this = Fixed(this->toFloat() - rhs.toFloat());
	return *this;
}

///* ------------------------ Non-member functions ------------------------ *///
/* Stream operator overloads */
std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}