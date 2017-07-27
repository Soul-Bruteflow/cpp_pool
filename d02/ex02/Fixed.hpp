//
// Created by bruteflow on 7/12/17.
//

#ifndef D02_E02_FIXED_HPP
#define D02_E02_FIXED_HPP

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
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt( void ) const;

	/* Comparison operators overload */
	bool operator==(const Fixed & rhs);
	bool operator!=(const Fixed & rhs);
	bool operator< (const Fixed & rhs);
	bool operator> (const Fixed & rhs);
	bool operator<=(const Fixed & rhs);
	bool operator>=(const Fixed & rhs);

	/* Binary arithmetic operators overload */
	Fixed operator+(const Fixed & rhs);
	Fixed & operator+=(const Fixed & rhs);
	Fixed operator-(const Fixed & rhs);
	Fixed & operator-=(const Fixed & rhs);
	Fixed operator*(const Fixed & rhs);
	Fixed & operator*=(const Fixed & rhs);
	Fixed operator/(const Fixed & rhs);
	Fixed & operator/=(const Fixed & rhs);

	/* Unary arithmetic operators overload */
	Fixed & operator++();
	Fixed operator++(int);
	/// Decrements the fixed point value from the smallest
	/// representable ε such as 1 + ε > 1.
	Fixed & operator--();
	Fixed operator--(int);

///* ------------------------------- Private ------------------------------ *///
private:
	/* _fpVal - fixed point value */
	int _fpVal;

	/* _fbits - the number of fractional bits */
	static const int _fbits = 8;
};

///* ------------------------ Non-member functions ------------------------ *///
/* Stream operators overload */
std::ostream & operator<<(std::ostream & o, const Fixed & rhs);

/* Min max */
Fixed & min(Fixed & lhs, Fixed & rhs);
const Fixed & min(const Fixed & lhs, const Fixed & rhs);
Fixed & max(Fixed & lhs, Fixed & rhs);
const Fixed & max(const Fixed & lhs, const Fixed & rhs);

#endif //D02_E00_FIXED_HPP
