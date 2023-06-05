#include "CpiattaformaOstacolo.h"

CpiattaformaOstacolo::CpiattaformaOstacolo()
{
	this->base = LATO;
	this->altezza = LATO / 2;
	this->x = 0;
	this->y = 0;
}

void CpiattaformaOstacolo::disegnaPiattaforma()
{
	DrawRectangle(x, y, this->base, this->altezza, COLORE, false);
}

void CpiattaformaOstacolo::setCoordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}