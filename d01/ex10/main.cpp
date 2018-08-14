#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

bool openFileForRead(std::ifstream *file, std::string fileName){
	file->open(fileName.c_str(), std::ios::in);
	if (file->is_open())
		return true;
	else
		return false;
}

std::string stringSlurp(std::ifstream &readFile){
	std::stringstream sstream;
	sstream << readFile.rdbuf();
	return sstream.str();
}

void cat_echo(void){

	std::string echo;
	while (std::getline(std::cin, echo))
	{
		std::cout << echo << std::endl;
		echo.clear();
	}
	std::cin.clear();

//	std::cin.clear(std::istream::goodbit);
//	std::cin.clear(std::istream::eofbit);
//	std::cin.clear(std::istream::failbit);
//	std::ios_base::iostate state = std::cin.rdstate();
//	if( state == (std::istream::eofbit | std::istream::failbit))
//	{
//		std::cout << "eofbit and failbit set" << std::endl;
//	}
//	std::cin.clear(std::cin.rdstate() & ~std::istream::failbit);
}

void cat_open_and_display(std::string fileName){
	std::ifstream readFile;
	std::string readBuffer;

	bool isOpenRead;
	isOpenRead = openFileForRead(&readFile, fileName);
	if (!isOpenRead){
		std::cout << "cat: "
				  << fileName
				  << ": No such file or directory"
				  << std::endl;
	}
	if (isOpenRead){
		readBuffer = stringSlurp(readFile);
		std::cout << readBuffer;
		readFile.close();
	}
}

int main(int ac,char **av){

	bool inputRead;
	if (ac >= 2){
		for (int i = 1; i < ac; i++)
		{
			std::string tmp = av[i];
			inputRead = false;
			if (av[i][0] == '-' && (strlen(av[i]) == 1))
			{
				cat_echo();
				inputRead = true;
			}
			if (inputRead)
				continue;
			else
				cat_open_and_display(av[i]);
		}
	} else {
		cat_echo();
	}
}