//
// Created by bruteflow on 8/7/18.
//

#ifndef D01_EX05_HUMAN_HPP
#define D01_EX05_HUMAN_HPP

#include <string>
#include "Brain.hpp"


class Human
{
public:
	/* Canonical / Coplien form */
	Human();
	~Human();
	std::string identify() const;
	const Brain &getBrain();

private:
	const Brain _brain;

};


#endif //D01_EX05_HUMAN_HPP
