#pragma once
#include "drawing.h"
#include "define.h"
#include "CtrinagoloOstacolo.h"
class CspuntoniOstacolo
{
private:
	CtrinagoloOstacolo triangolo;
	int lunghezza, altezza;
	int Xinizio, Yinizio;
public:
	CspuntoniOstacolo();
	void disegnaSpuntoni();
	void setCoordinate(int Xinizio, int Yinizio, int lunghezza, int altezza);
};

