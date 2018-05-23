#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieEvent::ZombieEvent() :_zombieType("default") {
	return;
}

ZombieEvent::~ZombieEvent() {
	return;
}

void ZombieEvent::setZombieType(std::string zombieType) {
	_zombieType = zombieType;
}

Zombie* ZombieEvent::newZombie(std::string zombieName) {
	_tmp_zombie = new Zombie(zombieName, _zombieType);
	return _tmp_zombie;
}

Zombie* ZombieEvent::randomChump() {
	std::string	randNames[10];
	if (_zombieType == "lurkers") {
		randNames[0] = "Lunar Dash";
		randNames[1] = "Sugar Cube";
		randNames[2] = "Rainbow Gadget";
		randNames[3] = "Shadow Eyes";
		randNames[4] = "Blue Blanket";
		randNames[5] = "Tiny Mist";
		randNames[6] = "Twinkle Prize";
		randNames[7] = "Mystic Smirk";
		randNames[8] = "Tiny Stream";
		randNames[9] = "Dancing Haste";
	}
	else if (_zombieType == "chasers") {
		randNames[0] = "Gradur, The Bunny Killer";
		randNames[1] = "Dinnerth, Protector Of The Weak";
		randNames[2] = "Byse, Lord Of The Green";
		randNames[3] = "Moddram, Lord Of The Brown";
		randNames[4] = "Chodroit, The Victorious";
		randNames[5] = "Iedrir, The Scary One";
		randNames[6] = "Twinkle Prize";
		randNames[7] = "Rorvyr, The Voiceless One";
		randNames[8] = "Ziakusde, The Chosen";
		randNames[9] = "Iarecri, The Calm";
	} else {
		randNames[0] = "Traitor Of The World";
		randNames[1] = "Savior Of Desire";
		randNames[2] = "Soldiers Without Duty";
		randNames[3] = "Spies Of Earth";
		randNames[4] = "Men And Traitors";
		randNames[5] = "Cats And Turtles";
		randNames[6] = "Spear Without Glory";
		randNames[7] = "Root Without Shame";
		randNames[8] = "Bleeding In The Moon";
		randNames[9] = "Screams In My Future";
	}
	_tmp_zombie = newZombie(randNames[std::rand() % 10]);
	_tmp_zombie->announce();
	return _tmp_zombie;
}