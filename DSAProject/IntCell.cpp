#include "stdafx.h"

/*
* A classs for simulating an integer memory cell
*/
class IntCell
{
public:
	IntCell() { 
		storedValue = 0;
	}
		
	IntCell(int initialValue) { 
		storedValue = initialValue;
	}

	int read() {
		return storedValue;
	}

	void write(int x) {
		storedValue = x;
	}

private:
	int storedValue;

};