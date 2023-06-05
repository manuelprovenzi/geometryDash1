#include "CcuboOstacolo.h"

CcuboOstacolo::CcuboOstacolo()
{
	this->lato = LATO;
	this->x = 0;
	this->y = 0;
}

void CcuboOstacolo::disegnaCubo()
{
	DrawRectangle(x, y, this->lato, this->lato, COLORE, false);
}

void CcuboOstacolo::setCoordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}
