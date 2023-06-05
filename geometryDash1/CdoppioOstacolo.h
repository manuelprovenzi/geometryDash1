#pragma once
#include "drawing.h"
#include "define.h"
class CdoppioOstacolo
{
private:
	int base, altezza;
	int x, y;
public:
	CdoppioOstacolo();
	void disegnaDoppio();
	void setCoordinate(int x, int y);
};

