//
// Created by bruteflow on 10/7/18.
//

#include <string>
#include <ncurses.h>
#include <iostream>
#include <Game.hpp>
#include <Rect.hpp>
#include <zconf.h>
#include <Vec2ui.hpp>
#include <sstream>

#include "Game.hpp"

/* Default constructor */
Game::Game()
:_score(0), _lives(1)
{
	srand(time(0));
	_mainWnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();
	/** clear(), refresh() **/

	_screenArea.setRect(0, 0, 80, 24);

	int infopanel_height = 4;
	_gameWnd = newwin(  _screenArea.height() - infopanel_height - 2,
	_screenArea.width() - 2,
	_screenArea.top() + 1,
	_screenArea.left() + 1  );
	_mainWnd = newwin(_screenArea.height(), _screenArea.width(), 0, 0);

	_gameArea.setRect(0, 0, _screenArea.width() - 2, _screenArea.height() - infopanel_height - 4);

	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	init_pair(4, COLOR_RED, COLOR_BLACK);
	init_pair(5, COLOR_BLUE, COLOR_BLACK);

	// enable function keys
	keypad(_mainWnd, true);
	keypad(_gameWnd, true);

	// disable input blocking
	nodelay(_mainWnd, true);
	nodelay(_gameWnd, true);
	curs_set(0);
}

/* Copy constructor */
Game::Game(Game const &src)
{
	*this = src;
}

/* Default destructor */
Game::~Game()
{
	delwin(_mainWnd);
	delwin(_gameWnd);
	endwin();
}

/* Assignment operator overload (Update) */
Game &Game::operator=(Game const &rhs)
{
	/* this->data = rhs.data */
	_mainWnd = rhs._mainWnd;
	return *this;
}

void Game::run()
{
	int tick;

	// init character
	_player.setModel('o');
	_player.setPosition(10, 5);
	_lives = 1;

	_asteroids.setBounds(_gameArea);
	_stars.setBounds(_gameArea);
	_bullets.setBounds(_gameArea);

	_stars.generateAll();
	_asteroids.generateAll();

	int in_char = 0;
	bool exit_requested = false;
	bool game_over = false;

	// frame around screen
	wattron(_mainWnd, A_BOLD);
	box(_mainWnd, 0, 0);
	wattroff(_mainWnd, A_BOLD);

	// horizontal dividing line
	wmove(_mainWnd, _gameArea.bot() + 3, 1);
	whline(_mainWnd, '-', _screenArea.width() - 2);

	// initial draw
	wrefresh(_mainWnd);
	wrefresh(_gameWnd);

	tick = 0;
	while(true)
	{

		werase(_gameWnd);

		// get input
		in_char = wgetch(_mainWnd);
		in_char = tolower(in_char);

		mvaddch(_player.getPosY(), _player.getPosX(), ' ');


		std::ostringstream sstream;
		sstream << "Score: " << _score << " | " << "Lives: " << _lives;
		std::string score = sstream.str();
		const char *s = score.c_str();

		mvwprintw(_gameWnd, 17, 2, s);

		//mvaddch(10, 10, '@');

		// controls switch
		switch(in_char)
		{
			case 'q':
				exit_requested = true;
				break;
			case KEY_UP:
			case 'w':
			case 'i':
				if(_player.getPosY() > _gameArea.top())
					_player.setPosY((_player.getPosY() - static_cast<int_fast8_t >(1)));
				break;
			case KEY_DOWN:
			case 's':
			case 'k':
				if(_player.getPosY() < _gameArea.bot() + 1)
					_player.setPosY((_player.getPosY() + static_cast<int_fast8_t >(1)));
				break;
			case KEY_LEFT:
			case 'a':
			case 'j':
				if(_player.getPosX() > _gameArea.left() + 1)
					_player.setPosX((_player.getPosX() - static_cast<int_fast8_t >(1)));
				break;
			case KEY_RIGHT:
			case 'd':
			case 'l':
				if(_player.getPosX() < _gameArea.right() - 2)
					_player.setPosX((_player.getPosX() + static_cast<int_fast8_t >(1)));
				break;
			case ' ':
				_bullets.createBullet(_player.getPosX(), _player.getPosY());
				break;
			default:
				break;
		}

		// update object fields
		if(tick % 9 == 0)
			_stars.update();

		if(tick > 100 && tick % 20 == 0)
			_asteroids.update();

		_bullets.bulletUpdate();

		_player.setBounds(_player.getPosX() - 1, _player.getPosY(), 3, 1);

		//Draw
		_stars.drawBackgroundObject('.', _gameWnd);
		_asteroids.drawObject('*', _gameWnd);
		_bullets.drawBackgroundObject('|', _gameWnd);

		// Collision
		if (_asteroids.checkColision(&_player))
		{
			_lives--;
			if (_lives == 0)
				game_over = true;
		}
		if(_bullets.checkBulletCollision(&_asteroids))
		{
			_score++;
		}


		// draw player body
		wattron(_gameWnd, A_BOLD);
		mvwaddch(_gameWnd, _player.getPosY(), _player.getPosX(), _player.getModel());
		wattroff(_gameWnd, A_BOLD);

		// draw player sides
		wattron(_gameWnd, A_ALTCHARSET);
		mvwaddch(_gameWnd, _player.getPosY(), _player.getPosX() - 1, ACS_LARROW);
		mvwaddch(_gameWnd, _player.getPosY(), _player.getPosX() + 1, ACS_RARROW);

		// draw engine flame
		if((tick % 10) / 3) {
			wattron(_gameWnd, COLOR_PAIR(tick % 2 ? 3 : 4));
			mvwaddch(_gameWnd, _player.getPosY() + 1, _player.getPosX(), ACS_UARROW);
			wattroff(_gameWnd, COLOR_PAIR(tick % 2 ? 3 : 4));
		}

		wattroff(_gameWnd, A_ALTCHARSET);

		// refresh all
		wrefresh(_mainWnd);
		wrefresh(_gameWnd);
		if(exit_requested || game_over) break;

		tick++;

		usleep(10000); // 10 ms
	};
}

WINDOW *Game::getWindow() const
{
	return _mainWnd;
}

void Game::setWindow(WINDOW *window)
{
	_mainWnd = window;
}
