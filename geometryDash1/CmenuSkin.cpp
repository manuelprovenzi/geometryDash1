#include "CmenuSkin.h"
CmenuSkin::CmenuSkin()
{
	this->valSkin = 1;
}

void CmenuSkin::disegnaMenu()
{
	Clear();
	Draw("SFONDOSKIN.png", 0, 0);
}

bool CmenuSkin::seCliccato1(int x, int y)
{
	int x1 = 31, x2 = 92;
	int y1 = 90, y2 = 160;
	if ((x1 <= x && x <= x2) && (y1 <= y && y <= y2))
	{
		this->valSkin = 1;
		return true;
	}
	return false;
}

bool CmenuSkin::seCliccato2(int x, int y)
{
	int x1 = 168, x2 = x1 + 63;
	int y1 = 90, y2 = 160;
	if ((x1 <= x && x <= x2) && (y1 <= y && y <= y2))
	{
		this->valSkin = 2;
		return true;
		
	}
	return false;
}

bool CmenuSkin::seCliccato3(int x, int y)
{
	int x1 = 306, x2 = x1 + 62;
	int y1 = 90, y2 = 160;
	if ((x1 <= x && x <= x2) && (y1 <= y && y <= y2))
	{
		this->valSkin = 3;
		return true;
	}
	return false;
}

int CmenuSkin::getValSkin()
{
	return valSkin;
}
