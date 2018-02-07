// DSAProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Libraries
#include <iostream>
#include <bitset>

//Headers
#include "IntCell.h"
#include "bitOperations.h"

//Global Variables
#include "GlobalVariables.h"

//Namespaces
#include "Namespaces.h"


int main()
{
	//Bitwise operation functions, using the Constants namespace from Namespaces
	runBitOpertations();
	runColorBitOperations(Constants::ten, Constants::five);

	std::cout << "\n------------------------------------\n\n";

	//Printing external global variable fomr GlobalVariables
	std::cout << "(main) externalVariable:\t" << externalVariable << "\n";
	//Printing internal and external global variables in GlobalVariables
	printVariables();

	std::cout << "\n------------------------------------\n\n";
	
	//Using the Functions namespace from Namespaces
	Functions::print(int(5));

    return 0;
}

