//
// Created by bruteflow on 7/9/17.
//

#ifndef D01_E08_HUMAN_HPP
#define D01_E08_HUMAN_HPP

#include <string>

class Human{
public:
	Human();
	~Human();
	void action(std::string const & action_name, std::string const & target);

private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);
};


#endif //D01_E08_HUMAN_HPP
