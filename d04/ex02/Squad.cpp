//
// Created by bruteflow on 9/18/18.
//

#include "Squad.hpp"
#include <iostream>

/* Default constructor */
Squad::Squad()
:_unitCount(0), _squad(nullptr)
{}

/* Copy constructor */
Squad::Squad(Squad const &src)
:_squad(nullptr)
{
	for (int i = 0; i < src.getCount(); i ++)
		push(src.getUnit(i));
	_unitCount = src._unitCount;
}

/* Default destructor */
Squad::~Squad()
{
	_cleanSquad();
}

/* Assignment operator overload (Update) */
Squad &Squad::operator=(Squad const &rhs)
{
	/* this->data = rhs.data */
	_cleanSquad();
	for (int i = 0; i < rhs.getCount(); i ++)
		push(rhs.getUnit(i));
	_unitCount = rhs._unitCount;
	return *this;
}

int Squad::getCount() const
{
	return _unitCount;
}

ISpaceMarine *Squad::getUnit(int n) const
{
	if (n < 0 || n > _unitCount)
		return nullptr;

	t_list *crawler = _squad;
	for (int i = 0; i < n; i++)
	{
		crawler = crawler->next;
	}
	return crawler->unit;
}

int Squad::push(ISpaceMarine *unit)
{
	t_list *crawler;

	if (unit != nullptr && !_alreadyInTheSquad(unit, _squad))
	{
		if (_squad == nullptr)
		{
			_squad = new t_list;
			_squad->unit = unit;
			_squad->next = nullptr;
		}
		else
		{
			crawler = _squad;
			while (crawler->next != nullptr)
				crawler = crawler->next;

			t_list *tmpNode = new t_list;
			tmpNode->unit = unit;
			tmpNode->next = nullptr;

			crawler->next = tmpNode;
		}
		_unitCount += 1;
	}
	return _unitCount;
}

bool Squad::_alreadyInTheSquad(const ISpaceMarine *unit, const t_list *squad) const
{
	const t_list *crawler = squad;

	if (crawler == nullptr)
		return false;

	while (crawler->next)
	{
		if (unit == crawler->unit)
			return true;

		crawler = crawler->next;
	}
	return false;
}

void Squad::_cleanSquad()
{
	t_list *tmp;

	while (_squad)
	{
		tmp = _squad;
		delete _squad->unit;
		_squad = _squad->next;
		delete tmp;
	}
}
