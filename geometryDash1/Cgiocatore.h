#pragma once
#include "define.h"
#include "drawing.h"
#include "CareaDiGioco.h"
class Cgiocatore
{
private:
	int x, y;
	int lato;
	int altezzaSalto;
	int i;
	//int velocitaSalto;
	int skin;
public:
	Cgiocatore();
	void disegnaGiocatore();
	void setCoordinate(int x, int y);
	void setSkin(int skin);
};

