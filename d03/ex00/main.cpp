//
// Created by bruteflow on 8/10/18.
//

#include "FragTrap.hpp"
#include <iostream>
#include <string>

int main()
{
	std::cout << "-------->Constructors:" << std::endl;
	FragTrap robot_1;
	FragTrap robot_2("Jared");
	FragTrap robot_3(robot_2);

	std::cout << "-------->Logs:" << std::endl;
	robot_1.logStats();
	robot_2.logStats();
	robot_3.logStats();
	robot_3.setName("CopyCat");

	std::cout << "-------->Attacks:" << std::endl;
	robot_1.meleeAttack("TARGETRAP");
	robot_1.rangedAttack("TARGETRAP");


	std::cout << "-------->Damage:" << std::endl;
	robot_1.takeDamage(104);
	robot_1.logStats();

	std::cout << "-------->Armor:" << std::endl;
	robot_1.takeDamage(5);
	robot_1.logStats();

	std::cout << "-------->Damage 0 HP:" << std::endl;
	robot_1.takeDamage(7);
	robot_1.logStats();

	std::cout << "-------->Repair:" << std::endl;
	robot_1.restoreEnergy(100);
	robot_1.beRepaired(75);
	robot_1.logStats();

	std::cout << "-------->Over Repair:" << std::endl;
	robot_1.beRepaired(50);
	robot_1.logStats();

	std::cout << "-------->Random Attacks:" << std::endl;
	robot_1.restoreEnergy(100);
	robot_1.vaulthunter_dot_exe("TARGETRAP_1");
	robot_1.vaulthunter_dot_exe("TARGETRAP_2");
	robot_1.vaulthunter_dot_exe("TARGETRAP_3");
	robot_1.logStats();
}

