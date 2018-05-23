//
// Created by bruteflow on 7/9/17.
//

#include "Logger.hpp"
#include <string>
#include <iostream>
#include <fstream>

Logger::Logger()
	:_fileName("default.name")
{
}

Logger::Logger(std::string fileName)
	:_fileName(fileName)
{
}

Logger::~Logger(){

}

void Logger::log(std::string const &dest, std::string const &message){

	std::string tmp = makeLogEntry(message);

	std::string destanations[2] = {"file", "console"};

	void (Logger::*destList[2])(std::string arLog) = {
			&Logger::logToFile,
			&Logger::logToConsole
	};

	for (int i = 0; i < 2; i ++)
		if (destanations[i].compare(dest) == 0)
			(this->*destList[i])(tmp);
}

void Logger::logToConsole(std::string log){
	std::cout << log
			  << std::endl;
}

void Logger::logToFile(std::string log){

	std::ofstream _writeToFile;
	bool isOpenWrite;
	isOpenWrite = openFileForWrite(&_writeToFile, (_fileName));

	if (!isOpenWrite){
		std::cerr << "File open error."
				  << std::endl;
		exit(1);
	}
	_writeToFile << log
				 << std::endl;
	_writeToFile.close();
}

std::string Logger::makeLogEntry(std::string const str){
	return _getTimestamp() + str;
}

std::string Logger::_getTimestamp(void){
	time_t rawtime;
	struct tm *timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", timeinfo);
	std::string str(buffer);

	return str;
}

bool Logger::openFileForWrite(std::ofstream *file, std::string fileName){
	file->open((fileName), std::ios::out);
	if (file->is_open())
		return true;
	else
		return false;
}