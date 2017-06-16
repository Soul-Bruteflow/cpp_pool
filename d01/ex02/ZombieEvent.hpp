#ifndef _ZOMBIEEVENT_HPP
#define _ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent();
	~ZombieEvent();
	setZombieType(std::string type);
	Zombie* newZombie(std::string name);
private:
};

#endif
