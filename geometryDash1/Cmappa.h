#pragma once
#include "drawing.h"
#include "Cbase.h"
#include "CcuboOstacolo.h"
#include "CtrinagoloOstacolo.h"
#include "CspuntoniOstacolo.h"
#include "CpiattaformaOstacolo.h"
#include "CtriangoloInversoOstacolo.h"
#include "CdoppioOstacolo.h"
#include "CareaDiGioco.h"
#include "CportaleOstacolo.h"
#include "CspuntoniInversiOstacolo.h"
#include "Cgiocatore.h"
#include "define.h"

class Cmappa
{
private:
	Cgiocatore giocatore;
	int c = CSTARTOMINO;
	int r = RSTARTOMINO;
	int counterProcessoSalto = 3;
	CareaDiGioco area;
	bool salto = false;
	bool versoGravita = true;

public:
	Cmappa();
	void disegnaMappa(int& leftbound, int& rightbound, char keyUp, int skin);
	void gravita(bool verso);
};

