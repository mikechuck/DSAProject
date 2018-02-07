// DSAProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Libraries
#include <iostream>
#include <bitset>

//Headers
#include "IntCell.h"
#include "bitOperations.h"

//Constants
#include "CustomConstants.h"


int main()
{
	runBitOpertations();
	runColorBitOperations(Constants::ten, Constants::five);

	//std::cout << "(main) internalVariable:\t" << internalVariable << "\n";
	std::cout << "(main) externalVariable:\t" << externalVariable << "\n";

    return 0;
}

