//
// Created by bruteflow on 8/10/18.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
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
	robot_1.meleeAttack("TARGETRAP");
	robot_1.rangedAttack("TARGETRAP");

	std::cout << "-------->Attacks out of energy:" << std::endl;
	robot_1.meleeAttack("TARGETRAP");
	robot_1.rangedAttack("TARGETRAP");
	robot_1.logStats();

	std::cout << "-------->Damage:" << std::endl;
	robot_1.takeDamage(30);
	robot_1.takeDamage(30);
	robot_1.takeDamage(30);
	robot_1.takeDamage(29);
	robot_1.logStats();
	std::cout << "-------->Damage 0 HP:" << std::endl;
	robot_1.takeDamage(7);
	robot_1.logStats();

	std::cout << "-------->Repair:" << std::endl;
	robot_1.restoreEnergy(100);
	robot_1.beRepaired(25);
	robot_1.beRepaired(25);
	robot_1.beRepaired(25);
	robot_1.beRepaired(25);
	std::cout << "-------->Over Repair:" << std::endl;
	robot_1.beRepaired(25);
	robot_1.beRepaired(25);
	robot_1.logStats();

	std::cout << "-------->Random Attacks:" << std::endl;
	robot_1.restoreEnergy(100);
	robot_1.vaulthunter_dot_exe("TARGETRAP_1");
	robot_1.vaulthunter_dot_exe("TARGETRAP_2");
	robot_1.vaulthunter_dot_exe("TARGETRAP_3");
	robot_1.logStats();

	//ScavTrap

//	std::cout << "-------->Constructors:" << std::endl;
//	ScavTrap robot_4;
//	ScavTrap robot_5("Jared");
//	ScavTrap robot_6(robot_5);
//
//	std::cout << "-------->Logs:" << std::endl;
//	robot_4.logStats();
//	robot_5.logStats();
//	robot_6.logStats();
//	robot_6.setName("CopyCat");
//
//	std::cout << "-------->Attacks:" << std::endl;
//	robot_4.meleeAttack("TARGETRAP");
//	robot_4.rangedAttack("TARGETRAP");
//	robot_4.meleeAttack("TARGETRAP");
//	robot_4.rangedAttack("TARGETRAP");
//
//	std::cout << "-------->Attacks out of energy:" << std::endl;
//	robot_4.meleeAttack("TARGETRAP");
//	robot_4.rangedAttack("TARGETRAP");
//	robot_4.logStats();
//
//	std::cout << "-------->Damage:" << std::endl;
//	robot_4.takeDamage(100);
//	robot_4.logStats();
//	std::cout << "-------->Damage 0 HP:" << std::endl;
//	robot_4.takeDamage(7);
//	robot_4.logStats();
//
//	std::cout << "-------->Repair:" << std::endl;
//	robot_4.restoreEnergy(100);
//	robot_4.beRepaired(100);
//	std::cout << "-------->Over Repair:" << std::endl;
//	robot_4.beRepaired(25);
//	robot_4.logStats();
//
//	std::cout << "-------->Random Chalanges:" << std::endl;
//	robot_4.restoreEnergy(50);
//	robot_4.challengeNewcomer();
//	robot_4.challengeNewcomer();
//	robot_4.restoreEnergy(50);
//	robot_4.challengeNewcomer();
//	robot_4.logStats();
}

