#include "LifeUp.h"


LifeUp::LifeUp(int x, int y)
{
	posX = x;
	posY = y;
	alive = true;
	c = 5;
}

bool LifeUp::isAlive()
{
	return alive;
}

void LifeUp::drawLifeUp()
{
	useBrush(1, RGB(0, 100, 0));
	drawEllipse(posX, posY, 25, 35);
}

void LifeUp::checkCol(Bullet& a, int& score, int& cnt)
{
	BulletPos* bullets = a.getPos();
	for (int i = 0;i < a.getNum();i++)
	{
			if (posX + 25 >= bullets[i].posX && posX - 25 <= bullets[i].posX && posY + 35 == bullets[i].posY)
			{
				c--;
				a.deleteBullet(i);
				if (c == 0)
				{
					alive = false;
					cnt--;
					score += 100;
				}
			}
		}
}
//void LifeUp::deleteLifeUp()
//{
//	useBrush(1, RGB(255,255,255));
//	drawEllipse(posX, posY, 25, 35);
//}