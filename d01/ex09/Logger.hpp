//
// Created by bruteflow on 7/9/17.
//

#ifndef D01_E09_LOGGER_HPP
#define D01_E09_LOGGER_HPP

#include <string>

class Logger{
public:
	Logger();
	Logger(std::string fileNmae);
	~Logger();

	void 		log(std::string const &dest, std::string const &message);

private:
	void 		logToConsole(std::string log);
	void 		logToFile(std::string log);
	std::string makeLogEntry(std::string str);
	std::string _getTimestamp(void);
	bool 		openFileForWrite(std::ofstream *file, std::string fileName);
	std::string _fileName;
};


#endif //D01_E09_LOGGER_HPP
