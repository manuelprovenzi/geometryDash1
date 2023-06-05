#include "drawing.h"
#include <iostream>
#include "Clevel1.h"
#include "Cstart.h"
#include "CmenuSkin.h"

using namespace std;

int main()
{
    CmenuSkin menu;
    Cstart home = Cstart();
    bool inizio = false;
    bool skin = false;
    bool impostazione = false;
    bool tot = false;
    bool flag = true;
    bool b = true;
    int x = -1, y=-1;

    home.disegnaTutto();
    while (flag)
    {

        if (LeftMousePressed() && MouseX() != x && MouseY() != y)
        {
            x = MouseX();
            y = MouseY();
            home.seCliccatoPause(x, y);
            inizio = home.getPremutoPause();

            if (b) {
                home.seCliccatoSkin(x, y);
                skin = home.getPremutoSkin();
            }

            home.seCliccatoImpostazioni(x, y);
            impostazione = home.getPremutoImpostazioni();

            //x = -1;
            //y = -1;
            if (skin)
            {
                Clear();
                menu.disegnaMenu();
                tot = true;

                while (tot)
                {
                    if (LeftMousePressed() && MouseX() != x && MouseY() != y)
                    {
                        x = MouseX();
                        y = MouseY();
                        bool c = menu.seCliccato1(x, y);
                        bool c2 = menu.seCliccato3(x, y);
                        bool c1 = menu.seCliccato2(x, y);

                        if (c)
                        {
                            tot = false;
                            Clear();
                            home.disegnaTutto();

                        }
                        else if (c1)
                        {
                            tot = false;
                            Clear();
                            home.disegnaTutto();
                        }
                        else if (c2)
                        {
                            tot = false;
                            Clear();
                            home.disegnaTutto();
                            Wait(200);
                        }

                        b = true;
                        skin = true;

                        //x = -1;
                        //y = -1;
                    }
                }
            }


            if (inizio)
            {
                Clevel1 livello1;
                livello1.Game(menu.getValSkin());
                flag = false;
            }

            if (impostazione)
            {
                // Inserisci il codice per la gestione delle impostazioni qui
            }
        }
    }

    return 0;
}






