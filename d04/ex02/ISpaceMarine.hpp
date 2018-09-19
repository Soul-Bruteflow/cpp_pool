//
// Created by bruteflow on 9/18/18.
//

#ifndef D04_EX02_ISPACEMARINE_HPP
#define D04_EX02_ISPACEMARINE_HPP

class ISpaceMarine
{
public:
	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* clone() const = 0;
	virtual void battleCry() const = 0;
	virtual void rangedAttack() const = 0;
	virtual void meleeAttack() const = 0;
};

#endif //D04_EX02_ISPACEMARINE_HPP
