//
// Created by bruteflow on 9/20/18.
//

#ifndef D04_EX02_ASSAULTTERMINATOR_HPP
#define D04_EX02_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	/* Canonical Form */
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &src);
	~AssaultTerminator();
	AssaultTerminator &operator=(AssaultTerminator const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

private:

};


#endif //D04_EX02_ASSAULTTERMINATOR_HPP
