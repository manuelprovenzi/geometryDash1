#pragma once
#include "define.h"
#include "drawing.h"

class CpiattaformaOstacolo
{
private:
	int base, altezza;
	int x, y;
public:
	CpiattaformaOstacolo();
	void disegnaPiattaforma();
	void setCoordinate(int x, int y);
};

