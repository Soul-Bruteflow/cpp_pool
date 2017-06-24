#include <string>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
		: _hordePointer(new Zombie[n])
		, _n(n)
{
	generateNames();
	for (int i = 0; i < _n; i++)
		defineHorde(i);
}

ZombieHorde::~ZombieHorde() {
	delete[]_hordePointer;
	std::cout << "Horde DESTROYED."
			  << std::endl;
}

void ZombieHorde::announce(void) const {
	for (int i = 0; i < _n; i++)
		_hordePointer[i].announce();
}

void ZombieHorde::defineHorde(int n) {
	_hordePointer[n].defineZombie(_randNames[std::rand() % 30], HORDE);
}

void ZombieHorde::generateNames(void) {
	_randNames[0] = "Lunar Dash";
	_randNames[1] = "Sugar Cube";
	_randNames[2] = "Rainbow Gadget";
	_randNames[3] = "Shadow Eyes";
	_randNames[4] = "Blue Blanket";
	_randNames[5] = "Tiny Mist";
	_randNames[6] = "Twinkle Prize";
	_randNames[7] = "Mystic Smirk";
	_randNames[8] = "Tiny Stream";
	_randNames[9] = "Dancing Haste";
	_randNames[10] = "Gradur, The Bunny Killer";
	_randNames[11] = "Dinnerth, Protector Of The Weak";
	_randNames[12] = "Byse, Lord Of The Green";
	_randNames[13] = "Moddram, Lord Of The Brown";
	_randNames[14] = "Chodroit, The Victorious";
	_randNames[15] = "Iedrir, The Scary One";
	_randNames[16] = "Twinkle Prize";
	_randNames[17] = "Rorvyr, The Voiceless One";
	_randNames[18] = "Ziakusde, The Chosen";
	_randNames[19] = "Iarecri, The Calm";
	_randNames[20] = "Traitor Of The World";
	_randNames[21] = "Savior Of Desire";
	_randNames[22] = "Soldiers Without Duty";
	_randNames[23] = "Spies Of Earth";
	_randNames[24] = "Men And Traitors";
	_randNames[25] = "Cats And Turtles";
	_randNames[26] = "Spear Without Glory";
	_randNames[27] = "Root Without Shame";
	_randNames[28] = "Bleeding In The Moon";
	_randNames[29] = "Screams In My Future";
}