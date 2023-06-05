#include "Clevel1.h"
#include "drawing.h"

Clevel1::Clevel1()
{
}

void Clevel1::Game(int skin)
{
	//int leftbound = COLONNE - WIDTHFINESTRA, rightBound = COLONNE;
	int leftbound = LEFTBOUNDSTART, rightBound = WIDTHFINESTRA;

	
	while (rightBound < COLONNE) {
		
		Clear();
		Draw("sfondo.png", 0, 0);
		//giocatore.Salta();
		
		mappa.disegnaMappa(leftbound, rightBound, LastKey(), skin);
		
		leftbound += 1;
		rightBound += 1;
		Wait(TEMPOGIOCO);
		

		/*
		Clear();
		giocatore.Salta();
		mappa.disegnaMappa(leftbound, rightBound);
		giocatore.disegnaGiocatore();
		leftbound += 1;
		rightBound += 1;
		Wait(TEMPOGIOCO);
		*/
	}
}
