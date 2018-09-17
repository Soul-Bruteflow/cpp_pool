//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_SUPERMUTANT_HPP
#define D04_EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	/* Canonical Form */
	SuperMutant();
	SuperMutant(SuperMutant const &src);
	~SuperMutant();
	SuperMutant &operator=(SuperMutant const &rhs);
	virtual void takeDamage(int);

private:

};


#endif //D04_EX01_SUPERMUTANT_HPP
