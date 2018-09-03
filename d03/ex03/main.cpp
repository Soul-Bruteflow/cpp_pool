//
// Created by bruteflow on 8/10/18.
//

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

int main()
{

	//FragTrap

//	std::cout << "-------->Constructors:" << std::endl;
//	FragTrap robot_1;
//	FragTrap robot_2("Jared");
//	FragTrap robot_3(robot_2);
//
//	std::cout << "-------->Logs:" << std::endl;
//	robot_1.logStats();
//	robot_2.logStats();
//	robot_3.logStats();
//	robot_3.setName("CopyCat");
//
//	std::cout << "-------->Attacks:" << std::endl;
//	robot_1.meleeAttack("TARGETRAP");
//	robot_1.rangedAttack("TARGETRAP");
//
//
//	std::cout << "-------->Damage:" << std::endl;
//	robot_1.takeDamage(104);
//	robot_1.logStats();
//
//	std::cout << "-------->Armor:" << std::endl;
//	robot_1.takeDamage(5);
//	robot_1.logStats();
//
//	std::cout << "-------->Damage 0 HP:" << std::endl;
//	robot_1.takeDamage(7);
//	robot_1.logStats();
//
//	std::cout << "-------->Repair:" << std::endl;
//	robot_1.restoreEnergy(100);
//	robot_1.beRepaired(75);
//	robot_1.logStats();
//
//	std::cout << "-------->Over Repair:" << std::endl;
//	robot_1.beRepaired(50);
//	robot_1.logStats();
//
//	std::cout << "-------->Random Attacks:" << std::endl;
//	robot_1.restoreEnergy(100);
//	robot_1.vaulthunter_dot_exe("TARGETRAP_1");
//	robot_1.vaulthunter_dot_exe("TARGETRAP_2");
//	robot_1.vaulthunter_dot_exe("TARGETRAP_3");
//	robot_1.logStats();

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
//
//
//	std::cout << "-------->Damage:" << std::endl;
//	robot_4.takeDamage(102);
//	robot_4.logStats();
//
//	std::cout << "-------->Armor:" << std::endl;
//	robot_4.takeDamage(3);
//	robot_4.logStats();
//
//	std::cout << "-------->Damage 0 HP:" << std::endl;
//	robot_4.takeDamage(7);
//	robot_4.logStats();
//
//	std::cout << "-------->Repair:" << std::endl;
//	robot_4.restoreEnergy(100);
//	robot_4.beRepaired(75);
//	robot_4.logStats();
//
//	std::cout << "-------->Over Repair:" << std::endl;
//	robot_4.beRepaired(50);
//	robot_4.logStats();
//
//	std::cout << "-------->Random Attacks:" << std::endl;
//	robot_4.restoreEnergy(100);
//	robot_4.challengeNewcomer();
//	robot_4.challengeNewcomer();
//	robot_4.challengeNewcomer();
//	robot_4.logStats();

	//NinjaTrap
	std::cout << "-------->Constructors:" << std::endl;
	NinjaTrap robot_7;
	NinjaTrap robot_8("Jared");
	NinjaTrap robot_9(robot_8);

	std::cout << "-------->Logs:" << std::endl;
	robot_7.logStats();
	robot_8.logStats();
	robot_9.logStats();
	robot_9.setName("CopyCat");

	std::cout << "-------->Attacks:" << std::endl;
	robot_7.meleeAttack("TARGETRAP");
	robot_7.rangedAttack("TARGETRAP");


	std::cout << "-------->Damage:" << std::endl;
	robot_7.takeDamage(60);
	robot_7.logStats();

	std::cout << "-------->Damage 0 HP:" << std::endl;
	robot_7.takeDamage(7);
	robot_7.logStats();

	std::cout << "-------->Repair:" << std::endl;
	robot_7.beRepaired(60);
	robot_7.logStats();

	std::cout << "-------->Over Repair:" << std::endl;
	robot_7.beRepaired(50);
	robot_7.logStats();

	std::cout << "-------->Special Attacks:" << std::endl;
	FragTrap robot10;
	ScavTrap robot11;
	ClapTrap robot12;

	robot_7.restoreEnergy(100);
	robot_7.ninjaShoebox(robot10);
	robot_7.ninjaShoebox(robot11);
	robot_7.ninjaShoebox(robot12);
	robot_7.ninjaShoebox(robot_8);
	robot_7.logStats();
}

