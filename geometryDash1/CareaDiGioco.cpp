#include "CareaDiGioco.h"
#include <string>

bool CareaDiGioco::controllaPosizione(int r, int c, bool& salto)
{
	bool morto = false;
	

 	if (campo[r][c] == TRIANGOLO)
	{
		morto = true;
		salto = false;
	}
	else if (campo[r][c] == TRIANGOLOINVERSO)
	{
		morto = true;
		salto = false;
	}
    else if (campo[r][c] == SPUNTONI || campo[r][c] == CARATTERESPECIALESPUNTONI)
	{
		morto = true;
		salto = false;
	}
	else if (campo[r][c] == SPUNTONIINVERSI || campo[r][c] == CARATTERESPECIALESPUNTONI)
	{
		morto = true;
		salto = false;
	}
	if (campo[r][c] == CUBO)
	{
		morto = true;
		salto = false;

	}
	else if (campo[r][c] == CARATTERESPECIALEDOPPIO || campo[r][c] == DOPPIO)
	{
		morto = true;
		salto = false;
	}
	else if (campo[r][c] == PIATTAFORMA)
	{
		morto = true;
		salto = false;
	}
	
	
	return morto;
}

CareaDiGioco::CareaDiGioco()
{
	for (int i = 0; i < RIGHE; i++)
	{
		for (int j = 0; j < COLONNE; j++)
		{
			this->campo[i][j] = ' ';
		}
	}

	inizializzaBase();
	inizializzaCubi();
	inizializzaDoppi();
	inizializzaTriangoli();
	inizializzaSpuntoni();
	inizializzaPiattaforma();
	inizializzaTriangoloInverso();
	inizializzaPortale();
	inizializzaSpuntoniInversi();
}

void CareaDiGioco::inizializzaBase()
{
	
	for (int j = 0; j < COLONNE; j++)
	{
		this->campo[RIGHE - 1][j] = BASE;
	}
	
}

void CareaDiGioco::inizializzaCubi()
{
	campo[10][20] = CUBO;
	campo[10][29] = CUBO;
	campo[10][49] = CUBO;
	campo[10][68] = CUBO;

	campo[9][72] = CUBO;
	campo[9][73] = CUBO;
	campo[9][74] = CUBO;
	campo[9][75] = CUBO;
	campo[9][76] = CUBO;
	campo[9][77] = CUBO;
	campo[9][78] = CUBO;
	campo[9][79] = CUBO;
	campo[9][80] = CUBO;
	campo[9][81] = CUBO;
	campo[9][82] = CUBO;
	campo[8][82] = CUBO;
	campo[9][83] = CUBO;
	campo[9][84] = CUBO;
	campo[9][85] = CUBO;
	campo[9][86] = CUBO;

	campo[6][72] = CUBO;
	campo[6][73] = CUBO;
	campo[6][74] = CUBO;
	campo[6][75] = CUBO;
	campo[6][76] = CUBO;
	campo[6][77] = CUBO;
	campo[6][78] = CUBO;
	campo[6][79] = CUBO;
	campo[6][80] = CUBO;
	campo[6][81] = CUBO;
	campo[6][82] = CUBO;
	campo[6][83] = CUBO;
	campo[6][84] = CUBO;
	campo[6][85] = CUBO;
	campo[6][86] = CUBO;

	campo[3][121] = CUBO;
	campo[3][122] = CUBO;
	campo[3][123] = CUBO;
	campo[3][124] = CUBO;
	campo[3][125] = CUBO;
	campo[3][126] = CUBO;
	campo[3][127] = CUBO;
	campo[3][128] = CUBO;
	campo[3][129] = CUBO;
	campo[3][130] = CUBO;
	campo[3][131] = CUBO;
	campo[3][132] = CUBO;
	campo[3][133] = CUBO;
	campo[3][134] = CUBO;
	campo[3][135] = CUBO;
	campo[3][136] = CUBO;
	campo[3][137] = CUBO;
	campo[3][138] = CUBO;
	campo[3][139] = CUBO;
	campo[3][140] = CUBO;
	campo[3][141] = CUBO;
	campo[3][142] = CUBO;
	campo[3][143] = CUBO;
	campo[3][144] = CUBO;
	campo[3][145] = CUBO;
	campo[3][146] = CUBO;
	campo[3][147] = CUBO;
	campo[3][148] = CUBO;
	campo[3][149] = CUBO;
	campo[3][150] = CUBO;
	campo[3][151] = CUBO;
	campo[3][152] = CUBO;
	campo[3][153] = CUBO;
	campo[3][154] = CUBO;
	campo[3][155] = CUBO;
	campo[3][156] = CUBO;
	campo[3][157] = CUBO;
	campo[3][158] = CUBO;
	campo[3][159] = CUBO;
	campo[3][160] = CUBO;
	campo[3][161] = CUBO;
	campo[3][162] = CUBO;
	campo[3][163] = CUBO;
	campo[3][164] = CUBO;
	campo[3][165] = CUBO;

	campo[4][132] = CUBO;
	campo[4][143] = CUBO;

	campo[4][158] = CUBO;
}

void CareaDiGioco::inizializzaDoppi()
{
	campo[10][32] = DOPPIO;
	campo[9][32] = CARATTERESPECIALEDOPPIO;

	campo[10][71] = DOPPIO;
	campo[9][71] = CARATTERESPECIALEDOPPIO;

	campo[10][103] = DOPPIO;
	campo[9][103] = CARATTERESPECIALEDOPPIO;

	campo[5][135] = DOPPIO;
	campo[4][135] = CARATTERESPECIALEDOPPIO;

	campo[5][161] = DOPPIO;
	campo[4][161] = CARATTERESPECIALEDOPPIO;
}

