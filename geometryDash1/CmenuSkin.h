#pragma once
#include "Cgiocatore.h"
#include "define.h"
class CmenuSkin
{
private:
	int valSkin;
	int x, y;
	Cgiocatore giocatore;

public:
	CmenuSkin();
	void disegnaMenu();
	bool seCliccato1(int x, int y);
	bool seCliccato2(int x, int y);
	bool seCliccato3(int x, int y);
	int getValSkin();
};

