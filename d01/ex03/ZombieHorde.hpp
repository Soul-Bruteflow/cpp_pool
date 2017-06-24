#ifndef _ZOMBIEHORDE_HPP
#define _ZOMBIEHORDE_HPP

#define HORDE "horde"

#include <string>
#include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int n);
	~ZombieHorde();

	void defineHorde(int n);
	void announce(void) const;
private:
	void generateNames(void);

	Zombie 		*_hordePointer;
	std::string _randNames[40];
	int			_n;
};


#endif
