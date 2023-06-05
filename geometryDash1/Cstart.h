#pragma once
#include "drawing.h"
#include"Clettere.h"
class Cstart
{
private:

    bool premutoPause;
    bool premutoSkin;
    bool premutoImpostazioni;


public:
    Cstart();
    void seCliccatoPause(int x, int y);
    void seCliccatoSkin(int x, int y);
    void seCliccatoImpostazioni(int x, int y);

    bool getPremutoPause();
    bool getPremutoSkin();
    bool getPremutoImpostazioni();
    void disegnaTutto();
    void scritta();
};