// DSAProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//Libraries
#include <iostream>
#include <bitset>

//Headers
#include "BitOperations.h"
#include "TypeCoercion.h"
#include "StringLib.h"
#include "Enums.h"

//Global Variables
#include "GlobalVariables.h"

//Enumerators
#include "Enums.h"

//Namespaces
#include "Namespaces.h"


int main()
{

	ItemType itemType(ItemType::SWORD);

	std::cout << "Your are carrying a " << getItemType(itemType) << "\n";


    return 0;
}

