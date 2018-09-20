//
// Created by bruteflow on 9/20/18.
//

#ifndef D04_EX02_TACTICALMARINE_HPP
#define D04_EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	/* Canonical Form */
	TacticalMarine();
	TacticalMarine(TacticalMarine const &src);
	~TacticalMarine();
	TacticalMarine &operator=(TacticalMarine const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

private:

};


#endif //D04_EX02_TACTICALMARINE_HPP
