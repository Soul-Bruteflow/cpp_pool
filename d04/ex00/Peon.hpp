//
// Created by bruteflow on 9/10/18.
//

#ifndef D04_EX00_PEON_HPP
#define D04_EX00_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
	/* Canonical Form */
	Peon(std::string name);
	Peon(Peon const &src);
	~Peon();
	Peon &operator=(Peon const &rhs);

	virtual void getPolymorphed() const;
};

//std::ostream & operator<<(std::ostream & o, Peon const & rhs);

#endif //D04_EX00_PEON_HPP
