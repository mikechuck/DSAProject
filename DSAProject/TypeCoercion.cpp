#include "stdafx.h"
#include <iostream>

/*
	Implicit type coercion heirarchy:

	long double (highest)
	double
	float
	unsigned long long
	long long
	unsigned long
	long
	unsigned int
	int (lowest)

*/

void runTypeCoercion()
{
	int integer(3);

	//C-Style casts: should generally be avoided
	float f = (float)integer;
	int i = int(f);

	//static_case operator: use this instead! Less powerfull.
	char c = 'z';
	std::cout << static_cast<int>(c) << "\n";

	//Use this operator to be able to cast without the compiler complaining 
	// about larger to smaller casting
}