#include "Cbase.h"

Cbase::Cbase()
{
}

void Cbase::disegnaBase(int x, int y)
{
	int lato = LATO;
	for (int i = 0; i < WIDTHFINESTRA; i++)
	{
		DrawRectangle(x, y, lato, lato, White, true);
		x += lato;
		
	}

	// linee per far vedere la base
	DrawLine(0, y, 0, y + lato, 1, COLORE);
	DrawLine(0, y, 2000, y, 1, COLORE);
	DrawLine(0, y + lato, 2000, y + lato, 1, COLORE);
}
