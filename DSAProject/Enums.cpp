#include "stdafx.h"
#include <iostream>

enum class Color {
	BLACK,
	BLUE,
	RED,
	YELLOW,
};

enum class ItemType
{
	SWORD,
	TORCH,
	POTION
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
	case Color::BLACK:
		std::cout << "Black\n";
		break;
	case Color::BLUE:
		std::cout << "Blue\n";
		break;
	case Color::RED:
		std::cout << "Red\n";
		break;
	case Color::YELLOW:
		std::cout << "Yellow\n";
		break;
	}
}

std::string getItemType(ItemType itemType)
{

	switch (itemType)
	{
	case ItemType::SWORD:
		return std::string("Sword");
	case ItemType::TORCH:
		return std::string("Torch");
	case ItemType::POTION:
		return std::string("Potion");
	default:
		return std::string("Unknown Item");
	}
}

	