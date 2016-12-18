#include "LifeUp.h"


LifeUp::LifeUp(int x, int y)
{
	posX = x;
	posY = y;
	shot = false;
}


void LifeUp::drawLifeUp()
{
	useBrush(1, RGB(0, 100, 0));
	drawEllipse(posX, posY, 25, 35);
}
