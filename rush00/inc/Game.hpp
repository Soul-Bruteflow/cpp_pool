//
// Created by bruteflow on 10/7/18.
//

#ifndef RUSH00_GAME_HPP
#define RUSH00_GAME_HPP

#include <ncurses.h>

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
	WINDOW* _wnd;

};


#endif //RUSH00_GAME_HPP
