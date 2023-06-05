#pragma once
#include "drawing.h"
#include "define.h"
#include "CtriangoloInversoOstacolo.h"
class CspuntoniInversiOstacolo
{
private:
	CtriangoloInversoOstacolo triangolo;
	int lunghezza, altezza;
	int Xinizio, Yinizio;
public:
	CspuntoniInversiOstacolo();
	void disegnaSpuntoniInversi();
	void setCoordinate(int Xinizio, int Yinizio, int lunghezza, int altezza);
};

