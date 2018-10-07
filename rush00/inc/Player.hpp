//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_PLAYER_HPP
#define RUSH00_PLAYER_HPP

class ObjectField;

#include "Vec2i.hpp"
#include "Rect.hpp"
#include "ObjectField.hpp"

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

	void setBounds(uint_fast16_t oX, uint_fast16_t oY, uint_fast16_t bX, uint_fast16_t bY);
	void shoot(ObjectField *bullets);

	Rect	bounds;
	//ObjectField *bullets;
private:
	Vec2i	_pos;
	char	_model;
	int 	_energy;

};


#endif //RUSH00_PLAYER_HPP
