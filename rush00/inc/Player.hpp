//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_PLAYER_HPP
#define RUSH00_PLAYER_HPP

#include "Vec2i.hpp"

class Player
{
public:
	/* Canonical Form */
	Player();
	Player(Player const &src);
	~Player();
	Player &operator=(Player const &rhs);

	Vec2i	getPosition() const;
	void	setPosition(Vec2i pos);
	void	setPosition(int_fast16_t x, int_fast16_t y);

	char 	getModel() const;
	void	setModel(char model);

	int_fast16_t getPosX() const;
	int_fast16_t getPosY() const;

	void setPosX(int_fast16_t x);
	void setPosY(int_fast16_t y);

private:
	Vec2i	_pos;
	char	_model;

};


#endif //RUSH00_PLAYER_HPP
