//
// Created by bruteflow on 10/7/18.
//

#include <string>
#include <ncurses.h>
#include <iostream>
#include "Game.hpp"

/* Default constructor */
Game::Game()
{
	_wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();
	/** clear(), refresh() **/

	keypad(_wnd, true);
	nodelay(_wnd, true);
	curs_set(0);
	if(!has_colors())
	{
		endwin();
		std::cout << "ERROR: Terminal does not support color.\n";
		exit(1);
	}
	start_color();
	attron(A_BOLD);
	box(_wnd, 0, 0);
	attroff(A_BOLD);
	init_pair(1, COLOR_BLACK, COLOR_CYAN);
	wbkgd(_wnd, COLOR_PAIR(1));
}

/* Copy constructor */
Game::Game(Game const &src)
{
	*this = src;
}

/* Default destructor */
Game::~Game()
{
	endwin();
}

/* Assignment operator overload (Update) */
Game &Game::operator=(Game const &rhs)
{
	/* this->data = rhs.data */
	_wnd = rhs._wnd;
	return *this;
}

void Game::run()
{
	move(5, 5);

	std::string text = "Hello world!";
	for(size_t i = 0; i < text.size(); i++)
	{
		addch(text[i]);
		addch(' ');
	}

	refresh();

	while(1);
}