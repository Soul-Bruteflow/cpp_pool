#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie(std::string zombieName, std::string zombieType);
	~Zombie(void);
	void announce(void);
private:
	std::string _zombieName;
	std::string _zombieType;
};

#endif
