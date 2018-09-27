//
// Created by bruteflow on 9/27/18.
//

#include <iostream>
#include "CentralBureaucracy.hpp"

/* Default constructor */
CentralBureaucracy::CentralBureaucracy()
:_officeBlocks(), _targets(), _officesCount(0), _bureaucratsCount(0), _targetsCount(0)
{
	srand(time(0));
}

/* Copy constructor */
CentralBureaucracy::CentralBureaucracy(CentralBureaucracy const &src)
:_officeBlocks(), _targets(), _officesCount(src._officesCount), _bureaucratsCount(src._bureaucratsCount), _targetsCount(src._targetsCount)
{
	srand(time(0));

	Intern *tmpIntern = new Intern;
	Bureaucrat *tmpSigner = new Bureaucrat;
	Bureaucrat *tmpExecutioner = new Bureaucrat;

	for (int i = 0; i < 100; i++)
		_targets[i] = src._targets[i];

	for (int i = 0; i < 20; i++)
	{
		*tmpIntern = src._officeBlocks[i].getIntern();
		*tmpSigner = src._officeBlocks[i].getSigner();
		*tmpExecutioner = src._officeBlocks[i].getExecutor();

		_officeBlocks[i].setIntern(*tmpIntern);
		_officeBlocks[i].setSigner(*tmpSigner);
		_officeBlocks[i].setExecutor(*tmpExecutioner);
	}
	delete tmpIntern;
	delete tmpSigner;
	delete tmpExecutioner;
}

/* Default destructor */
CentralBureaucracy::~CentralBureaucracy(){}

/* Assignment operator overload (Update) */
CentralBureaucracy &CentralBureaucracy::operator=(CentralBureaucracy const &rhs)
{
	/* this->data = rhs.data */
	Intern *tmpIntern = new Intern;
	Bureaucrat *tmpSigner = new Bureaucrat;
	Bureaucrat *tmpExecutioner = new Bureaucrat;

	for (int i = 0; i < 100; i++)
		_targets[i] = rhs._targets[i];

	for (int i = 0; i < 20; i++)
	{
		*tmpIntern = rhs._officeBlocks[i].getIntern();
		*tmpSigner = rhs._officeBlocks[i].getSigner();
		*tmpExecutioner = rhs._officeBlocks[i].getExecutor();

		_officeBlocks[i].setIntern(*tmpIntern);
		_officeBlocks[i].setSigner(*tmpSigner);
		_officeBlocks[i].setExecutor(*tmpExecutioner);
	}

	_officesCount = rhs._officesCount;
	_bureaucratsCount = rhs._bureaucratsCount;
	_targetsCount = rhs._targetsCount;

	delete tmpIntern;
	delete tmpSigner;
	delete tmpExecutioner;
	return *this;
}

void CentralBureaucracy::_generateInterns()
{
	Intern noname;

	for (int i = 0; i < 20; i++)
		_officeBlocks[i].setIntern(noname);
}

void CentralBureaucracy::feedBureaucrat(Bureaucrat &bureaucrat)
{
	if (_officesCount < 20 && _bureaucratsCount < 40)
	{
		_bureaucratsCount++;
		if (_bureaucratsCount % 2)
		{
			_officeBlocks[_officesCount].setExecutor(bureaucrat);
			_officesCount++;
		}
		else
			_officeBlocks[_officesCount].setSigner(bureaucrat);
	}
	else
		std::cout << "Cannot add more Bureaucrats. Central Bureaucracy is full" << std::endl;
}

void CentralBureaucracy::queueUp(std::string obj)
{
	if (_targetsCount < 100)
	{
		_targets[_targetsCount] = obj;
		_targetsCount++;
	}
	else
		std::cout << "Cannot add more Targets. Central Bureaucracy is full" << std::endl;
}

void CentralBureaucracy::doBureaucracy()
{

}
