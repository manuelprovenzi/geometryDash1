#pragma once
#define maxLettere 1000
#include "drawing.h"
class Clettere
{
private:
	int grandezza;
	int xiniziale;
	int yIniziale;
	char Lettere[maxLettere];
	Color colore;
	int numeroLettere;
	int spessore;
public:
	Clettere();
	Clettere(int grandezza, int xiniziale, int yIniziale, char Lettere[maxLettere], Color colore, int numeroLettere, int spessore);
	void creaLettera(char lettera);
	void creaParola();

};
