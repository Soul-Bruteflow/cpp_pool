//
// Created by bruteflow on 9/18/18.
//

#ifndef D04_EX02_ISQUAD_HPP
#define D04_EX02_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
public:
	/* Canonical Form */
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;

private:

};


#endif //D04_EX02_ISQUAD_HPP
