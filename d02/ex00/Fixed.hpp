//
// Created by bruteflow on 7/12/17.
//

#ifndef D02_E00_FIXED_HPP
#define D02_E00_FIXED_HPP

class Fixed
{
public:
	/* Canonical / Coplien form */
	Fixed();

	Fixed(Fixed const &src);

	~Fixed();

	Fixed &operator=(Fixed const &rhs);
	/* End */

	int	 getRawBits(void) const;
	void setRawBits(int const raw);

private:
	/* fixed point value */
	int _fpVal;

	/* the number of fractional bits */
	static const int _fbit = 8;
};


#endif //D02_E00_FIXED_HPP
