#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

bool openFileForRead(std::ifstream *file, std::string fileName){
	file->open(fileName, std::ios::in);
	if (file->is_open())
		return true;
	else
		return false;
}

bool openFileForWrite(std::ofstream *file, std::string fileName){
	file->open((fileName), std::ios::out);
	if (file->is_open())
		return true;
	else
		return false;
}

std::string stringSlurp(std::ifstream &readFile) {
	std::stringstream sstream;
	sstream << readFile.rdbuf();
	return sstream.str();
}

int main(int ac, char **av){
	std::string _fileName, s1, s2, readLine, writeFileName, readBuffer;
	std::ifstream _readFile;
	std::ofstream _writeToFile;
	std::string::size_type pos = 0;
	bool isOpenRead;
	bool isOpenWrite;
	if (ac == 4){
		_fileName = av[1];
		s1 = av[2];
		s2 = av[3];
		writeFileName = _fileName + ".replace";

		isOpenRead = openFileForRead(&_readFile, _fileName);
		isOpenWrite = openFileForWrite(&_writeToFile, (writeFileName));

		if (!isOpenRead || !isOpenWrite){
			std::cerr << "File open error."
					  << std::endl;
			exit(1);
		}
		if (s1.length() <= 0 || s2.length() <= 0){
			std::cerr << "One of the strings is empty"
					  << std::endl;
			exit(1);
		}
		if (readBuffer.max_size() < (unsigned long)_readFile.tellg()){
			std::cerr << "File to big"
					  << std::endl;
			exit(1);
		}
		if (!_writeToFile.is_open()){
			std::cerr << "File creation fail"
					  << std::endl;
			exit(1);
		}

		readBuffer = stringSlurp(_readFile);
		while ((pos = readBuffer.find(s1, pos)) != std::string::npos){
			readBuffer.erase(pos, s1.length());
			readBuffer.insert(pos, s2);
			pos += s2.length();
		}
		_writeToFile << readBuffer;
		_writeToFile.close();
		_readFile.close();

	} else {
		std::cerr << std::endl
				  << "Usage: filename s1 s2"
				  << std::endl
				  << "filename - existing file, s1 - string to find, s2 - string to replace"
				  << std::endl;
		exit(1);
	}
}