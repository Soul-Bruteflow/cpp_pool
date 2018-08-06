//
// Created by bruteflow on 8/3/18.
//

#ifndef EX03_ZOMBIE_HPP
#define EX03_ZOMBIE_HPP

#include <string>

class Zombie
{

private:
	std::string _type;
	std::string _name;

public:
	Zombie(void);
	Zombie(std::string zombieName, std::string zombieType);
	~Zombie(void);
	void announce(void);
	void setName(std::string name);
	void setType(std::string type);
};
#endif //EX02_ZOMBIE_HPP
