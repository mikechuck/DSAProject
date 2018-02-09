#include "stdafx.h"
#include <iostream>

//internalVariable cannot be seen by other files (only this one) since it doesn't have an "external" type
static int internalVariable(1);

//externalVariable can be seen by other files (as well as this one), and is included in the header file
extern int externalVariable(2);

void printVariables()
{
	std::cout << "internalVariable:\t" << internalVariable << "\n";
	std::cout << "externalVariable:\t" << externalVariable << "hello\n";
}
