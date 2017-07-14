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

	/* Public method operator overloads */
	bool operator==(const Fixed & rhs);
	bool operator!=(const Fixed & rhs);
	bool operator< (const Fixed & rhs);
	bool operator> (const Fixed & rhs);
	bool operator<=(const Fixed & rhs);
	bool operator>=(const Fixed & rhs);

///* ------------------------------- Private ------------------------------ *///
	/* _fpVal - fixed point value */
	/* _fbits - the number of fractional bits */
private:
	int _fpVal;
	static const int _fbits = 8;
};

std::ostream & operator<<(std::ostream & o, const Fixed & rhs);

#endif //D02_E00_FIXED_HPP
