//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_GAME_HPP
#define RUSH00_GAME_HPP

#include <ncurses.h>
#include "Player.hpp"
#include "ObjectField.hpp"

class Game
{
public:
	/* Canonical Form */
	Game();
	Game(Game const &src);
	~Game();
	Game &operator=(Game const &rhs);

	void		run();
	WINDOW*		getWindow() const;
	void		setWindow(WINDOW *window);

private:
	WINDOW*		_mainWnd;
	WINDOW*		_gameWnd;
	Player		_player;
	ObjectField _stars;
	ObjectField _asteroids;
	Rect		_gameArea;
	Rect		_screenArea;

};


#endif //RUSH00_GAME_HPP
