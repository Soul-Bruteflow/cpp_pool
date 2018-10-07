//
// Created by bruteflow on 10/7/18.
//

#include <ObjectField.hpp>
#include <iostream>
#include <ncurses.h>

#include "ObjectField.hpp"

/* Default constructor */
ObjectField::ObjectField()
:_fieldBounds(), _objectSet()
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
	//if (_objects[i].isAlive())
		_objects[i].setIsAlive(false);
	//_objectSet.erase(_objectSet.begin() + i);
}

void ObjectField::update()
{
	// update existing objects
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].getPosY() > _fieldBounds.bot())
			erase(i);
		_objects[i].update();
	}

//	for(size_t i = 0; i < _objectSet.size(); i++)
//	{
//		if(_objectSet.at(i).getPos().getY() > _fieldBounds.bot())
//			_objectSet.erase(_objectSet.begin() + i);
//
//		_objectSet.at(i).update();
//	}

	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		int a = rand() % MAX_OBJECTS;

		if (!_objects[a].isAlive())
		{
			Object s(rand() % _fieldBounds.width(), 0);
			_objects[i] = s;
			_objects[i].setIsAlive(true);
		}
	}

// spawn a new object
//	Object s(rand() % _fieldBounds.width(), 0);
//	_objectSet.push_back(s);
}

Object* ObjectField::getData() const
{
	return _objects;
}

void ObjectField::clearObject()
{
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].isAlive())
			mvaddch(_objects[i].getPos().getY(), _objects[i].getPos().getX(), ' ');
	}
}

void ObjectField::drawObject()
{
	for (size_t i = 0; i < MAX_OBJECTS; i++)
	{
		if (_objects[i].isAlive())
			mvaddch(_objects[i].getPos().getY(), _objects[i].getPos().getX(), '*');
	}
}
