#pragma once
#include "drawing.h"
#include "define.h"
class CcuboOstacolo
{
private:
	int lato;
	int x, y;
public:
	CcuboOstacolo();
	void disegnaCubo();
	void setCoordinate(int x, int y);
};

