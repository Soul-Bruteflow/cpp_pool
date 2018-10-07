//
// Created by bruteflow on 10/7/18.
//

#include <string>
#include <ncurses.h>
#include <iostream>
#include <Game.hpp>
#include <Rect.hpp>
#include <zconf.h>

#include "Game.hpp"

/* Default constructor */
Game::Game()
{
	srand(time(0));
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
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
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
	_player.setModel('0');
	_player.setPosition(10, 5);

	int in_char;
	bool exit_requested = false;

	// these will be used to initialize rect
	uint_fast16_t maxx, maxy;

	// get window boundaries
	getmaxyx(_wnd, maxy, maxx);

	//initialize our rect with 0 offset
	Rect game_area(0, 0, maxx, maxy);

	//set our star bounds
	_stars.setBounds(game_area);

	while(true)
	{
		in_char = wgetch(_wnd);
		mvaddch(_player.getPosY(), _player.getPosX(), ' ');

		// this removes each object from it's previous position on the screen
		// by placing it with  a space on the screen instead
		// this will be replaced by a more efficent method late

		_stars.clearObject();
//		for (size_t i = 0; i < MAX_OBJECTS; i++)
//		{
//			Object *tmp = _stars.getData();
//			if (tmp[i].isAlive())
//				mvaddch(tmp[i].getPos().getY(), tmp[i].getPos().getX(), ' ');
//		}
//		for(auto s : _stars.getData())
//		{
//			mvaddch(s.getPos().getY(), s.getPos().getX(), ' ');
//		}

		_stars.update();

		switch(in_char)
		{
			case 'q':
				exit_requested = true;
				break;
			case KEY_UP:
			case 'w':
				_player.setPosY((_player.getPosY() - static_cast<int_fast8_t >(1)));
				break;
			case KEY_DOWN:
			case 's':
				_player.setPosY((_player.getPosY() + static_cast<int_fast8_t >(1)));
				break;
			case KEY_LEFT:
			case 'a':
				_player.setPosX((_player.getPosX() - static_cast<int_fast8_t >(1)));
				break;
			case KEY_RIGHT:
			case 'd':
				_player.setPosX((_player.getPosX() + static_cast<int_fast8_t >(1)));
				break;
			default:
				break;
		}

		mvaddch(_player.getPosY(), _player.getPosX(), _player.getModel());

		_stars.drawObject();
//		for (size_t i = 0; i < MAX_OBJECTS; i++)
//		{
//			Object *tmp = _stars.getData();
//			if (tmp[i].isAlive())
//				mvaddch(tmp[i].getPos().getY(), tmp[i].getPos().getX(), '*');
//		}

//		for(auto s : _stars.getData())
//		{
//			// use getPos() to get position of stars
//			// displays given character at given position on game window
//			mvaddch(s.getPos().getY(), s.getPos().getX(), '*');
//		}

		if(exit_requested)
			break;
		usleep(10000); // wait for 1 ms
		refresh();
	}
}


WINDOW *Game::getWindow() const
{
	return _wnd;
}

void Game::setWindow(WINDOW *window)
{
	_wnd = window;
}
