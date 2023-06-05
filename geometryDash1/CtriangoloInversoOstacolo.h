#pragma once
#include "define.h"
#include "drawing.h"

class CtriangoloInversoOstacolo
{
private:
	int base, altezza;
	int xA, xB, xC, yA, yB, yC;
public:
	CtriangoloInversoOstacolo();
	void disegnaTriangoloInverso();
	void setCoordinate(int Xinizio, int Yinizio, int base, int altezza);
};

