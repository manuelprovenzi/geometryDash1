#include "CportaleOstacolo.h"

CportaleOstacolo::CportaleOstacolo()
{
	this->raggio = LATO;
	this->x = 0;
	this->y = 0;
}

void CportaleOstacolo::disegnaPortale()
{
	DrawCircle(x, y, raggio, COLORE, false);
}

void CportaleOstacolo::setCoordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}
