//
// Created by bruteflow on 7/12/17.
//

#ifndef D02_E01_FIXED_HPP
#define D02_E01_FIXED_HPP

class Fixed
{
	/* Canonical / Coplien form */
public:
	Fixed();
	Fixed(Fixed const &src);
	~Fixed();
	Fixed &operator=(Fixed const &rhs);

	/* Additional constructors */
public:
	Fixed(int const n);
	Fixed(float const n);

	/* Public Methods */
public:
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt( void ) const;

	/* _fpVal - fixed point value */
	/* _fbits - the number of fractional bits */
private:
	uint _fpVal;
	static const int _fbits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif //D02_E00_FIXED_HPP
