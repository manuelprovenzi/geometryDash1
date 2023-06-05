#include "Cstart.h"

Cstart::Cstart()
{
    this->premutoPause = false;
    this->premutoSkin = false;
    this->premutoImpostazioni = false;

}




void Cstart::seCliccatoPause(int x, int y)
{
    int x1 = 178, x2 = 212;
    int y1 = 110, y2 = 208;
    int x3 = 145, x4 = 245;
    int y3 = 141, y4 = 176;
    int x5 = 157, x6 = 234;
    int y5 = 120, y6 = 196;
    if ((x1 <= x && x <= x2) && (y1 <= y && y <= y2))
    {
        this->premutoPause = true;
    }
  
    else if ((x3<= x && x <=x4) && (y3<= y && y <=y4))
    {
        this->premutoPause = true;
    }
    else if ((x5 <= x && x <= x6) && (y5<= y && y <= y6))
    {
        this->premutoPause = true;
    }
    else
    {
        this->premutoPause = false;
   }
 
}

void Cstart::seCliccatoSkin(int x, int y)
{
    int x1 = 66, x2 = 94;
    int y1 = 120, y2 = 198;
    int x3 = 40, x4 = 119;
    int y3 = 146, y4 = 173;
    int x5 = 49, x6 = 110;
    int y5 = 130, y6 = 190;
    if ((x1 <= x && x <= x2) && (y1 <= y && y <= y2))
    {
        this->premutoSkin = true;
    }

    else if ((x3 <= x && x <= x4) && (y3 <= y && y <= y4))
    {
        this->premutoSkin = true;
    }
    else if ((x5 <= x && x <= x6) && (y5 <= y && y <= y6))
    {
        this->premutoSkin = true;
    }
    else
    {
        this->premutoSkin = false;
    }

}

void Cstart::seCliccatoImpostazioni(int x, int y)
{
    int x1 = 295, x2 = 324;
    int y1 = 120, y2 = 199;
    int x3 = 270, x4 = 349;
    int y3 = 146, y4 = 173;
    int x5 = 279, x6 = 340;
    int y5 = 130, y6 = 190;
    if ((x1 <= x && x <= x2) && (y1 <= y && y <= y2))
    {
        this->premutoImpostazioni = true;
    }

    else if ((x3 <= x && x <= x4) && (y3 <= y && y <= y4))
    {
        this->premutoImpostazioni = true;
    }
    else if ((x5 <= x && x <= x6) && (y5 <= y && y <= y6))
    {
        this->premutoImpostazioni = true;
    }
    else
    {
        this->premutoImpostazioni = false;
    }
}




bool Cstart::getPremutoPause()
{
    return this->premutoPause;
}

bool Cstart::getPremutoSkin()
{
    return premutoSkin;
}

bool Cstart::getPremutoImpostazioni()
{
    return premutoImpostazioni;
}

void Cstart::disegnaTutto()
{
    Draw("PAUSE.png", 145, 100);
    Draw("SKIN.png", 40, 120);
    Draw("IMPOSTAZIONI.png", 270, 120);
    scritta();
}

void Cstart::scritta()
{
    char let[] = { 'G', ' ','E',' ','O',' ', 'M',' ', 'E' ,' ', 'T' ,' ', 'R' ,' ','Y',' ',' ',' ','D',' ','A' ,' ','S',' ','H' };
    Clettere lettere = Clettere(25, 18, 60, let, LightGreen, 32, 6);
    lettere.creaParola();
}

