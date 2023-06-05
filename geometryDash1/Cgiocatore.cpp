#include "Cgiocatore.h"

Cgiocatore::Cgiocatore()
{
	this->x = 5 * PIXMUL;
	this->y = 10 * PIXMUL;
	this->lato = LATO;
    this->altezzaSalto = 0;
    int i = 0;
    this->skin = 1;
}

void Cgiocatore::disegnaGiocatore()
{
    if (skin == 1)
    {
        Draw("skin1.png", x, y);
    }
    else if (skin == 2)
    {
        Draw("SKIN2.png", x, y);
    }
    else if (skin == 3)
    {
        Draw("SKIN3.png", x, y);
    }
}

void Cgiocatore::setCoordinate(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Cgiocatore::setSkin(int skin)
{
    this->skin=skin;
}
