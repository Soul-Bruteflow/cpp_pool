//
// Created by bruteflow on 9/18/18.
//

#ifndef D04_EX02_SQUAD_HPP
#define D04_EX02_SQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
	typedef struct		s_list
	{
		ISpaceMarine	*unit;
		s_list			*next;
	}					t_list;

public:
	/* Canonical Form */
	Squad();
	Squad(Squad const &src);
	~Squad();
	Squad &operator=(Squad const &rhs);

	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);

private:
	int		_unitCount;
	t_list	*_squad;

	bool 	_alreadyInTheSquad(const ISpaceMarine *unit, const t_list *squad) const;
	void 	_cleanSquad();
};


#endif //D04_EX02_SQUAD_HPP
