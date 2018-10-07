//
// Created by bruteflow on 10/7/18.
//

#include <ObjectField.hpp>
#include <iostream>
#include <ncurses.h>

#include "ObjectField.hpp"

/* Default constructor */
ObjectField::ObjectField()
:_fieldBounds()
{
	_objects = new Object [MAX_OBJECTS];
}

/* Copy constructor */
ObjectField::ObjectField(ObjectField const &src)
{
	*this = src;
	return;
}

/* Default destructor */
ObjectField::~ObjectField()
{

}

/* Assignment operator overload (Update) */
ObjectField &ObjectField::operator=(ObjectField const &rhs)
{
	/* this->data = rhs.data */
	(void)(rhs);
	return *this;
}

void ObjectField::setBounds(Rect a)
{
	_fieldBounds = a;
}

void ObjectField::erase(size_t i)
{
	if (_objects[i].isAlive())
		_objects[i].setIsAlive(false);
}

void ObjectField::update()
{
	// update existing object

	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].getPosY() > _fieldBounds.bot())
		{
			erase(i);
			generate(i);
		}
	}

	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].isAlive())
			_objects[i].update();
	}
//	for (size_t i = 0; i < MAX_OBJECTS; i++)
//	{
//		//if (_objects[i].getPosY() > _fieldBounds.bot())
//		//erase(i);
//		_objects[i].update();
//	}
}

Object* ObjectField::getData() const
{
	return _objects;
}

void ObjectField::clearObject(WINDOW* wnd)
{
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].isAlive())

		{	wattron(wnd, A_BOLD);
			mvwaddch(wnd, _objects[i].getPos().getY(), _objects[i].getPos().getX(), ' ');
			wattron(wnd, A_BOLD);
		}
	}
}

void ObjectField::drawObject(char c, WINDOW* wnd)
{
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].isAlive())
		{
			wattron(wnd, A_BOLD);
			mvwaddch(wnd,_objects[i].getPos().getY(), _objects[i].getPos().getX(), c);
			wattron(wnd, A_BOLD);
		}
	}
}

void ObjectField::drawBackgroundObject(char c, WINDOW* wnd)
{
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].isAlive())
			mvwaddch(wnd,_objects[i].getPos().getY(), _objects[i].getPos().getX(), c);
	}
}

void ObjectField::generateAll()
{
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		Object s(rand() % _fieldBounds.width(), rand() % -20);
		_objects[i] = s;
		_objects[i].setIsAlive(true);
	}
}

void ObjectField::generate(size_t i)
{
	Object s(rand() % _fieldBounds.width(), 0);
	_objects[i] = s;
	_objects[i].setIsAlive(true);
}

void ObjectField::checkColision(Player *p)
{
	Player player = *p;

	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if(player.getPosX() == _objects[i].getPosX() && player.getPosY() == _objects[i].getPosY())
		{
			erase(i);
		}
	}
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if(player.getPosX() - 1 == _objects[i].getPosX() && player.getPosY() == _objects[i].getPosY())
		{
			erase(i);
		}
	}
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if(player.getPosX() + 1 == _objects[i].getPosX() && player.getPosY() == _objects[i].getPosY())
		{
			erase(i);
		}
	}
}
