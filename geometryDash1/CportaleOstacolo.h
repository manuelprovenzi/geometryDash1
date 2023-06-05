#pragma once
#include "define.h"
#include "drawing.h"
class CportaleOstacolo
{
private:
	int raggio;
	int x, y;
public:
	CportaleOstacolo();
	void disegnaPortale();
	void setCoordinate(int x, int y);
};

