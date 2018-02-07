#include "stdafx.h"
#include <iostream>

namespace Constants
{
	extern const int ten(10);
	extern const int five(5);
}

namespace Functions
{
	extern void print(int x)
	{
		std::cout << x << "\n";
	}
}