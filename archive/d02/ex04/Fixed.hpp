//
// Created by bruteflow on 7/12/17.
//

#ifndef D02_E04_FIXED_HPP
#define D02_E04_FIXED_HPP

class Fixed
{
///* -------------------------------- Public ------------------------------ *///
	/* Canonical / Coplien form */
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &rhs);

	/* Additional constructors */
	Fixed(int const n);
	Fixed(float const n);

	/* Public methods */
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	/* Comparison operators overload */
	bool 				operator==(const Fixed & rhs);
	bool 				operator!=(const Fixed & rhs);
	bool 				operator< (const Fixed & rhs);
	bool 				operator> (const Fixed & rhs);
	bool 				operator<=(const Fixed & rhs);
	bool 				operator>=(const Fixed & rhs);

	/* Binary arithmetic operators overload */
	Fixed 				operator+(const Fixed & rhs);
	Fixed 				operator-(const Fixed & rhs);
	Fixed 				operator*(const Fixed & rhs);
	Fixed 				operator/(const Fixed & rhs);
	Fixed 				&operator+=(const Fixed & rhs);
	Fixed 				&operator-=(const Fixed & rhs);
	Fixed 				&operator*=(const Fixed & rhs);
	Fixed 				&operator/=(const Fixed & rhs);

	/* Unary arithmetic operators overload */
	Fixed 				&operator++();
	Fixed 				&operator--();
	Fixed 				operator++(int);
	Fixed 				operator--(int);

	/* Min max */
	static Fixed		&min(Fixed & lhs, Fixed & rhs);
	static Fixed 		&max(Fixed & lhs, Fixed & rhs);
	static const Fixed 	&min(const Fixed & lhs, const Fixed & rhs);
	static const Fixed 	&max(const Fixed & lhs, const Fixed & rhs);

///* ------------------------------- Private ------------------------------ *///
private:
	/* _fpVal - fixed point value */
	int 				_fpVal;

	/* _fbits - the number of fractional bits */
	static const int 	_fbits = 8;
};

///* ------------------------ Non-member functions ------------------------ *///
/* Stream operators overload */
std::ostream & operator<<(std::ostream & o, const Fixed & rhs);


#endif //D02_E04_FIXED_HPP
