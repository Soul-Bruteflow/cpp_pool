//
// Created by bruteflow on 7/9/17.
//

#include "Human.hpp"
#include <iostream>

Human::Human(){

}

Human::~Human(){

}

void Human::action(std::string const &action_name, std::string const &target){
	void (Human::*action_list[3])(std::string const &target) = {
			&Human::intimidatingShout,
			&Human::meleeAttack,
			&Human::rangedAttack
	};
	std::string action_names[3] = {"shout", "melee", "range"};
	for (int i = 0; i < 3; i++){
		if(action_names[i].compare(action_name) == 0)
			(this->*action_list[i])(target);
	}
}

void Human::intimidatingShout(std::string const &target){
	std::cout << "Shouted at "
			  << target
			  << std::endl;
}

void Human::meleeAttack(std::string const &target){
	std::cout << "Melee attacked "
			  << target
			  << std::endl;
}

void Human::rangedAttack(std::string const &target){
	std::cout << "Ranged attacked "
			  << target
			  << std::endl;
}
