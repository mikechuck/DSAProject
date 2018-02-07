#include "stdafx.h"
#include <iostream>
#include <bitset>

static int internalVariable(1);
extern int externalVariable(2);

void runBitOpertations()
{
	const unsigned char isHungry = 1 << 0;
	const unsigned char isSad = 1 << 1;
	const unsigned char isMad = 1 << 2;
	const unsigned char isHappy = 1 << 3;
	const unsigned char isLaughing = 1 << 4;
	const unsigned char isAsleep = 1 << 5;
	const unsigned char isDead = 1 << 6;
	const unsigned char isCryign = 1 << 7;

	unsigned char myCharacter = 0;

	myCharacter |= isHappy | isLaughing;

	//0000 0000
	//0000 1000
	//0001 0000
	//---------
	//0001 1000


	myCharacter &= ~isHappy;
	//0001 1000
	//1111 0111
	//---------
	//0001 0000

	std::cout << "myCharacter: " << std::bitset<8>(myCharacter) << std::endl;

	std::bitset<8> bits(isHungry);
	std::cout << "bits: " << bits << "\n";

	//This sets the 2nd index, since isSad = 0000 0010 (1 is at the 1st index), which resolves to 2
	bits.set(isSad);
	std::cout << "bits: " << bits << "\n";

	bits.flip(3);
	std::cout << "bits: " << bits << "\n";

	bits.reset(1);
	std::cout << "bits: " << bits << "\n";

	std::cout << "internalVariable:\t" << internalVariable << "\n";
	std::cout << "externalVariable:\t" << externalVariable << "\n";
}

void runColorBitOperations(int ten, int five) 
{
	const unsigned int redBits = 0xFF000000;
	const unsigned int greenBits = 0x00FF0000;
	const unsigned int blueBits = 0x0000FF00;
	const unsigned int alphaBits = 0x000000FF;

	

	std::cout << "Enter a 32-bit RGBA color value in hexadecimal (e.g. FF7F3300): ";
	unsigned int pixel;
	std::cin >> std::hex >> pixel;

	std::cout << "pixel:\t\t" << std::bitset<32>(pixel) << "\n";
	std::cout << "redBits:\t" << std::bitset<32>(redBits) << "\n";

	unsigned char red = (pixel & redBits) >> 24;
	
	std::cout << "the red bits are:\t\t" << std::bitset<8>(red) << "\n";

	std::cout << "internalVariable:\t" << internalVariable << "\n";
	std::cout << "externalVariable:\t" << externalVariable << "\n";
}