//
// Created by bruteflow on 9/17/18.
//

#ifndef D04_EX01_ENEMY_HPP
#define D04_EX01_ENEMY_HPP

#include <string>

class Enemy
{
public:
	/* Canonical Form */
	Enemy();
	Enemy(std::string const &type, int hp);
	Enemy(Enemy const &src);
	virtual ~Enemy();
	Enemy &operator=(Enemy const &rhs);

	std::string const& getType() const;
	int getHP() const;
	virtual void takeDamage(int);

private:
	std::string	_type;
	int			_HP;

};


#endif //D04_EX01_ENEMY_HPP
