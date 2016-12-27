#include "CircleEnemy.h"
#include "SimpleDraw.h"
#include "Bullet.h"


int CircleEnemy::numberofenemies = 0;
CircleEnemy::CircleEnemy(float a, float b)
{
	x = a;
	y = b;
	frames = 40;
	rightdir = true;
	numberofenemies++;
	alive = true;
	c = -1;
}
void CircleEnemy::move(void)
{
	if (frames > 0)
	{
		x = x + 5;
		frames--;
	}
	else if (frames < 0)
	{
		x = x - 5;
		frames++;
	}
	else if (frames == 0)
	{
		if (rightdir)
		{
			rightdir = false;
			frames = -40;
		}
		else
		{
			rightdir = true;
			frames = 40;
		}
	}
}

void CircleEnemy::drawEnemyCircle()
{
	useBrush(1, RGB(0, 0, 205));
	drawCircle(x, y, 20);
}
bool CircleEnemy::isAlive()
{
	return alive;
}

void CircleEnemy::checkCol(Bullet& a, int& score)
{
	BulletPos* bullets = a.getPos();
	for (int i = 0;i < a.getNum();i++)
	{		
		if (x + 17 >= bullets[i].posX && x - 17 <= bullets[i].posX && y + 17 >= bullets[i].posY && y - 17 <= bullets[i].posY)
		{				
			a.deleteBullet(i);
			score -= 10;
		}		
	}
}
//void CircleEnemy::deleteCircleEnemy()
//{
//	int c = 0;
//	Squares* temp = new Squares[numofsquares - 1];
//	for (int i = 0;i<numofsquares;i++)
//	{
//		if (i != j)
//		{
//			temp[c] = squares[i];
//			c++;
//		}
//	}
//	delete[] squares;
//	squares = temp;
//	numofsquares--;
//}