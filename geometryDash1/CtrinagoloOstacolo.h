#pragma once
#include "drawing.h"
#include "define.h"
class CtrinagoloOstacolo
{
private:
	int base, altezza;
	int xA, xB, xC, yA, yB, yC;
public:
	CtrinagoloOstacolo();
	void disegnaTriangolo();
	void setCoordinate(int Xinizio, int Yinizio, int base, int altezza);
};

