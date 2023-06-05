#include "Clettere.h"

Clettere::Clettere()
{

}

Clettere::Clettere(int grandezza, int xiniziale, int yIniziale, char Lettere[maxLettere], Color colore, int numeroLettere, int spessore)
{
    this->grandezza = grandezza;
    this->xiniziale = xiniziale;
    this->yIniziale = yIniziale;

    // Copia gli elementi dell'array Lettere nella variabile membro corrispondente
    for (int i = 0; i < maxLettere; i++) {
        this->Lettere[i] = Lettere[i];
    }

    this->colore = colore;
    this->numeroLettere = numeroLettere;
    this->spessore = spessore;
}

void Clettere::creaLettera(char lettera)
{
    if (lettera == ' ')
    {
        this->xiniziale = xiniziale + 10;
    }
    if (lettera == 'A')
    {
        int larghezza = grandezza - (grandezza / 3);
        int meta = grandezza / 2;
        DrawLine(xiniziale, yIniziale, xiniziale + meta, yIniziale - grandezza, spessore, colore);
        DrawLine(xiniziale + meta, yIniziale - grandezza, xiniziale + grandezza, yIniziale, spessore, colore);
        DrawLine(xiniziale + (grandezza / 4), yIniziale - (meta / 1.5), xiniziale + (grandezza / 4 * 3), yIniziale - (meta / 1.5), spessore, colore);
        xiniziale = xiniziale + grandezza;
    }
    else if (lettera == 'B')
    {
        int larghezzaB = this->grandezza - (grandezza / 2);



        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - grandezza, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezzaB, yIniziale - (grandezza / 8), spessore, colore);
        DrawLine(xiniziale + larghezzaB, yIniziale - (grandezza / 8), xiniziale + larghezzaB, yIniziale - (grandezza / 5), spessore, colore);
        DrawLine(xiniziale + larghezzaB, yIniziale - (grandezza / 5), xiniziale, yIniziale - (grandezza / 2), spessore, colore);
        //
        DrawLine(xiniziale, yIniziale - grandezza, xiniziale + larghezzaB, yIniziale - grandezza + (grandezza / 8), spessore, colore);
        DrawLine(xiniziale + larghezzaB, yIniziale - grandezza + (grandezza / 8), xiniziale + larghezzaB, yIniziale - grandezza + (grandezza / 5), spessore, colore);
        DrawLine(xiniziale + larghezzaB, yIniziale - grandezza + (grandezza / 5), xiniziale, yIniziale - (grandezza / 2), spessore, colore);

        //
        this->xiniziale = xiniziale + larghezzaB;

    }
    else if (lettera == 'C')
    {
        int larghezzaC = this->grandezza - (grandezza / 3);
        int altezzaC = this->grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezzaC, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezzaC, yIniziale, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezzaC, xiniziale + larghezzaC, yIniziale - altezzaC, spessore, colore);
        this->xiniziale = xiniziale + larghezzaC;
    }
    else if (lettera == 'D')
    {
        int larghezzaD = this->grandezza - (grandezza / 4);
        int altezzaD = this->grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezzaD, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + ((larghezzaD / 4) * 3), yIniziale - (grandezza / 8), spessore, colore);
        DrawLine(xiniziale, yIniziale - altezzaD, xiniziale + ((larghezzaD / 4) * 3), yIniziale - altezzaD + (grandezza / 8), spessore, colore);
        DrawLine(xiniziale + ((larghezzaD / 4) * 3), yIniziale - altezzaD + (grandezza / 8), xiniziale + larghezzaD, yIniziale - (grandezza / 2), spessore, colore);
        DrawLine(xiniziale + ((larghezzaD / 4) * 3), yIniziale - (grandezza / 8), xiniziale + larghezzaD, yIniziale - (grandezza / 2), spessore, colore);


        this->xiniziale += larghezzaD;

    }
    else if (lettera == 'E')
    {
        int altezza = grandezza;
        int meta_altezza = altezza / 2;
        int larghezza = grandezza - (grandezza / 3);

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezza, yIniziale, spessore, colore);
        DrawLine(xiniziale, yIniziale - meta_altezza, xiniziale + meta_altezza, yIniziale - meta_altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale - altezza, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'F')
    {
        int altezza = grandezza;
        int meta_altezza = altezza / 2;
        int larghezza = grandezza - (grandezza / 3);

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - meta_altezza, xiniziale + meta_altezza, yIniziale - meta_altezza, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'G')
    {
        int larghezzaG = this->grandezza - (grandezza / 3);
        int altezzaG = this->grandezza;
        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezzaG, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezzaG, yIniziale, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezzaG, xiniziale + larghezzaG, yIniziale - altezzaG, spessore, colore);
        DrawLine(xiniziale + larghezzaG, yIniziale - altezzaG, xiniziale + larghezzaG, yIniziale - altezzaG + (altezzaG / 4), spessore, colore);
        DrawLine(xiniziale + larghezzaG, yIniziale, xiniziale + larghezzaG, yIniziale - (altezzaG / 2.5), spessore, colore);
        DrawLine(xiniziale + larghezzaG, yIniziale - (altezzaG / 2.5), xiniziale + (larghezzaG / 2), yIniziale - (altezzaG / 2.5), spessore, colore);
        xiniziale = xiniziale + larghezzaG;

    }
    else if (lettera == 'H')
    {
        int larghezzaH = this->grandezza - (grandezza / 3);
        int altezzaH = this->grandezza;
        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezzaH, spessore, colore);
        DrawLine(xiniziale + larghezzaH, yIniziale, xiniziale + larghezzaH, yIniziale - altezzaH, spessore, colore);
        DrawLine(xiniziale, yIniziale - (altezzaH / 2), xiniziale + larghezzaH, yIniziale - (altezzaH / 2), spessore, colore);
        xiniziale = xiniziale + larghezzaH;


    }
    else if (lettera == 'I')
    {
        int altezzaI = this->grandezza;
        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezzaI, spessore, colore);

    }
    else if (lettera == 'L')
    {
        int larghezzaL = this->grandezza - (grandezza / 3);
        int altezzaL = this->grandezza;
        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezzaL, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezzaL, yIniziale, spessore, colore);
        xiniziale = xiniziale + larghezzaL;


    }
    else if (lettera == 'M')
    {

        int larghezza = grandezza - (grandezza / 5);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - grandezza, xiniziale + larghezza / 2, yIniziale - altezza / 2, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale - altezza, xiniziale + larghezza / 2, yIniziale - altezza / 2, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale, xiniziale + larghezza, yIniziale - altezza, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'N')
    {
        int larghezza = grandezza - (grandezza / 5);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale - altezza, xiniziale + larghezza, yIniziale, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'O')
    {
        int lato = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale + lato, yIniziale, spessore, colore);
        DrawLine(xiniziale + lato, yIniziale, xiniziale + lato, yIniziale - lato, spessore, colore);
        DrawLine(xiniziale + lato, yIniziale - lato, xiniziale, yIniziale - lato, spessore, colore);
        DrawLine(xiniziale, yIniziale - lato, xiniziale, yIniziale, spessore, colore);

        xiniziale = xiniziale + lato;
    }
    else if (lettera == 'P')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - (altezza / 2), xiniziale + larghezza, yIniziale - (altezza / 2), spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale - altezza, xiniziale + larghezza, yIniziale - (altezza / 2), spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'Q')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;
        int y2 = yIniziale - altezza;
        int x2 = xiniziale + larghezza;
        DrawLine(xiniziale, yIniziale, x2, yIniziale, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale, y2, spessore, colore);
        DrawLine(xiniziale, y2, x2, y2, spessore, colore);
        DrawLine(x2, yIniziale, x2, y2, spessore, colore);
        xiniziale = xiniziale + larghezza;
        DrawLine(x2 - (larghezza / 2), yIniziale - (larghezza / 2), x2 + (larghezza / 4), yIniziale + (larghezza / 4), spessore, colore);

    }

    else if (lettera == 'S')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale + larghezza, yIniziale, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale, xiniziale + larghezza, yIniziale - altezza / 2, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale - altezza / 2, xiniziale, yIniziale - altezza / 2, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza / 2, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale - altezza, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }

    else if (lettera == 'R')
    {
        int altezza = grandezza;
        int meta_altezza = altezza / 2;
        int larghezza = grandezza;
        int meta_larghezza = larghezza / 1.5;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + meta_larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale + meta_larghezza, yIniziale - altezza, xiniziale + meta_larghezza, yIniziale - meta_altezza, spessore, colore);
        DrawLine(xiniziale + meta_larghezza, yIniziale - meta_altezza, xiniziale, yIniziale - meta_altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - meta_altezza, xiniziale + meta_larghezza, yIniziale, spessore, colore);
        xiniziale = xiniziale + meta_larghezza;
    }
    else if (lettera == 'T')
    {
        int larghezza = grandezza;
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale + (larghezza / 2), yIniziale, xiniziale + (larghezza / 2), yIniziale - altezza, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'U')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale + larghezza, yIniziale, xiniziale + larghezza, yIniziale - altezza, spessore, colore);

        DrawLine(xiniziale, yIniziale, xiniziale + larghezza, yIniziale, spessore, colore);


        xiniziale = xiniziale + larghezza;

    }
    else if (lettera == 'V')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;

        DrawLine(xiniziale + (larghezza / 2), yIniziale, xiniziale, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale + (larghezza / 2), yIniziale, xiniziale + larghezza, yIniziale - altezza, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'W')
    {
        int larghezza = grandezza + (grandezza / 3);
        int altezza = grandezza;
        int y2 = yIniziale - grandezza;
        DrawLine(xiniziale, y2, xiniziale + (larghezza / 4), yIniziale, spessore, colore);
        DrawLine(xiniziale + (larghezza / 4), yIniziale, xiniziale + (larghezza / 4 * 2), y2, spessore, colore);
        DrawLine(xiniziale + (larghezza / 4 * 2), y2, xiniziale + (larghezza / 4 * 3), yIniziale, spessore, colore);
        DrawLine(xiniziale + (larghezza / 4 * 3), yIniziale, xiniziale + larghezza, y2, spessore, colore);
        xiniziale = xiniziale + larghezza;




    }
    else if (lettera == 'Y')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;
        int y2 = yIniziale - grandezza;
        DrawLine(xiniziale + (larghezza / 2), yIniziale, xiniziale + (larghezza / 2), yIniziale - (altezza / 2), spessore, colore);
        DrawLine(xiniziale + (larghezza / 2), yIniziale - (altezza / 2), xiniziale, y2, spessore, colore);
        DrawLine(xiniziale + (larghezza / 2), yIniziale - (altezza / 2), xiniziale + larghezza, y2, spessore, colore);


        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'X')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale, xiniziale + larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
    else if (lettera == 'Z')
    {
        int larghezza = grandezza - (grandezza / 3);
        int altezza = grandezza;

        DrawLine(xiniziale, yIniziale - altezza, xiniziale + larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezza, yIniziale - altezza, spessore, colore);
        DrawLine(xiniziale, yIniziale, xiniziale + larghezza, yIniziale, spessore, colore);

        xiniziale = xiniziale + larghezza;
    }
}

void Clettere::creaParola()
{
    for (int i = 0; i < this->numeroLettere; i++)
    {
        creaLettera(Lettere[i]);
    }
}