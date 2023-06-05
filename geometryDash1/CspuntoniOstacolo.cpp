#include "CspuntoniOstacolo.h"

CspuntoniOstacolo::CspuntoniOstacolo()
{
	this->Xinizio = 0;
	this->Yinizio = 0;
	this->lunghezza = 0;
	this->altezza = 0;
}

void CspuntoniOstacolo::disegnaSpuntoni()
{
	//1                                                            + 1 per compensare le due approssimazioni della divisione che in totale tolgono 1
	triangolo.setCoordinate(Xinizio, Yinizio + ((altezza / 4) * 3) + 1, lunghezza / 4, altezza / 4);
	triangolo.disegnaTriangolo();
	//2
	triangolo.setCoordinate(Xinizio + (lunghezza / 4), Yinizio + (altezza / 2), lunghezza / 4, altezza / 2);
	triangolo.disegnaTriangolo();
	//3
	triangolo.setCoordinate(Xinizio + (lunghezza / 4) * 2, Yinizio, lunghezza / 4, altezza);
	triangolo.disegnaTriangolo();
	//4
	triangolo.setCoordinate(Xinizio + (lunghezza / 4) * 3, Yinizio + ((altezza / 4)) + 1, lunghezza / 4, (altezza / 4) * 3);
	triangolo.disegnaTriangolo();
}

void CspuntoniOstacolo::setCoordinate(int Xinizio, int Yinizio, int lunghezza, int altezza)
{
	this->Xinizio = Xinizio;
	this->Yinizio = Yinizio;
	this->lunghezza = lunghezza;
	this->altezza = altezza;
}