void CareaDiGioco::inizializzaTriangoli()
{
	campo[10][21] = TRIANGOLO;
	campo[10][48] = TRIANGOLO;
	campo[6][101] = TRIANGOLO;
}

void CareaDiGioco::inizializzaSpuntoni()
{
	campo[10][30] = SPUNTONI;
	campo[10][53] = SPUNTONI;
	campo[10][104] = SPUNTONI;

	campo[10][31] = CARATTERESPECIALESPUNTONI;
	campo[10][54] = CARATTERESPECIALESPUNTONI;
	campo[10][105] = CARATTERESPECIALESPUNTONI;
}

void CareaDiGioco::inizializzaPiattaforma()
{
	campo[10][52] = PIATTAFORMA;

	campo[9][89] = PIATTAFORMA;
	campo[9][90] = PIATTAFORMA;
	campo[9][91] = PIATTAFORMA;

	campo[8][92] = PIATTAFORMA;
	campo[8][93] = PIATTAFORMA;
	campo[8][94] = PIATTAFORMA;

	campo[7][98] = PIATTAFORMA;
	campo[7][99] = PIATTAFORMA;
	campo[7][100] = PIATTAFORMA;
	campo[7][101] = PIATTAFORMA;

	campo[5][146] = PIATTAFORMA;
	campo[6][149] = PIATTAFORMA;
	campo[7][152] = PIATTAFORMA;
}

void CareaDiGioco::inizializzaTriangoloInverso()
{
	campo[7][73] = TRIANGOLOINVERSO;
	campo[7][74] = TRIANGOLOINVERSO;
	campo[7][78] = TRIANGOLOINVERSO;
	campo[7][79] = TRIANGOLOINVERSO;
	campo[7][85] = TRIANGOLOINVERSO;

	campo[4][125] = TRIANGOLOINVERSO;
	campo[4][131] = TRIANGOLOINVERSO;
}

void CareaDiGioco::inizializzaPortale()
{
	campo[9][120] = PORTALE;
	campo[6][165] = FINEPORTALE;
}

void CareaDiGioco::inizializzaSpuntoniInversi()
{
	campo[4][141] = SPUNTONIINVERSI;
	campo[4][153] = SPUNTONIINVERSI;

	campo[4][142] = CARATTERESPECIALESPUNTONI;
	campo[4][154] = CARATTERESPECIALESPUNTONI;
}

bool CareaDiGioco::inizializzaGiocatore(int r, int c, bool &salto,std::string& output)
{
	output = checkTeletrasporto(r, c);
	
	//controlla se puo andare in r,c altrimenti rimane quello di prima e si annulla il salto
	if (controllaPosizione(r, c, salto))
	{
		return true;
	}

	for (int i = 0; i < RIGHE; i++)
	{
		for (int j = 0; j < COLONNE; j++)
		{
			if (campo[i][j] == GIOCATORE) {
				campo[i][j] = VUOTO;
			}
		}
	}


	this->campo[r][c] = GIOCATORE; 
	return false;
}

bool CareaDiGioco::isOn(int r, int c)
{
	//controlla che il giocatore non sia su un'altra casella
	/*
	bool controllo = false;
	if (aiuto != 1)
	{
		if (campo[r][c] == VUOTO || campo[r][c] == GIOCATORE)
		{
			controllo = false;
		}
		else
		{
			controllo = true;
			this->aiuto = 1;
		}
		return controllo;
	}
	*/
	//rifare su base salto
	return false;
}


char CareaDiGioco::getAt(int r, int c)
{
	return campo[r][c];
}


void CareaDiGioco::controllaGravita(int r, int c, bool& salto, bool& gravitaStop,bool& verso, bool versoGravita ,int counterProcessoSalto)
{
	bool flag = false;



	if ((campo[r + 1][c] == CUBO) || (campo[r + 1][c] == CARATTERESPECIALEDOPPIO) || (campo[r + 1][c] == PIATTAFORMA))
	{
		if (verso) {
			gravitaStop = true;
			flag = true;
			if (!versoGravita) {
				verso = versoGravita;
			}
		}
		else {
			salto = false;
 			flag = false;
		}
	}

	if ((campo[r - 1][c] == CUBO || campo[r - 1][c] == CARATTERESPECIALEDOPPIO || campo[r - 1][c] == PIATTAFORMA))
	{
		if (versoGravita) {
			salto = false;
			flag = false;
		}
		else {
			flag = true;
			gravitaStop = true;
		}
	}

 	if (flag)
	{
		if (counterProcessoSalto > 1 && salto) {
			salto = true;
			gravitaStop = false;

		}
		if (counterProcessoSalto == 2)
		{
			gravitaStop = false;
			salto = true;
		}
	}
}


std::string CareaDiGioco::checkTeletrasporto(int r,int c)
{
	if (campo[r][c] == PORTALE || campo[r-1][c] == PORTALE || campo[r + 1][c] == PORTALE) {
		return "portale";
	}
	if (campo[r][c] == FINEPORTALE || campo[r - 1][c] == FINEPORTALE || campo[r + 1][c] == FINEPORTALE) {
		return "fine_portale";
	}
	return " ";
}