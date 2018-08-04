//
// Created by bruteflow on 8/3/18.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP

#include <string>

class Zombie
{

private:
	std::string _type;
	std::string _name;

public:
	Zombie(std::string zombieName, std::string zombieType);
	~Zombie(void);
	void announce(void);
};
#endif //EX02_ZOMBIE_HPP
