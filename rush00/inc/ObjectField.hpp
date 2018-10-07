//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_OBJECTFIELD_HPP
#define RUSH00_OBJECTFIELD_HPP


#include <cstddef>
#include <vector>
#include "Object.hpp"
#include "Rect.hpp"

#define MAX_OBJECTS 100

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

	void clearObject();
	void drawObject();

private:
	Rect				_fieldBounds;
	std::vector<Object> _objectSet;
	Object 				*_objects;
};


#endif //RUSH00_OBJECTFIELD_HPP
