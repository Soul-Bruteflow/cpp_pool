//
// Created by bruteflow on 7/12/17.
//

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

///* --------------------------- Canonical form --------------------------- *///
/* Default constructor */
Fixed::Fixed() :_fpVal(0){
	return;
}
/* Copy constructor */
Fixed::Fixed(Fixed const &src){
	*this = src;
	return;
}
/* Default destructor */
Fixed::~Fixed(){
	return;
}
/* Assignment operator overload (Update) */
Fixed &Fixed::operator=(Fixed const &rhs){
	_fpVal = rhs.getRawBits();
	return *this;
}

///* ---------------------- Additional constructors ----------------------- *///
/* From int to fixed point */
Fixed::Fixed(int const n) :_fpVal(n * (1 << _fbits)){
	return;
}
/* From float to fixed point */
Fixed::Fixed(float const n) : _fpVal(int(roundf(n * (1 << _fbits)))){
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
// Plus
Fixed Fixed::operator+(const Fixed & rhs){
	return *this += rhs;
}
Fixed &Fixed::operator+=(const Fixed & rhs){
	*this = Fixed(this->toFloat() + rhs.toFloat());
	return *this;
}
// Minus
Fixed Fixed::operator-(const Fixed & rhs){
	return *this -= rhs;
}
Fixed &Fixed::operator-=(const Fixed & rhs){
	*this = Fixed(this->toFloat() - rhs.toFloat());
	return *this;
}
// Multiply
Fixed Fixed::operator*(const Fixed & rhs){
	return *this *= rhs;
}
Fixed &Fixed::operator*=(const Fixed & rhs){
	*this = Fixed(this->toFloat() * rhs.toFloat());
	return *this;
}
// Divide
Fixed Fixed::operator/(const Fixed & rhs){
	return *this /= rhs;
}
Fixed &Fixed::operator/=(const Fixed & rhs){
	*this = Fixed(this->toFloat() / rhs.toFloat());
	return *this;
}

/* Unary arithmetic operators overload */
// Increment
Fixed &Fixed::operator++()
{
	++(this->_fpVal);
	return *this;
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}
// Decrement
Fixed &Fixed::operator--()
{
	--(this->_fpVal);
	return *this;
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

///* --------------------------- Static methods --------------------------- *///
/* Min max */
Fixed &Fixed::min(Fixed & lhs, Fixed & rhs){
	return (((lhs.toFloat() > rhs.toFloat()) ? rhs : lhs));
}
Fixed &Fixed::max(Fixed & lhs, Fixed & rhs){
	return (((lhs.toFloat() > rhs.toFloat()) ? lhs : rhs));
}
const Fixed &Fixed::min(const Fixed & lhs, const Fixed & rhs){
	return (((lhs.toFloat() > rhs.toFloat()) ? rhs : lhs));
}
const Fixed &Fixed::max(const Fixed & lhs, const Fixed & rhs){
	return (((lhs.toFloat() > rhs.toFloat()) ? lhs : rhs));
}

///* ------------------------ Non-member functions ------------------------ *///
/* Stream operator overloads */
std::ostream &operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}