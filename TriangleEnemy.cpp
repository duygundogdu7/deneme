#include "TriangleEnemy.h"
#include "EnemyBullet.h"
#include <cmath>


TriangleEnemy::TriangleEnemy(float posX, float posY) : CircleEnemy(posX, posY)
{
	frames = 30;
	rightdir = true;
}

void TriangleEnemy::drawTriangle(EnemyBullet& bullet)
{
	useBrush(1, RGB(255, 0, 0));
	int temp[4][2] = {{x + 25, y}, {x - 25, y}, {x, y - 40}, {x + 25, y}};
	drawPolygon(temp,4);
	if(abs(frames) % 16 == 0)
	{
		bullet.addBullet(x, y);
	}
	
}

void TriangleEnemy::drawTriangleBullet()
{
	b.drawBulletTri (x,y);
}

bool TriangleEnemy::checkCol(Bullet& a)
{
	BulletPos* bullets = a.getPos();
	for(int i=0;i < a.getNum();i++)
	{
		
			if(x +25>= bullets[i].posX && x -25<= bullets[i].posX  && y>= bullets[i].posY )
			{
				c--;
				a.deleteBullet(i);	
				if(c == 0)
				{
					alive = false;
					return false;
				}
			}
	}
	return true;
}