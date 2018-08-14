#include <string>
#include <iostream>
#include "Logger.hpp"

int main(void){
	Logger console;
	Logger file("tmp.test");

	console.log("console", "hello world");
	console.log("file", "hello world");
	file.log("file", "hello world");

}