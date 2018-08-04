//
// Created by bruteflow on 8/3/18.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string _zombieType;

public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string zombieType);
	Zombie *newZombie(std::string zombieName);
	Zombie *randomChump();

};

#endif //EX02_ZOMBIEEVENT_HPP
