//
// Created by bruteflow on 8/6/18.
//

#ifndef D01_EX03_ZOMBIEHORDE_HPP
#define D01_EX03_ZOMBIEHORDE_HPP

#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie *_zombieHorde;
	unsigned int _hordeSize;

public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce(void);

};


#endif //D01_EX03_ZOMBIEHORDE_HPP
