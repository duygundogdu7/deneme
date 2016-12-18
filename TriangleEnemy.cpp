#include "TriangleEnemy.h"


TriangleEnemy::TriangleEnemy(float posX, float posY) : CircleEnemy(posX, posY)
{
	frames = 30;
	rightdir = true;
}

void TriangleEnemy::drawTriangle()
{
	useBrush(1, RGB(255, 0, 0));
	int temp[4][2] = {{x + 25, y}, {x - 25, y}, {x, y - 40}, {x + 25, y}};
	
	drawPolygon(temp,4);
}




