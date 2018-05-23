#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie();
	Zombie(std::string zombieName, std::string zombieType);
	~Zombie(void);
	void announce(void) const;
	void defineZombie(std::string zombieName, std::string zombieType);
private:
	std::string _zombieName;
	std::string _zombieType;
};

#endif
