#include "stdafx.h"

#include <string>
#include <iostream>

void runStringLib()
{
	std::string myString = "hello!";
	std::string myName("John");

	std::cout << "What is your name?\n";
	std::string name;
	std::getline(std::cin, name);

	std::cout << "What is your age?\n";
	std::string age;
	std::cin >> age;

	//Ignores up to 32767 characters until a \n is removed
	std::cin.ignore(32767, '\n');
	
	std::cout << "What is your favorite color?\n";
	std::string color;
	std::getline(std::cin, color);

	std::cout << "Your name is " << name << ", your age is "
		<< age << ", and you favorite color is " << color << std::endl;
}