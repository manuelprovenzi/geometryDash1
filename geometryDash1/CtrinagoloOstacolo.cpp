#include "CtrinagoloOstacolo.h"

CtrinagoloOstacolo::CtrinagoloOstacolo()
{
	this->base = LATO;
	this->altezza = LATO;
	this->xA = 0;
	this->xB = 0;
	this->xC = 0;
	this->yA = 0;
	this->yB = 0;
	this->yC = 0;
}

void CtrinagoloOstacolo::disegnaTriangolo()
{
	DrawLine(xA, yA, xB, yB, 1, COLORE);
	DrawLine(xA, yA, xC, yC, 1, COLORE);
	DrawLine(xB, yB, xC, yC, 1, COLORE);
}

void CtrinagoloOstacolo::setCoordinate(int Xinizio, int Yinizio, int base, int altezza)
{
	this->xA = Xinizio;
	this->yA = Yinizio + altezza;
	this->base = base;
	this->altezza = altezza;
	this->xB = xA + base / 2;
	this->yB = yA - altezza;
	this->yC = yA;
	this->xC = xA + base;
}
