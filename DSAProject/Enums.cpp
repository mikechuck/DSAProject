#include "stdafx.h"
#include <iostream>

enum Color {
	COLOR_BLACK,
	COLOR_BLUE,
	COLOR_RED,
	COLOR_YELLOW,
};

void runEnums()
{
	std::cout << "Enter a number from 0 to 3: \n";
	int inputColor;
	std::cin >> inputColor;

	Color color = static_cast<Color>(inputColor);

	std::cout << "You've picked ";

	switch (color)
	{
		case COLOR_BLACK: 
			std::cout << "Black\n";
			break;
		case COLOR_BLUE: 
			std::cout << "Blue\n";
			break;
		case COLOR_RED: 
			std::cout << "Red\n";
			break;
		case COLOR_YELLOW: 
			std::cout << "Yellow\n";
			break;
	}
}