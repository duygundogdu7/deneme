#include "EnemyBullet.h"


EnemyBullet::EnemyBullet()
{
}


EnemyBullet::~EnemyBullet()
{
	delete[] bullets;
}

void EnemyBullet::drawBullet (int i)
{

	useBrush(1, RGB(255,0,0));
	drawRectangle(bullets[i].posX,bullets[i].posY,bullets[i].posX+5,bullets[i].posY+10);
	bullets[i].posY+=10;
}
