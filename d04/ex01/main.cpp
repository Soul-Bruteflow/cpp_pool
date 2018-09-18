//
// Created by bruteflow on 9/10/18.
//

#include <iostream>

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	/* Custom */
	std::cout << "\n*** Custom tests. ***\n";
	Character *player = new Character("NARG");
	std::cout << *player;

	Enemy *s = new RadScorpion();
	Enemy *m = new SuperMutant();
	AWeapon* range = new PlasmaRifle();
	AWeapon* melee = new PowerFist();

	std::cout << "\n*** Attack without a weapon. ***\n";
	player->attack(s);
	std::cout << *player;

	std::cout << "\n*** Rifle equip and scorp kill. ***\n";
	player->equip(range);
	std::cout << *player;
	player->attack(s);
	player->attack(s);
	player->attack(s);
	player->attack(s);
	player->attack(s);
	std::cout << *player;

	std::cout << "\n*** Attacks on dead scorp. ***\n";
	player->attack(s);
	player->attack(s);
	std::cout << *player;

	std::cout << "\n*** Restore AP to the max. ***\n";
	player->recoverAP();
	player->recoverAP();
	player->recoverAP();
	player->recoverAP();
	std::cout << *player;

	std::cout << "\n*** Powerfist equip and mutant kill. ***\n";
	player->equip(melee);
	std::cout << *player;

	player->attack(m);
	player->attack(m);
	player->attack(m);
	player->attack(m);
	std::cout << *player;

	return 0;
}
