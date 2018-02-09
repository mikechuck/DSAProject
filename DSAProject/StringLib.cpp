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
	std::getline(std::cin, age);

	std::cout << "Your name is " << name << " and your age is " << age << std::endl;
}