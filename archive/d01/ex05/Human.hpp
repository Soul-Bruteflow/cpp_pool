#ifndef _HUMAN_HPP
#define _HUMAN_HPP

#include "Brain.hpp"

class Human {
public:
	Human();
	~Human();

	const Brain &getBrain();
	std::string identify() const;

private:
	const Brain _brain;
};


#endif
