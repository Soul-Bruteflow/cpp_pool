//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_OBJECTFIELD_HPP
#define RUSH00_OBJECTFIELD_HPP


#include <cstddef>
#include <vector>
#include "Object.hpp"
#include "Rect.hpp"
#include "Player.hpp"
#include <ncurses.h>

#define MAX_OBJECTS 10

class ObjectField
{
public:
	/* Canonical Form */
	ObjectField();
	ObjectField(ObjectField const &src);
	~ObjectField();
	ObjectField &operator=(ObjectField const &rhs);

	void update();
	void erase(size_t);
	void setBounds(Rect);

	Object* getData() const;

	void clearObject(WINDOW* wnd);
	void drawObject(char c, WINDOW* wnd);
	void drawBackgroundObject(char c, WINDOW* wnd);
	void generateAll();
	void generate(size_t i);
	void checkColision(Player *p);

private:
	Rect				_fieldBounds;
	Object 				*_objects;
};


#endif //RUSH00_OBJECTFIELD_HPP
