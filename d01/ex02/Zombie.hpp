#ifndef _ZOMBIE_HPP
#define _ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
	void announce(void);
private:
	std::string _name;
	std::string _type;
};

#endif
