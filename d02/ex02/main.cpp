#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include "Fixed.hpp"

int main(void)
{
	Fixed	a;
	Fixed 	b( 2 );
	Fixed  	c( 42.42f );
	Fixed	d( b );
	Fixed  	e( 15 );
	Fixed   f(Fixed(5.05f));
	Fixed	g;
	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "e is " << e.toInt() << " as integer" << std::endl;

	std::cout << "a < c = " << (a < c) << std::endl;
	std::cout << "a > c = " << (a > c) << std::endl;
	std::cout << "a <= c = " << (a <= c) << std::endl;
	std::cout << "a >= c = " << (a >= c) << std::endl;
	std::cout << "a == c = " << (a == c) << std::endl;
	std::cout << "a != c = " << (a != c) << std::endl;


	std::cout << "b - e = " << (b - e) << std::endl;
	e = 15;
	b = 2;
	std::cout << "f * b " << (f * b) << std::endl;
	e = 15;
	b = 2;
	std::cout << "e / b " << (e / b) << std::endl;

	std::cout << g << std::endl;
	std::cout << ++g << std::endl;
	std::cout << g << std::endl;
	std::cout << g++ << std::endl;
	std::cout << g << std::endl;

	std::cout << g << std::endl;
	std::cout << --g << std::endl;
	std::cout << g << std::endl;
	std::cout << g-- << std::endl;
	std::cout << g << std::endl;

	e = 15;
	b = 2;
	std::cout << Fixed::min(e, b) << std::endl;
	return 0;
}