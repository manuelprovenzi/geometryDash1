#include "CdoppioOstacolo.h"

CdoppioOstacolo::CdoppioOstacolo()
{
	this->base = LATO;
	this->altezza = LATO * 2;
	this->x = 0;
	this->y = 0;
}


void CdoppioOstacolo::disegnaDoppio()
{
	DrawRectangle(x, y - altezza / 2, this->base, this->altezza, COLORE, false);
}

void CdoppioOstacolo::setCoordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}
