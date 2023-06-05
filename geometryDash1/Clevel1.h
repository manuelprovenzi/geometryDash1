#pragma once
#include "define.h"
#include "Cmappa.h"
#include "Cgiocatore.h"
#include "CareaDiGioco.h"
class Clevel1
{
private:
	Cgiocatore giocatore;
	CareaDiGioco area;
	int c = 5;
	Cmappa mappa;
public:
	Clevel1();
	void Game(int skin);
};

