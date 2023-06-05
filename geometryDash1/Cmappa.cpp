#include "Cmappa.h"

Cmappa::Cmappa()
{
}

void Cmappa::disegnaMappa(int& leftbound, int& rightbound, char keyUp, int skin)
{
	char carattere;
	Cbase base;
	bool confronta = false;
	
	
	if (keyUp == ' ' && !salto) {
		salto = true;
	}


 	if (salto && counterProcessoSalto < 4 && counterProcessoSalto >= 0) {

		switch (counterProcessoSalto) {
		case 3:
		case 2:
			gravita(!versoGravita);
			break;
		case 1:
		case 0:
			gravita(versoGravita);
			break;
		}

		counterProcessoSalto--;
	}
	else {
		counterProcessoSalto = 3;
		salto = false;

		if (keyUp == ' ' && !salto) {
			salto = true;
		}
		if (salto && counterProcessoSalto < 4 && counterProcessoSalto >= 0) {

			switch (counterProcessoSalto) {
			case 3:
			case 2:
				gravita(!versoGravita);
				break;
			case 1:
			case 0:
				gravita(versoGravita);
				break;
			}

			counterProcessoSalto--;
		}
		else
		{
			gravita(versoGravita);
		}
	}

	std::string checkPortale = "";

	confronta = area.inizializzaGiocatore(r, c, salto, checkPortale);

	
	if (checkPortale == "portale") {
		versoGravita = false;//contrario
	}
	if (checkPortale == "fine_portale") {
		versoGravita = true; //normale
	}
	
	

	if (c < COLONNE) {
		c++;
	}




	//attivare i commenti da qua fino alla fine per far si che quando il nostro cubetto trova un ostacolo termini la mappa
	//aggiungerò successivamente che quando incontra qualcosa stampa grazie alla draw line HAI PERSO
	if (confronta == false)
	{
		for (int i = 0; i < RIGHE; i++)
		{
			for (int j = leftbound; j < rightbound; j++)
			{
				carattere = area.getAt(i, j);

				int x = (j - leftbound) * PIXMUL;
				int y = i * PIXMUL;

				switch (carattere)
				{
				case CUBO:
					if (true)
					{
						CcuboOstacolo cubo;
						cubo.setCoordinate(x, y);
						cubo.disegnaCubo();
					}
					break;
				case DOPPIO:
					if (true)
					{
						CdoppioOstacolo doppio;
						doppio.setCoordinate(x, y);
						doppio.disegnaDoppio();
					}
					break;
				case TRIANGOLO:
					if (true)
					{
						CtrinagoloOstacolo triangolo;
						triangolo.setCoordinate(x, y, LATO, LATO);
						triangolo.disegnaTriangolo();
					}
					break;
				case SPUNTONI:
					if (true)
					{
						CspuntoniOstacolo sputoni;
						sputoni.setCoordinate(x, y, LUNGHEZZASPUNTONI, LATO);
						sputoni.disegnaSpuntoni();
					}
					break;
				case PIATTAFORMA:
					if (true)
					{
						CpiattaformaOstacolo piattaforma;
						piattaforma.setCoordinate(x, y);
						piattaforma.disegnaPiattaforma();
					}
					break;
				case TRIANGOLOINVERSO:
					if (true)
					{
						CtriangoloInversoOstacolo triangoloInverso;
						triangoloInverso.setCoordinate(x, y, LATO, LATO);
						triangoloInverso.disegnaTriangoloInverso();
					}
					break;
				case PORTALE:
				case FINEPORTALE:
					if (true)
					{
						CportaleOstacolo portale;
						portale.setCoordinate(x, y);
						portale.disegnaPortale();
					}
					break;
				case SPUNTONIINVERSI:
					if (true)
					{
						CspuntoniInversiOstacolo spuntoniInversi;
						spuntoniInversi.setCoordinate(x, y, LUNGHEZZASPUNTONI, LATO);
						spuntoniInversi.disegnaSpuntoniInversi();
					}
					break;
				case GIOCATORE:
					if (true)
					{
						Cgiocatore giocatore;
						giocatore.setSkin(skin);
						giocatore.setCoordinate(x, y);
						giocatore.disegnaGiocatore();
					}
					break;

				case BASE:
					if (true)
					{
						Cbase base;
						base.disegnaBase(x, y);
					}
					break;
				}

			}
		}
	}
	else
	{
		Wait(200);
		//musica sconfitta

		area = CareaDiGioco();
		counterProcessoSalto = 3;
		leftbound = LEFTBOUNDSTART;
		rightbound = WIDTHFINESTRA;
		this->c = CSTARTOMINO;
		this->r = RSTARTOMINO;
		this->versoGravita = true;
	}

}


//verso: true -> normale, false -> opposta 
void Cmappa::gravita(bool verso) {

	bool gravitaStop = false;
	area.controllaGravita(r, c, salto, gravitaStop, verso,versoGravita, counterProcessoSalto);


	if (!gravitaStop)
	{

		if (!verso && r > 0) {
			//verso l'alto
			r--;
		}
		if (verso && r < RSTARTOMINO) {
			//verso il basso
			r++;
		}
	}



}

