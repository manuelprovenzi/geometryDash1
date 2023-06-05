#pragma once
#include "Cbase.h"
#include "CcuboOstacolo.h"
#include "CdoppioOstacolo.h"
#include "CtrinagoloOstacolo.h"
#include "CspuntoniOstacolo.h"
#include "CpiattaformaOstacolo.h"
#include "CtriangoloInversoOstacolo.h"
#include "CportaleOstacolo.h"
#include "Cgiocatore.h"
#include "define.h"
#include <iostream>
#include <cstdio>

class CareaDiGioco
{
private:
	char campo[RIGHE][COLONNE];
	CcuboOstacolo cubi[NCubi];
	CdoppioOstacolo doppio[NCubi];
	CtrinagoloOstacolo triangoli[NTriangoli];
	bool controllaPosizione(int r, int c, bool& salto);
	int aiuto;
public:
	char campoStampa[RIGHE][WIDTH / PIXMUL];

	CareaDiGioco();
	void inizializzaBase();
	void inizializzaCubi();
	void inizializzaDoppi();
	void inizializzaTriangoli();
	void inizializzaSpuntoni();
	void inizializzaPiattaforma();
	void inizializzaTriangoloInverso();
	void inizializzaPortale();
	void inizializzaSpuntoniInversi();
	bool inizializzaGiocatore(int r, int c,bool &salto, std::string& output);
	bool isOn(int r, int c);
	std::string checkTeletrasporto(int r, int c);



	char getAt(int r, int c);

	void controllaGravita(int r, int c, bool& salto, bool& gravitaStop,bool& verso ,bool versoGravita , int counterProcessoSalto);

};

