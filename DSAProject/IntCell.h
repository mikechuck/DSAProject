#pragma once
#include "stdafx.h"

#ifndef INTCELL_H
#define INTCELL_H

class IntCell 
{
private:
	int storedValue;

public:
	IntCell(int initialValue);

	int read();
	void write(int x);
};

#endif