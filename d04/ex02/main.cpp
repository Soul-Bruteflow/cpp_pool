//
// Created by bruteflow on 9/18/18.
//

#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "\n*** Custom Tests ***\n";

	std::cout << "\n*** Create Marines ***\n";
	TacticalMarine *mery = new TacticalMarine;
	AssaultTerminator *termy = new AssaultTerminator;
	ISpaceMarine* ragnar = new TacticalMarine;
	ISpaceMarine* reaper = new AssaultTerminator;
	ISpaceMarine* copy1 = new TacticalMarine(*mery);
	ISpaceMarine* copy2 = new AssaultTerminator(*termy);
	ISquad *squad = new Squad;

	std::cout << "\n*** Push Marines in the Squad ***\n";
	squad->push(ragnar);
	squad->push(reaper);
	squad->push(copy1);
	squad->push(copy2);

	ISquad *squad2 = squad;

	std::cout << "\n*** Display Battle cry and Attacks  ***\n";
	for (int i = 0; i < squad2->getCount(); ++i)
	{
		ISpaceMarine* cur = squad2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	//delete squad;
	delete squad2;

	//delete units not in the squad
	delete mery;
	delete termy;
}