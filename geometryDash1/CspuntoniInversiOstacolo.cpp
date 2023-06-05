#include "CspuntoniInversiOstacolo.h"

CspuntoniInversiOstacolo::CspuntoniInversiOstacolo()
{
	this->Xinizio = 0;
	this->Yinizio = 0;
	this->lunghezza = 0;
	this->altezza = 0;
}

void CspuntoniInversiOstacolo::disegnaSpuntoniInversi()
{
	//1                                                            + 1 per compensare le due approssimazioni della divisione che in totale tolgono 1
	triangolo.setCoordinate(Xinizio, Yinizio, lunghezza / 4, altezza / 4);
	triangolo.disegnaTriangoloInverso();
	//2
	triangolo.setCoordinate(Xinizio + (lunghezza / 4), Yinizio, lunghezza / 4, altezza / 2);
	triangolo.disegnaTriangoloInverso();
	//3
	triangolo.setCoordinate(Xinizio + (lunghezza / 4) * 2, Yinizio, lunghezza / 4, altezza);
	triangolo.disegnaTriangoloInverso();
	//4
	triangolo.setCoordinate(Xinizio + (lunghezza / 4) * 3, Yinizio - ((altezza / 4)) + 2, lunghezza / 4, (altezza / 4) * 3);
	triangolo.disegnaTriangoloInverso();
}

void CspuntoniInversiOstacolo::setCoordinate(int Xinizio, int Yinizio, int lunghezza, int altezza)
{
	this->Xinizio = Xinizio;
	this->Yinizio = Yinizio;
	this->lunghezza = lunghezza;
	this->altezza = altezza;
}
