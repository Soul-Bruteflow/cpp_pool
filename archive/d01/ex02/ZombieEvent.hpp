#ifndef _ZOMBIEEVENT_HPP
#define _ZOMBIEEVENT_HPP

#include "Zombie.hpp"

class ZombieEvent {
public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string zombieType);
	Zombie *newZombie(std::string zombieName);
	Zombie *randomChump();
private:
	std::string _zombieType;
	Zombie* _tmp_zombie;
};

#endif
