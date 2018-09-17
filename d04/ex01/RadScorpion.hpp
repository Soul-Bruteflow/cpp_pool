//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_RADSCORPION_HPP
#define D04_EX01_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	/* Canonical Form */
	RadScorpion();
	RadScorpion(RadScorpion const &src);
	~RadScorpion();
	RadScorpion &operator=(RadScorpion const &rhs);

};


#endif //D04_EX01_RADSCORPION_HPP
